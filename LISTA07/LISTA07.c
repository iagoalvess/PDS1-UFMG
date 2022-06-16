#include <stdio.h>
#include <math.h>
//QUESTAO-2
float media(float* v, int n){
    float s = 0;
    int i;
    for(i = 0; i < n; i++) s += v[i];
    return(s/n);
}
//QUESTAO-3
float variancia(float* v, float n){
    int i;
    float var = 0;
    for(i = 0; i < n; i++){
    	var = var + pow((v[i]-media(v, 8)), 2);
	}
	return(var/(n-1));
}
//QUESTAO-4
float maior(float* v, float n){
	int i;
	float m = v[i];
	for(i = 0; i < n; i++){
		if(v[i]>m) m = v[i];
	}
	return(m);
}
//QUESTAO-5
float menor(float* v, float n){
	int i;
	float m = v[i];
	for(i = 0; i < n; i++){
		if(v[i]<m) m = v[i];
	}
	return(m);
}
//QUESTAO-6
float escalar(float* v, float* u, float n){
	int i;
	float prod = 0;
	for(i=0;i<n;i++){
		prod = prod + (v[i]*u[i]);
	}
	return(prod);
}
int main(){
//QUESTÃO-1
	int numeros[1000];
	int i=0;
	FILE*f = fopen("numeros.txt", "r+t");
	if(f==NULL){
		printf("ERRO AO ABRIR ARQUIVO");
		return(1);
	}
	while(!feof(f)){
		fscanf(f, "%d", &numeros[i]);
		i++;
	}
    float v[8] = {1.25, 2.5, 3.75, 4, 5.10, 6.20, 7.70, 8.8};
    float u[8] = {10.25, 9.5, 8.75, 7, 6.10, 5.20, 4.70, 3.8};
    printf("%f\n", media(v, 8));
	printf("%f\n", variancia(v, 8));
	printf("%f\n", maior(v, 8));
	printf("%f\n", menor(v, 8));
	printf("%f\n", escalar(v, u, 8));
	fclose(f);
	return(0);
}

