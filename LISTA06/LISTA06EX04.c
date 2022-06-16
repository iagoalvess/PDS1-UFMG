#include <stdio.h>
#include <stdlib.h>
//LISTA 6 - QUESTAO 4 Iago da Silva Rodrigues Alves
int main() {
	FILE*fr = fopen("reais.txt", "r+t");
	FILE*frf = fopen("reaisfuncao.txt", "w+t");
	if(fr==NULL){
        printf("ERRO AO ABRIR O ARQUIVO");
        exit(1);
    }
    if(frf==NULL){
        printf("ERRO AO CRIAR O ARQUIVO");
        exit(1);
    }
    while(!feof(fr)){
    	int r;
    	fscanf(fr, "%d", &r);
    	fprintf(frf, "%d\n", r*r -5*r + 1);
	}
	fclose(fr);
	fclose(frf);
	return 0;
}
