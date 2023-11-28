#include <stdio.h>
#include <stdlib.h>
int main(){
    int y, x;
    srand(time(NULL));
    printf("Escriba un tamaño de filas\n");
    scanf("%d", &y);
    printf("Escriba un tamaño de columnas\n");
    scanf("%d", &x);
    int matA[y][x];
    int matB[y][x];
    int matC[y][x];
    /* lo que hacemos en este for es dar numeros random 
    entre 0 y 10 a 2 matrices y luego las sumamos en la tercera mariz*/
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            matA[i][j]=rand()%101;
            matB[i][j]=rand()%101;
            matC[i][j]=matA[i][j]+matB[i][j];
        }
    }
    /*imprimimos las 3 matrices*/
    printf("La matriz A es:\n");   
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf(" %d ", matA[i][j]);
        }
        printf("\n"); 
    }
    printf("La matriz B es:\n");   
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf(" %d ", matB[i][j]);
        }
        printf("\n"); 
    }
    printf("La suma de las matrices es:\n");   
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf(" %d ", matC[i][j]);
        }
        printf("\n");
    }
    return 0;
}