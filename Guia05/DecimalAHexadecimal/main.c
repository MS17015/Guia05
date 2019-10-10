#include <stdio.h>
int main() {
    long int decimal,numero;
    int i=1,j,temp;
    char hexadecimalN[100];
    printf("Ingrese numero decimal: ");
    scanf("%ld",&decimal);
    numero = decimal;
    while(numero!=0) {
        temp = numero % 16;

        if( temp < 10)
            temp =temp + 48; else
            temp = temp + 55;
        hexadecimalN[i++]= temp;
        numero = numero / 16;
    }
    printf("El numero hexadecimal es  %d: ",decimal);
    for (j = i -1 ;j> 0;j--)
        printf("%c",hexadecimalN[j]);
    return 0;
}