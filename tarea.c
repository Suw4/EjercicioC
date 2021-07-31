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

    int coord[n][2],f,c;
    int tipo;

    printf("Ingrese el tipo de llenado que desee: \n 1.Aleatorio \n 2.Manual");
    scanf("%d",&tipo);

    switch (tipo){
    case 1:
        for (f=0; f<n; f++){
            for (c=0; c<2; c++){    
                coord[f][c]=rand()%n*2;  
            }     
        }
        break;

    case 2:
        for (f=0; f<n; f++){
            for (c=0; c<2; c++){
                printf("Digite coordenadas [%d][%d]: ", f, c);
                scanf("%d", &coord[f][c]);
            }     
        }
        break;
        
    default:
        printf("Ingrese valor válido!");
        break;
    }   

    //Imprime los valores

    for (f=0; f<n; f++){
        printf("%d. ", cont++);
        for (c=0; c<2; c++){
            printf("[%d]",coord[f][c]);
        }
        printf("\n");       
    }
    
    printf("\nFinalizado...");

    return 0;
}