#include <stdio.h>
#define DIM 5

int main(){
int vector[DIM], i, j, num;
i=0;
do{
    printf("Ingrese el numero: ");
    scanf("%d",&num);
    if(num!=0){
        i++;
        vector[DIM-i] = num;
    }

}while((num!=0) && (i<DIM));

if(i>0){
    printf("Los valores ingrados en orden inverso: ");
    for(j=DIM-i; j<DIM; j++){
        printf("%d ", vector[j]);
    }
}
return 0;
}
