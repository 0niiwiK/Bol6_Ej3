#include <stdio.h>

int main() {
    int num1,num2;
    float resul=0;
    char operacion;
    printf("Introduce el primer valor: ");
    scanf("%d", &num1);
    fflush(stdin);
    printf("Introduce el primer valor: ");
    scanf("%d",&num2);
    fflush(stdin);
    printf("Introduce el codigo de operacion"
           "\n(S)uma | (R)esta | (M)ultiplicacion | (D)ivision: ");
    scanf("%c",&operacion);
    fflush(stdin);
    switch (operacion) {
        case 'S' | 's':
            resul=num1+num2;
            break;
        case 'R' | 'r':
            resul=num1-num2;
            break;
        case 'M' | 'm':
            resul=num1*num2;
            break;
        case 'D' | 'd':
            if (num2!=0)
                resul=(float)num1/(float)num2;
            else
                printf("No se puede dividir entre 0");
            break;
        default:
            printf("No se ha seleccionado ninguna operacion, se aplicara la suma por defecto.");
            resul=num1+num2;
            break;
    }
    if ((operacion!=('d'|'D')) || (num2!=0))
        printf("El resultado es: %f",resul);
    return 0;
}
