#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7
#define compu 3

struct PC
{
    int velocidad;
    int anio;
    int tipoproc;
    int cantidad;
}typedef pc;

void listarestruc(pc *punt);
void listarpc(pc *punt);
void pcmasvieja(pc *punt);
void masveloz(pc *punt);

int main() {
    
    int aux;
    pc computadora[compu];
    struct PC *punteropc;
    punteropc = computadora;
    
    for (int a = 0; a < compu; a++)
    {
        printf("\n--------------------PC[%d]-------------------\n",a+1);
        printf("Ingrese la velocidad de procesamiento en GHz");
        scanf("%d", &(punteropc->velocidad) );
        while (punteropc->velocidad < 1 || punteropc->velocidad > 3)
        {
            printf("Considere valores enteros entre 1 y 3: ");
            scanf("%d", &(punteropc->velocidad) );
        }

        printf("Ingrese el año de fabricacion");
        scanf("%d", &(punteropc->anio) );
        while (punteropc->anio < 2000 || punteropc->anio > 2017)
        {
            printf("Considere valores enteros entre 2000 y 2017: ");
            scanf("%d", &(punteropc->anio) );
        }

        printf("Ingrese la cantidad de cantidad");
        scanf("%d", &(punteropc->cantidad) );
        while (punteropc->cantidad < 1 || punteropc->cantidad > 8)
        {
            printf("Considere valores enteros entre 1 y 8: ");
            scanf("%d", &(punteropc->cantidad) );
        }
        
        printf("Ingrese el tipo de procesador. \n 1.Intel \n 2.AMD \n 3.Celeron \n 4.Athlon \n 5.Core \n 6.Pentium ");
        scanf("%d", &(punteropc->tipoproc) );
        while (punteropc->tipoproc < 1 || punteropc->tipoproc > 6)
        {
            printf("Ingrese nro que corresponda al tipo de procesador. \n 1.Intel \n 2.AMD \n 3.Celeron \n 4.Athlon \n 5.Core \n 6.Pentium \n---> ");
            scanf("%d", &(punteropc->tipoproc) );
        }
        punteropc++;
    }
    
    struct PC *punteroaux=computadora;

    printf("\nCaracteristicas de la pc más veloz\n");
    masveloz(punteroaux);
}

void listarestruc(pc *punt) {
    int aux;
    printf("velocidad de procesamiento en GHz: %d \n",punt->velocidad);

        printf("año de fabricacion: %d\n",punt->anio);
        
        printf("cantidad de cantidad: %d\n",punt->cantidad);
        
        aux = punt->tipoproc;
        
        printf("tipo de procesador: ");
        switch (aux)
        {
        case 1:
            printf("Intel\n");
            break;
        case 2:
            printf("AMD\n");
            break;
        case 3:
            printf("Celeron\n");
            break;
        case 4:
            printf("Athlon\n");
            break;
        case 5:
            printf("Core\n");
            break;
        case 6:
            printf("Pentium\n");
            break;
        default:
            printf("que");
            break;
        }
}
void listarpc(pc *punt) {
    for (int a = 0; a < compu; a++)
    {
        printf("\n-------------------------------PC[%d]-------------------------------\n",a+1);
        
        listarestruc(punt);
        punt++;
    }
}
void pcmasvieja(pc *punt) {
    int anio =2018;
    pc *puntaux;
    for (int i = 0; i < compu; i++)
    {
        if (anio > punt->anio)
        {
            anio = punt->anio;
            puntaux = punt;
        }
        punt++;
    }
    listarestruc(puntaux);
}
void masveloz(pc *punt) {
    int velocidad=0;
    pc *puntaux;
    for (int i = 0; i < compu; i++)
    {
        if (velocidad < punt->velocidad)
        {
            velocidad = punt->velocidad;
            puntaux = punt;
        }
        punt++;
    }
    listarestruc(puntaux);
}