#include<stdio.h>

int main(){
    int num,hexa;
    //se pide al usuario ingresar el numero entero//
    printf("Ingrese un numero entero:\n");
    scanf("%d", &num);
    //creacion del codigo para calcular el hexadecimal de un numero//
    hexa = num%6;
    printf("El hexadecimal del numero es:%d", hexa);

    return 0;
}