#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 0; 
    int num3 = 0;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("Maior: %d\n", num1);
        } else {
            printf("Maior: %d\n", num3);
        }
    } else if (num2 > num3) {
        printf("Maior: %d\n", num2);
    } else {
        printf("Maior: %d\n", num3);
    }


    return 0;
}
