#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n==0) return(1);
    return n*fatorial(n-1);
}

int mdc(int a, int b){
    if(b==0) return(a);
    else return mdc(b, a % b);
}

int mdc3(int a, int b, int c){
    if(b==0 || c==0) return(a);
    else return mdc(mdc(a, b), c);
}

int fibonacci(int n){
  if(n==0 || n==1) return(1);
  else return fibonacci(n - 1) + fibonacci(n - 2);
}

int primo(int x, int d){
    if(d==1) return(1);
    if(x%d==0) return(0);
    primo(x, d-1);
}

int decrescente(int x, int y){
    printf("%d ", x);
    if(x>y) return decrescente(x-1, y);
    else return(0);
}

int resto(int a, int b){
    if(b==1 || a/b == 0) return(0);
    if(a - b < b) return(a-b);
    if(a/b != 0) resto(a - b, b);
}

int soma(int n){
    if(n==1) return(1);
    else return(n*n + soma(n-1));
}

int mmc(int a, int b){
    return a * (b / mdc(a, b));
}

int divi(int a, int b){
    if(b==1) return(a);
    else if(a<b) return(0);
        else return 1 + divi(a-b, b);
}

float raiz(float n, float ch){
    if(ch*ch>n+0.001) raiz(n, ch/2);
    else if(ch*ch<n-0.001) raiz(n, 3*ch/2);
    else return(ch);
}

int digitos(int n){
	if (n % 10 == n)
        return n;
    return ((n % 10) + digitos(n / 10));
}

int potencia(int k, int n){
	if(n==0) return(1);
	else return k * potencia(k, n-1);
}

int crescente(int y, int x){
	printf("%d ", y);
    if(y<x) return crescente(y+1, x);
    else return(0);
}

int main(){
    int N;
    printf("----------------------------\n");
    printf("Digite N: ");
    scanf("%d", &N);
    printf("O fatorial de %d vale %d\n", N, fatorial(N));
    int A, B, C;
    printf("----------------------------\n");
    printf("Digite A, B e C: ");
    scanf("%d%d%d", &A, &B, &C);
    printf("O mdc de %d e %d vale %d\n", A, B, mdc(A, B));
    printf("O mdc de %d, %d e %d vale %d\n", A, B, C, mdc3(A, B, C));
    printf("----------------------------\n");
    printf("O %d termo da sequencia de Fibonacci vale %d\n", N, fibonacci(N-1));
    printf("----------------------------\n");
    int X;
    printf("Digite X: ");
    scanf("%d", &X);
    printf("O numero %d eh primo? %d\n", X, primo(X, X-1));
    printf("----------------------------\n");
    int Y = 0;
    printf("SEQUENCIA DECRESCENTE\n");
    decrescente(X, Y);
    printf("\n----------------------------\n");
    printf("O resto da divisao entre %d e %d vale %d\n", A, B, resto(A, B));
    printf("----------------------------\n");
    printf("A soma de 1 ate %d vale: %d\n",N, soma(N));
    printf("----------------------------\n");
    printf("O MMC de %d e %d vale: %d\n", A, B, mmc(A, B));
    printf("----------------------------\n");
    printf("A divisao inteira entre %d e %d vale %d\n", A, B, divi(A, B));
    printf("----------------------------\n");
    float chute;
    printf("Digite o chute: ");
    scanf("%f", &chute);
    printf("A raiz quadrada de %f vale %f\n", chute, raiz(chute, chute/2));
    printf("----------------------------\n");
    printf("A soma dos digitos de %d vale %d\n",N ,digitos(N));
	printf("----------------------------\n");
	int K;
    printf("Digite K: ");
    scanf("%d", &K);
    printf("O valor de %d elevado a %d vale: %d\n", K, N, potencia(K, N));
    printf("----------------------------\n");
    printf("SEQUENCIA CRESCENTE\n");
	crescente(Y, X);
    printf("\n----------------------------\n");
    system("pause");
    return(0);
}
