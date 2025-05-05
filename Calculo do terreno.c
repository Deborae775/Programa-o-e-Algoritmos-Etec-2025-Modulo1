#include<stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL,"Portuguese");
	float l,c,ar;
	printf("\t\t...Calculo de áre de terreno\n\n");
	printf("\t Digite a largura do terreno:");
	scanf("%f", &l);
	printf("\tDigite o comprimento do terreno:");
	scanf("%f", &c);
	ar= l * c;
	printf("\tA area do terreno de largura %.2f e comprimento %.2f = %.2f\n" , l, c, ar,"\n");
	system("pause");

}
