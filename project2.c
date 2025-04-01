#include <stdio.h>
#include <stdlib.h>

int main() {
    int op;
    float num1, num2, resp;

    printf("Opa eai, digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
    scanf("%f", &num2);

    printf("Escolha uma operacao:\n");
    printf("1- Soma\n");
    printf("2- Subtracao\n");
    printf("3- Multiplicacao\n");
    printf("4- Divisao\n");
    scanf("%d", &op);

    if (op == 1) {
        resp = num1 + num2;
    } else if (op == 2) {
        resp = num1 - num2;
    } else if (op == 3) {
        resp = num1 * num2;
    } else if (op == 4) {
        if (num2 != 0) {
            resp = num1 / num2;
        } else {
            printf("Erro: divisão por zero não e permitida.\n");
            return 1; // Saída com erro
        }
    } else {
        printf("Opcao invalida hahah\n");
        return 1; // Saída com erro
    }

    printf("Resultado: %.2f\n", resp);

    system("pause");
    return 0;
}
