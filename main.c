#include <stdio.h>
#include <stdlib.h>
#define a(x) (x>=18 && x<=20?"A":b(x))
#define b(x) (x>=14 && x<18?"B":c(x))
#define c(x) (x>=10 && x<14?"C":d(x))
#define d(x) (x>=4 && x<10?"D":e(x))
#define e(x) (x<4 && x>=0?"E":"Inválido")

int main()
{
    int x;
    printf("Insira a sua nota obtida:");
    scanf("%d", &x);
    printf("%s", a(x));

    return 0;
}