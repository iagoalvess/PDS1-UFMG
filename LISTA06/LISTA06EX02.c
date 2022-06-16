#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//LISTA 6 - QUESTAO 2 Iago da Silva Rodrigues Alves
int primo(int x, int d){
    if(d==1) return(1);
    if(x%d==0) return(0);
    primo(x, d-1);
}
int main() {
	FILE*f = fopen("naturais.txt", "r+t");
	FILE*fp = fopen("naturaisprimos.txt", "w+t");
	if(f==NULL){
        printf("ERRO AO ABRIR O ARQUIVO");
        exit(1);
    }
    if(fp==NULL){
        printf("ERRO AO CRIAR O ARQUIVO");
        exit(1);
    }
    while(!feof(f)){
    	int p;
    	fscanf(f, "%d", &p);
    		if(primo(p, sqrt(p))==1){
    			fprintf(fp, "%d eh primo\n", p);
			}
			else fprintf(fp, "%d nao eh primo\n", p);
	}
	fclose(f);
	fclose(fp);
	return 0;
}
