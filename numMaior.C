#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"Portuguese");
    int num1, num2;
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    /*
    if (num1 > num2) {
        printf("%d é maior que %d.\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d é maior que %d.\n", num2, num1);
    } else {
        printf("Os valores são iguais.\n");
    }
    */
    int opcao;
    if (num1 > num2) {
        opcao = 1;
    } else if (num1 < num2) {
        opcao = 2;
    } else {
        opcao = 3;
    }

    switch (opcao) {
        case 1:
            printf("%d é maior que %d.\n", num1, num2);
            break;
        case 2:
            printf("%d é maior que %d.\n", num2, num1);
            break;
        case 3:
            printf("Os valores são iguais.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}