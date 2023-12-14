#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


float estoqueQuantidade (int quantidade, float preco) {

float somaQuantidade = 0;
float somaPreco = 0;

somaQuantidade+= quantidade;
somaPreco+= preco;
	
    return somaQuantidade;
}

float estoqueConsulta (int somaQuantidade, float somaPreco) {

printf("Quantidade de produto %d\n", somaQuantidade);


printf("Preco do Material %f\n", somaPreco);


}

float retirada (int somaQuantindade, int retirar) {

  float somaQuantidade;

 somaQuantidade -= retirar;


}

char *datadevenda(char *data) {

printf("Ultima data de retirada do produto %s", data);

}




int main () {

setlocale(LC_ALL, "portuguese");


int opcao;

printf("-----TABELA-----\n");
printf("1 - Deposito\n");
printf("2 - Consultar quantidade e preco\n");
printf("3 - Retirar\n");
printf("4 - Adicionar data que o produto foi retirado pela última vez\n");
printf("5 - Sair do programa\n");


do {


int retirar;
float preco;
int quantidade; 
float somaQuantidade;
char data[50];

printf("Informe uma opção");
scanf("%d", &opcao);

switch (opcao)
{
 case 1 :
 
    printf("Informe a quantidade que deseja adicionar");
    scanf("%d", &quantidade); 

     printf("Informe o preço por unidade do produto");
    scanf("%f", &preco); 
     
    fflush(stdin);
    printf("Informe a data de retirada do produto");
    gets(data);
 

     
    estoqueQuantidade(quantidade, preco);

    break;

    case 2:   


    estoqueConsulta(quantidade, preco);

    break;
    case 3:

    printf("Informe quanto deseja retirar");
    scanf("%d", &retirar);

    retirada(quantidade,retirar);

    break;

    case 4:
    
    
    printf("Informe a data que foi retirada o último produto");
    gets(data);
     
   fflush(stdin);
     break;

     case 5:
     
    printf("FECHANDO PROGRAMA");
     break;

default: 
    printf("OPÇÃO INVÁLIDA");
    break;

}


} while (opcao != 5);


    return 0;
}
