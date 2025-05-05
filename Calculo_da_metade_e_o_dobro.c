//Calcula a metade e o dobro do número inserido pelo usuário

  #include<stdio.h>
	#include <locale.h>
	main()
	{
	setlocale (LC_ALL,"Portuguese");
	//variaveis de processamento
	float dobro;
	float metade;
	float x;
	

	printf("Seja bem vindo ao meu programa que calcula a divisão e metade\n");
	//pedir para pessoa digitar um numero
	printf("Digite algum número:");
	scanf("%f",&x);
	//primeiro calculo, pegar o valor X e multiplicar por 2
	dobro=x*2;
	//segundo calculo, pegar o valor X e dividir por 2
	metade=x/2;
	//saida do valor é o dobro e a metado do valor x
	printf("\nA metade é: %f \nO dobro é: %f\n" ,metade,dobro);
	printf("Fim do programa");
	
	system("pause");
	
	}
	
