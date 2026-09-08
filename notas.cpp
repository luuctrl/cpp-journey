#include <stdio.h>
int main(){
	
float nt1, nt2, nt3, media;

	  printf("Digite a primeira nota: ");
	  scanf("%f", &nt1);
	  printf("Digite a segunda nota: ");
	  scanf("%f", &nt2);
	  printf("Digite a terceira nota: ");
	  scanf("%f", &nt3);
	  	  
	  media = (nt1+nt2+nt3)/3;
	  printf("Sua media eh: %f", media);
}
