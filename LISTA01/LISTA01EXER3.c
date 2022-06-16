#include<stdio.h>
#include<math.h>

int main(){
	float A,B,C,Delta,X1,X2;
	printf("===DIGITE 3 NUMEROS REAIS===\n");
	printf("A)Primeiro numero: ");
	scanf("%f",&A);
	printf("B)Segundo numero: ");
	scanf("%f",&B);
	printf("C)Terceiro numero: ");
	scanf("%f",&C);
	printf("3-A [MEDIA] = %f\n",(A+B+C)/3);
	printf("3-B [MEDIA PONDERADA] = %f\n",(A*3+B*4+C*5)/12);
	printf("3-C [PERIMETRO] = O perimetro e %f\n",2*3.14*A);
	printf("3-D [AREA DO CIRCULO] = %f\n",3.14*A*A);
	printf("3-E [AREA DO TRIANGULO] = %f\n",(B*C)/2);
	printf("3-F [HIPOTENUSA] = %f\n",sqrt((B*B)+(C*C)));
	
	Delta = B*B-4*A*C;
	X1 = (-B + sqrt(Delta)) / (2*A);
	X2 = (-B - sqrt(Delta)) / (2*A);
	
	if (Delta<0)
	{
		printf ("3-G [DELTA < 0] = RAIZ -> Nao possui valores reais");
	}
	else if (Delta>0){
		printf ("3-G [RAIZ 1] = %f\n",X1);
		printf("3-G [RAIZ 2] = %f\n",X2);
	}
	else{
		printf ("3-G [DELTA = 0 UMA RAIZ] = %f\n",X1);
	}
	return 0;
}
