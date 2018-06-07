#include <stdio.h>
#include <stdlib.h>
#include <Math.h>


int main(){
    int nEntregas, i;
    double epi = 3.1415926;
    double deg2radMult = epi / 180;
    double radius = 6378.137;
    double dLongitude;
    float latInicial = -7.162310, longInicial = -34.817222;

    printf("Quantas entregas deseja realizar hoje? \n");
    scanf("%d", &nEntregas); // Armazena o número de entregas que vão ser registradas

    float latitude[nEntregas], longitude[nEntregas]; // Cria duas matrizes para armazenar latitude e longitude de cada entrega

    for(i=0; i<nEntregas; i++){ // Armazena latitude e longitude de cada entrega na matriz criada
        printf("Digite as cordenadas da entrega em Latitude e Longitude \n");
        scanf("%f %f", &latitude[i], &longitude[i]);
    }

    //TRATAMENTO DA LOCALIZAÇÃO
    // Calcula a distância de cada entrega ao entregador e armazena na matriz criada antes

    double distancia[nEntregas]; // Cria matriz para armazenar a distância das entregas ao entregador

    for(i=0; i<nEntregas; i++){
        latitude[i] = latitude[i] * deg2radMult;
        longitude[i] = longitude[i] * deg2radMult;
        latInicial = latInicial * deg2radMult;
        longInicial = longInicial * deg2radMult;

        dLongitude = longInicial - longitude[i];
        distancia[i] = acos(sin(latitude[i])* sin(latInicial) + cos(latitude[i]) * cos(latInicial) * cos(dLongitude)) * radius;

        distancia[i] = distancia[i] * 0.621371192;

        printf("%llf m \n", distancia[i]);
    }

    return 0;
}


























