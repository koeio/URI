/*ATIVIDADE URI - 1037*/
#include<stdio.h>

main(void){
	float num;
	scanf("%f",&num);
	if (num <= 100 && num > 75)
		printf("Intervalo (75,100]\n");
	else if (num <= 75 && num > 50)
		printf("Intervalo (50,75]\n");
	else if (num <= 50 && num > 25)
		printf("Intervalo (25,50]\n");
	else if (num <= 25 && num >= 0)
		printf("Intervalo [0,25]\n");
	else
		printf("Fora de intervalo\n");
}
