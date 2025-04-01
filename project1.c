#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float numero1, numero2;
	
	printf("Bem vindo a calculadora particular de Carlos Cezar\n\n");
	printf("Digite o primeiro numero\n");
	scanf("%f", &numero1);
	
	printf("Digite o segundo numero\n");
	scanf("%f", &numero2);

 	printf("\nResultados das operacoes:\n\n");
 	printf("Soma: %.2f + %.2f = %.2f\n", numero1, numero2, numero1 + numero2);
    printf("Subtracao: %.2f - %.2f = %.2f\n", numero1, numero2, numero1 - numero2);
    printf("Multiplicacao: %.2f * %.2f = %.2f\n", numero1, numero2, numero1 * numero2);
	
	if(numero2 != 0 ) {
		printf("Divisao: %.2f / %.2f = %2f\n\n", numero1, numero2, numero1 / numero2);
	}
	else {
		printf("Divisao: Nao se pode dividir por zero...\n\n");
	}
		system("pause");
		return 0;
	}
