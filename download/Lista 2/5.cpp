//5 – Faça um algoritmo para calcular o volume de um cilindro(pi*r^2*h)
 
 #include<stdio.h>
 #define PI 3.14
 #include<math.h>
 
 main()
 {
	float raio;
	float altura;
	float vol=0;
	
	printf ("Qual o raio do cilindro:\n");
	scanf("%f",&raio);
	
	printf("Qual a altura do cilindro:\n");
	scanf ("%f",&altura);
	
	vol=PI*pow(raio,2)*altura;
	
	printf("O volume do cilindro e: %2.f",vol);
 }
