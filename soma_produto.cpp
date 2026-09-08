#include <stdio.h>
int main(){
	
int n1, n2, sm, prdt;
	
	printf("Digite o primeiro numero (inteiro): ");
	scanf("%d", &n1 );	
	printf("Digite o segundo numero(inteiro): ");
	scanf("%d", &n2 );
	
	sm = (n1+n2);
	prdt = (n1*n2);
	
	printf("Soma: %d ", sm);
	printf("\nProduto: %d ", prdt);
	
}	

