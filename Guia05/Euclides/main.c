#include <stdio.h>

    int main() {
        int a,b,i,m,mcd;

        printf("Introduce el primer numero: ");
        scanf("%d",&a);
        printf("Introduce el segundo numero: ");
        scanf("%d",&b);
        if (a<b) {
            m = a;
        } else {
            m = b;
        }
        for (int i=1; i<=m;i++) {
            if (a%i==0 && b%i==0) {
                mcd=i;
            }
        }
        printf("El maximo comun divisor es: %8d" , mcd);
        printf("\n");
        printf("\n");
        printf("\n");
    }
