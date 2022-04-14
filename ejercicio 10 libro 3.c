#include<stdio.h>
int main()
{
	int vendidos;
	float precio;
	int i;
	float sueldo=400;
	
	do
	{
	printf("INGRESE CUANTOS AUTOS VENDIO: ");
	scanf("%d",&vendidos);
	fflush(stdin);
	if(vendidos<0)
	{
		printf("VALOR INVALIDO,INGRESE OTRO VALOR:");
	}
	}while(vendidos<0);
	
	for(i=1;i<=vendidos;i++)
	{
		do
		{
		printf("INGRESE EL VALOR DEL VEHICULO NUMERO %d:",i);
		scanf("%f",&precio);
		fflush(stdin);
		if(precio<=0)
		{
			printf("VALOR INCORRECTO, INGRESE OTRO ");
		}
		
		}while(precio<=0);
		sueldo=sueldo+50+precio*0.04;
		
		
	}
	
	printf("EL SUELDO SERA DE: %.2f",sueldo);
	
	
}
