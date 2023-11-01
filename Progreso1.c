//Construya un programa que reciba como dato de entrada un número entero positivo, n, y regrese como dato de salida la representación de este número en hexadecimal.//
#include<stdio.h>

int main(){
    int num;
    //se pide al usuario ingresar el numero entero//
    printf("Ingrese un numero entero:\n");
    scanf("%d", &num);
    //creacion del codigo para calcular el hexadecimal de un numero//
    if (num>0)
    {
        
        printf("El hexadecimal de un numero es:%x", num);
        
    }else{
       printf("El numero ingresado debe ser entero");
    }
    return 0;
}