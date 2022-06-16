#include <stdio.h>
#include <math.h>

int main(){
    float A, B, C, D;
    printf("===DIGITE 4 NUMEROS REAIS===\n");
    printf("A)Primeiro numero: ");
    scanf("%f", &A);
    printf("B)Segundo numero: ");
    scanf("%f", &B);
    printf("C)Terceiro numero: ");
    scanf("%f", &C);
    printf("D)Quarto numero: ");
    scanf("%f", &D);
    printf("2-A: %f\n",A+B);
    printf("2-B: %f\n",A/C);
	printf("2-C: %f\n",A*A);
	printf("2-D: %f\n",B*C);
	printf("2-E: %f\n",A*B-C);
	printf("2-F: %f\n",A+B*C);
	printf("2-G: %f\n",(A+B)*C);
	printf("2-H: %f\n",sin(A));
	printf("2-I: %f\n",sqrt(B));
	printf("2-J: %f\n",(A+B+C));
	printf("2-L: %f\n",(A+B+C)/D);
	printf("2-M: %f\n",(A+B)*(A-D));
	printf("2-N: %f\n",(B/C)+(A*D));
	printf("2-O: %f\n",sin(B)+cos(C));
	printf("2-P: %f\n",log10(A)-log10(C));
	printf("2-Q: %f\n",log10(A)+(log10(B)*log10(D)-cos(log10(C))));
	printf("2-R: %f\n",((B+A)/C)-(D+A));
	printf("2-S: %f\n",(cos(D)+sin(C))*(cos(B)-sin(A)));
    return 0;
}
