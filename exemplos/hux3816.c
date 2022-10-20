#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//3816 - Soma de D?gitos

int Fatorial (int n) 
{
	if (n == 0) return 1;
	else return (n * Fatorial(n - 1));
}

int proxprimo(int x, int y) 
{
    if(x % y == 0) x++;
    if(x == 1) return 2;
    else if(x == 2 || y*y > x ) return x;
    return proxprimo(x, y+1);
}


int somadigito(int num, int soma){
    if(num==0)return soma;
    else soma += num%10;
    somadigito(num/10,soma);
}

int maior( int num, int i){
    if((somadigito(num,0))>i){ i = somadigito(num,0);return i;}
    else{
        
     return maior(num, i);}
}

void numY(int i, int j)
{
    double num;
    num = (Fatorial(j) + proxprimo(j,1))/ (double) i;
    
    printf("Valor Y: %.2lf", num);
}

void conta( int num, int soma, int i)
{
    soma = somadigito(num, 0);
    printf("N: %i - Soma: %i\n", num, soma);
}

int entrada(int entradas, int i, int j)
{
    if(entradas == 0)
    {   printf("\nMaior soma: %i\n", i); 
        printf("Menor soma: %i\n", j);
        numY(i,j);
        return 0;}
    
    else{
        int num;
        scanf("%i", &num);
        conta(num, 0,0);
        
        if(somadigito(num,0)>i){
        i = somadigito(num,0);
    }
        if(somadigito(num,0)<j){
        j = somadigito(num,0);
    }
    
    return entrada(entradas-1,i, j);
}}

void main(){
	int entradas;
    scanf("%i", &entradas);
	entrada(entradas,0,1000);
    printf("\n%d %d\n", Fatorial(7), proxprimo(7,1));
}