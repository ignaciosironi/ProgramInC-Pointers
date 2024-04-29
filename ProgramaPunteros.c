#include <stdio.h>
#include<stdlib.h>
#include<string.h>


void cargar(int matriz[3][4], int *puntero);
void mostrar(int matriz[3][4], int *puntero);

int main()
{
    
    int dim=12;
    int matriz[3][4];
    int *puntero;
    
    puntero=&matriz[0][0];
    
    cargar(matriz, puntero);
    mostrar(matriz, puntero);
    

    return 0;
}


void cargar(int matriz[3][4], int *puntero){
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("ingrese un número para la posición [%d][%d] de la matriz: ",i,j);
            scanf("%d",&matriz[i][j]);
            *(puntero++)=matriz[i][j];
        } 
    }
}

void mostrar(int matriz[3][4], int *puntero){
    int i,j;
    
    printf("La matriz es: \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("[%d]",matriz[i][j]);        
        }
        printf("\n");
    }
    
    printf("La dirección de memoria de cada posición de la matriz recorrido con el puntero es: \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("[%p]",puntero);
            puntero++;
            
        }
        puntero++;
        printf("\n");
    }
    
    puntero=&matriz[0][0];
    
    printf("El contenido de la matriz recorrida con el puntero es: \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("[%d]",*puntero);
            puntero++;
        }
        printf("\n");    
    }
    
    
}