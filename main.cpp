#include <stdio.h>
#include <stdlib.h>
#include <Math.h>


int main(){
    int nEntregas, i;
    double epi = 3.1415926;
    double deg2radMult = epi / 180;
    float latInicial = -7162310, longInicial = -34817222;

    printf("Quantas entregas deseja realizar hoje? \n");
    scanf("%d", &nEntregas);

    float latitude[nEntregas], longitude[nEntregas];

    double localizacao[nEntregas];

    for(i=0; i<nEntregas; i++){
        printf("Digite as cordenadas da entrega em Latitude e Longitude \n");
        scanf("%f %f", &latitude[i], &longitude[i]);
    }

    //TRATAMENTO DA LOCALIZAÇÃO

    for(i=0; i<nEntregas; i++){
        latitude[i] = latitude[i] * deg2radMult;
        longitude[i] = longitude[i] * deg2radMult;
        latInicial = latInicial * deg2radMult;
        longInicial = longInicial * deg2radMult;
    }
    return 0;
}

https://www.mapanet.eu/PT/resources/Script-Distance.htm
https://gist.github.com/CoolerVoid/1855988
