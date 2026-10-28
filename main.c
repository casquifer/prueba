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
    }
    // TODO que alguien haga el else ratas 
    
    return 0;
}