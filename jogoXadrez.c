#include <stdio.h>

//Movimento da torre
void movimentotorre(int n){
    if(n > 0){
        printf("Direita\n");
    }
    movimentotorre(n - 1);
}

void movimentoBispo(int n){
    if(n > 0){
        printf("Diagonal\n");
    }
    movimentoBispo(n - 1);
}

void movimentoRainha(int n){
    if(n > 0){
        printf("Esquerda\n");
    }
    movimentoRainha(n - 1);
}

int main(){

int movimentacao = 1;
char opcao;

printf("Escolha uma das pecas para mover: \n");
printf("T. Torre\n");   
printf("B. Bispo\n"); 
printf("R. Rainha\n"); 
printf("C. Cavalo\n"); 
printf("Escolha uma das opcao: "); 
scanf("%c", &opcao);

switch(opcao){


case 'T':
case 't':

printf("A torre vai se mover: \n");
movimentotorre(5);

break;

case 'B':
case 'b':

printf("O bispo vai se mover: \n");
movimentoBispo(8);

break;

case 'R':
case 'r':

printf("A rainha vai se movar: \n");
movimentoRainha(8);

break;

case 'C':
case 'c':

while (movimentacao--){
        for(int i = 2; i >= 1; i--){
            printf("Cima\n");
        }
    printf("Direita\n");
    printf("\n");
}

break;


default:
    printf("Opcao invalida\n");
break;
}


    return 0;
}