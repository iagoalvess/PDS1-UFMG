#include<stdio.h>
#include<stdbool.h>
//LISTA 9 - Iago da Silva Rodrigues Alves
//QUESTAO 7
void mult_matriz(int n, float A[][100], float B[][100], float P[][100]){
	int i, j, matmult, c;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        	matmult = 0;
        	for(c=0;c<n;c++) matmult += A[i][c]*B[c][j];
        	P[i][j] = matmult;
        	printf("%f\t", P[i][j]);
		}
		printf("\n");
    }
}

//QUESTAO 6
void soma_matriz(int n, float A[][100], float B[][100], float S[][100]){
	int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        	S[i][j] += A[i][j] + B[i][j];
        	printf("%f\t", S[i][j]);
		}
		printf("\n");
    }
}

//QUESTAO 5
bool simetrica(int n, float A[][100]){
	int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        	if(A[i][j] != A[j][i]) return(false);
		}
    }
    return(true);
}

//QUESTAO 4
void transposta(int n, float A[][100], float T[][100]){
	int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        	T[j][i] == A[i][j];
        	printf("%f\t", T[j][i]);
		}
		printf("\n");
    }
}

//QUESTAO 3
void identidade(int n, float A[][100]){
	int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        	if (i==j) A[i][j] = 1;
        	else A[i][j] = 0;
        	printf("%f\t", A[i][j]);
		}
		printf("\n");
    }
}

//QUESTAO 2
float media_matriz(int n, float mat[][100]){
    float soma=0;
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) soma=soma+mat[i][j];
    }
    return soma/(n*n);
}

int main(){
	//QUESTAO 1
    FILE*f=fopen("matriz.txt", "r+t");
    if(f==NULL){
        printf("ERRO AO ABRIR ARQUIVO");
        return(1);
    }
    int linhas, colunas;
    fscanf(f, "%d", &linhas);
    fscanf(f, "%d", &colunas);
    float matriz[linhas][colunas];
    int i, j;
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++) fscanf(f, "%f", &matriz[i][j]);
    }
    fclose(f);
    return 0;
}
