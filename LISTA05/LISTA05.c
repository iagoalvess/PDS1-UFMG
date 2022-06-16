#include <stdio.h>

int fatorial(int n){
	int m=1;
	int f=1;
	while(m<=n){
		f = f*m;
		m = m+1;
	}
	return(f);
}

int mdc(int a, int b){
	int r=1;
	while(r != 0){
		r = a % b;
		a = b;
		b = r;
	}
	return(a);
}

int mdc3(int a, int b, int c){
	if(b==0 || c==0) return(a);
    else return mdc(mdc(a, b), c);
}

int fibonacci(int n){
	int i=1;
	int n3;
	int n1=1;
	int n2=1;
	while(i<=n){
		n3=n1+n2;
		n1=n2;
		n2=n3;
		i=i+1;
	}
	return(n1);
}

int primo(int n){
	int d=1;
	int t=0;
	while(d<=n){
		if(n%d==0){
			t=t+1;
		}
		d=d+1;
	}
	if(t>2) return(0);
	else return(1);
}

int decrescente(int x){
	while(x>0){
		printf("%d \n", x);
		x = x-1;
	}
}

int resto(int a, int b){
	return a - (b * (a/b));
}
int somatorio(int n){
	int m=1;
	int f=1;
	int s=0;
	while(m<=n){
		s=s+f*m;
		f=f+1;
		m=m+1;
	}
	return(s);
}

int mmc(int a, int b){
	return a * (b / mdc(a, b));
}

int divisao(int a, int b){
	int i = 1;
	while(i<=a){
		if( a < b) return 0;
        else if(b*i <= a && b*(i+1) > a) return i;
        i = i + 1;
	}
}

float raiz(float n, float ch){
    if(ch*ch>n+0.001) raiz(n, ch/2);
    else if(ch*ch<n-0.001) raiz(n, 3*ch/2);
    else return(ch);
}

int digitos(int n){
	int s=0;
	while(n%10!=n){
		s=s+n%10;
		n=n/10;
	}
	return(s+n%10);
}

int potencia(int k, int n){
	if(n==0) return(1);
	else return k * potencia(k, n-1);
}

int crescente(int x){
	int y=0;
	while(y<=x){
		printf("%d \n", y);
		y = y+1;
	}
}

int main(){
	decrescente(10);
	printf("---------------------------\n");
	crescente(10);
}
