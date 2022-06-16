#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

float maior(float a, float b, float c){
    if (a>b && a>c){
        return(a);
    }
    else if (b>c && b>a){
        return(b);
    }
        return(c);
}
float menor(float a, float b, float c){
    if (a<b && a<c){
        return(a);
    }
    else if (b<a && b<c){
        return(b);
    }
    return(c);
}
bool par(int x){
    return(!(x%2));
}
int dentro(int x, int y, int z){
    return(x>=y && x<=z);
}
int fora(int x, int y, int z){
    return(!(dentro(x, y, z)));
}
int bissexto(int an){
	if (an%400==0){
		return(1);
	}
	else if (an%4==0 && (!(an%100==0))){
		return(1);
	}
	return(0);
}
int main(){
    float A, B, C;
    printf("Digite o valor de A, B e C:\n");
    scanf("%f%f%f", &A, &B, &C);
    printf("O maior numero e: %.2f\n", maior(A, B, C));
    printf("O menor numero e: %.2f\n", menor(A, B, C));
    int X, Y, Z;
    printf("Digite o valor de X, Y e Z:\n");
    scanf("%d%d%d", &X, &Y, &Z);
    if (par(X)==1){
        printf("O valor de X e par!\n");
    }
    else
        printf("O valor de X e impar!\n");
    if (dentro(X, Y, Z)==1){
        printf("O valor de X esta dentro de [Y, Z]\n");
    }
    if (fora(X, Y, Z)==1){
        printf("O valor de X esta fora de [Y, Z]\n");
    }
    int ano;
    printf("Digite o ano desejado:\n");
    scanf("%d", &ano);
    if (bissexto(ano)==1){
    	printf("O ano digitado e bissexto!\n");
	}
	else
		printf("O ano digitado nao e bissexto!\n");
    system("pause");
}
