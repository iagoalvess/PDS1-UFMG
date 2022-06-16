#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int primo(int x, int d){
    if(d==1) return(1);
    if(x%d==0) return(0);
    primo(x, d-1);
}
int main(){
    int n, i=0, p=2;
    scanf("%d", &n);
    FILE*f = fopen("primos.txt", "w+t");
    if(f==NULL){
        printf("ERRO AO CRIAR O ARQUIVO");
        exit(1);
    }
    while(i<n){
        if(primo(p, sqrt(p))){
            fprintf(f, "%d\n", p);
            i++;
        }
        p++;
    }
    fclose(f);
    return(0);
}
