#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20
int main()
{
    int i;
    double vt[N], *Pvt;
    Pvt = vt; // puntero apuntado a la primera direccion de memoria del arreglo &vt[0]
    srand(time(NULL));

    for (i = 0; i < N; i++)
    {
        *(Pvt + i) = 1+rand()%100;
        printf("%f   ", *(Pvt + i));
    }
    

}