#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,x,y,cont;
    cont = 1;

    do{
    printf("Ingrese la cantidad de puntos que desea:\n n = ");
    scanf("%d", &n);

    if(n<0){
        printf("Ingrese un valor valido!\n");
    }
    }while (n<1);

    float coord[n][2];
    int f,c;
    
    for (f=0; f<n; f++){
        for (c=0; c<2; c++){    
            &coord[i][j]=rand()%n*2;  
        }     
    }    

    for (f=0; f<n; f++){
        for (c=0; c<2; c++){
            printf("Digite coordenadas [%d][%d]: ", i, j);         
            scanf("%d", &coord[i][j]);   
        }     
    }

    for (f=0; f<n; f++){
        printf("%d. ", cont++);
        for (c=0; c<2; c++){
            printf("[%d]",coord[i][j]);
        }
        printf("\n");       
    }
    
    printf("\nFinalizado...");

    return 0;
}