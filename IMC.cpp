#include <stdio.h>
int main(){
float kg, altura, imc, pesoideal, perder, ganhar;
int categoria;

	  printf("Insira seu peso (kg): ");
	  scanf("%f", &kg);
	  printf("\nInsira sua altura (m): ");
	  scanf("%f", &altura);
	  
	  imc = kg/(altura*altura);
	  printf("Seu IMC eh: %2.f\n", imc);
	
	if(imc < 17) {
		categoria = 1;
	}
	else if(imc>=17 && imc<=18.49){
		categoria = 2;
	}
	else if(imc>=18.50 && imc<=24.99){
		categoria = 3;
	}
	else if(imc>=25 && imc<=29.99){
		categoria = 4;
	}
	else if(imc>=30 && imc<=34.99){
		categoria = 5;
	}
	else if (imc>=35 && imc>=39.99){
		categoria = 6;
	}
	else if(imc>=40){
		categoria = 7;
	}
	else{
		categoria = 8;
	}
	
	switch(categoria){
		case 1:
			printf("Muito abaixo do peso.\n");
			break;
		case 2:
			printf("Abaixo do peso.\n");
			break;
		case 3:
			printf("\n");
			break;
		case 4:
			printf("Acima do peso.\n");
			break;
		case 5:
			printf("Obesidade I.\n");
			break;
		case 6:
			printf("Obesidade II (severa).\n");
			break;
		case 7:
			printf("Obsidade III (mórbida).\n");
			break;
		default:
			printf("IMC Invalido!!\nTente Novamente.");
			break;
	}
	
	switch(categoria){
		case 4:
		case 5:
		case 6:
		case 7:
			pesoideal = 25 * (altura*altura);
			perder = kg - pesoideal;
			printf("Voce precisa perder %2.fkg para chegar no peso ideal", perder);
			break;
		case 1:
		case 2:
			pesoideal = 18.5 * (altura*altura);
			ganhar = pesoideal - kg;
			printf("Voce precisa ganhar %2.fkg para chegar no peso ideal", ganhar);
			break;
		case 3:
			printf("Parabens! Voce esta no peso ideal. :)");
			break;
	}
}
