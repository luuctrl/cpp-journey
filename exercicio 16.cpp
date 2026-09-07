#include <stdio.h>
int main() {
	
char numero;
float n1, n2, soma, diferenca1, diferenca2, produto, divisao;

	 printf("1- Soma de 2 numeros.\n2- Diferenca entre 2 numeros (maior pelo menor).\n3- Produto entre 2 numeros.\n4- Divisao entre 2 numeros (o denominador nao pode ser zero).\nOpcao: ");
	 scanf("%c", &numero);
	 
	 if(numero!='1' && numero!='2' && numero!='3' && numero!='4'){
	 printf("Opcao invalida.\nTente novamente.");
  	 return 0;
	 }
	 
	 printf("Insira o primeiro numero: ");
	 scanf("%f", &n1);
	 printf("Insira o segundo numero: ");
	 scanf("%f", &n2);
	 
	 if(numero=='1'){
	 soma = n1+n2;
	 printf("Resultado: %2.f", soma);
	 }
	 if(numero=='2'){
	 if(n1>n2){
	 	diferenca1 = n1-n2;
	 	printf("Resultado: %2.f", diferenca1);
	 }
	 else if(n2>n1){
	 	diferenca2 = n2-n1;
		 printf("Resultado: %2.f", diferenca2);
	  }
}
	 if(numero=='3'){
	 	produto = n1*n2;
	 	printf("Resultado: %2.f", produto);
	 }
	 if(numero=='4'){
	 }
	 	if (n2==0){
	 		printf("Operacao invalida");
		 }
	 	 else{
	 	 	divisao = n1/n2;
		  }
  	 	  return 0;
  	 	  
}
	 
	 
	 
	
	

