#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//LISTA 6 - QUESTAO 5 Iago da Silva Rodrigues Alves
int funcao(int a, int b, int c, int d, int r){
	return(a*pow(r, 3) + b*pow(r,2) + c*r + d);
}
int main() {
	int a, b, c, d;
	printf("Digite a: ");
	scanf("%d", &a);
	printf("Digite b: ");
	scanf("%d", &b);
	printf("Digite c: ");
	scanf("%d", &c);
	printf("Digite d: ");
	scanf("%d", &d);
	FILE*fr = fopen("reais.txt", "r+t");
	FILE*frf2 = fopen("reaisfuncao2.txt", "w+t");
	if(fr==NULL){
        printf("ERRO AO ABRIR O ARQUIVO");
        exit(1);
    }
    if(frf2==NULL){
        printf("ERRO AO CRIAR O ARQUIVO");
        exit(1);
    }
    while(!feof(fr)){
    	int r;
    	fscanf(fr, "%d", &r);
    	fprintf(frf2, "%d\n", funcao(a, b, c, d, r));
	}
	fclose(fr);
	fclose(frf2);
	return 0;
}
