#include <stdio.h>
#include <math.h>

int main()
{
    float alvo_x, alvo_y, raio_alvo, disparo_x, disparo_y, raio_disparo;
    float distancia, somaRaios;

    scanf("%f %f %f\n%f %f %f", &alvo_x, &alvo_y, &raio_alvo, &disparo_x, &disparo_y, &raio_disparo);

    distancia = (pow((disparo_x - alvo_x), 2) + pow((disparo_y - alvo_y), 2));
    somaRaios = pow((raio_disparo + raio_alvo),2);

    if(distancia <= somaRaios) printf("ACERTOU");
    else printf("ERROU");
}