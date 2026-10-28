#include <stdio.h>

int main(){
    int num;

    printf("Ingrese un numero entero:");
    scanf("%d", num);

    if (num > 0){
        printf("Es positivo");
        if(num > 100){
            printf("el numero es mayor a 100");
        }
        if (num == 100) {
            printf("el numero es 100");
        }
        if (num < 100) {
            printf("el numero es menor 100");
        }
    } else {
        printf("el numero es negativo");
    } 
    
    return 0;
}