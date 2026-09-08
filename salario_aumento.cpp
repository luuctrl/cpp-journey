#include <stdio.h>
int main() {
	
float salario, novosalario, aumento, aumento1;

	  printf("Insira o valor do salario atual.\n(Separe os centavos com ponto final): ");
	  scanf("%f", &salario);
	  printf("\n");
	  printf("Insira a porcentagem de aumento.\n(Nao utilize o simbolo de porcentagem '%%'): ");
	  scanf("%f", &aumento);
	  
	  aumento1 = (aumento/100);
	  novosalario = (salario*aumento1) + salario;
	
	printf("Seu novo salario eh: %2.fR$", novosalario);
}
