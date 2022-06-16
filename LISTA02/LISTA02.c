#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

float media(float a, float b, float c){
    return((a+b+c)/3);
}
float mediaponderada(float a, float b, float c){
    return((a*3+b*4+c*5)/12);
}
float perimetro(float r){
    return(2*PI*r);
}
float area_circulo(float r){
    return(PI*r*r);
}
float area_triangulo(float b, float c){
    return(b*c/2);
}
float area_caixa(float a, float b, float c){
    return(a*b*4+c*b*2);
}
float volume_caixa(float a, float b, float c){
    return(a*b*c);
}
float area_cilindro(float r, float h){
    float ac = area_circulo(r);
    return(2*ac*h);
}
float volume_cilidro(float r, float h){  
    float ac = area_circulo(r);
    return(ac*h);
}
float hipotenusa(float a, float b){
    return(sqrt(a*a+b*b));
}
float raiz(float a, float b, float c){
    int delta = b*b - 4*a*c;
    return((-b + sqrt(delta)) / (2*a));
}
int main(){
    float x, y, z, raio, altura;
    printf("Digite A: ");
    scanf("%f", &x);
    printf("Digite B: ");
    scanf("%f", &y);
    printf("Digite C: ");
    scanf("%f", &z);
    printf("Digite o raio: ");
    scanf("%f", &raio);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("\nMedia: %.2f", media(x,y,z));
    printf("\nMedia ponderada: %.2f", mediaponderada(x,y,z));
    printf("\nPerimetro: %.2f", perimetro(raio));
    printf("\nArea do circulo: %.2f", area_circulo(raio));
    printf("\nArea do triangulo: %.2f", area_triangulo(y, z));
    printf("\nArea da caixa: %.2f", area_caixa(x, y, z));
    printf("\nVolume da caixa: %.2f", volume_caixa(x, y, z));
    printf("\nArea cilindro: %.2f", area_cilindro(raio, altura));
    printf("\nVolume cilindro: %.2f", volume_cilidro(raio, altura));
    printf("\nHipotenusa: %.2f", hipotenusa(x, y));
    printf("\nRaiz positiva: %.2f", raiz(x, y, z));
    system("pause");
}
