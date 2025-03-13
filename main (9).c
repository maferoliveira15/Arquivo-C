#include <stdio.h>
#include <locale.h>
int main() {
    setlocale (LC_ALL,"");
    char cam, com, cob, toa, rg, cpf, e, t, ent, s ; 
    int  menu, checkin, servico, quarto;
    char pedidos;
    //check-in
    printf("Seja bem vindo ao nosso hotel: Ponto de paz!\n");
    printf("Obrigado por nos escolhermos para as suas férias.\nSelecione o que você deseja?\n");
    printf("1- Fazer o check-in\n");
    printf("2- Solicitar serviço de quarto\n");
    printf("3- Fazer pedidos\n");
    scanf("%d",&menu);
   
    switch (menu) {
        case 1:
    printf("Por favor, insira seu rg: \n");
    scanf("%d", &rg);
    printf("Por favor, insira seu cpf: \n");
    scanf("%d", &cpf);
    printf("Por favor, insira seu endereço:\n");
    scanf("%s", &e);
    printf("Por favor, insira seu telefone:\n");
    scanf("%d", &t);
    printf("Por favor, informe o dia da entrada:\n");
    scanf("%d", &ent);
    printf("Por favor, informe o dia de saída:\n");
    scanf("%d", &s);
    printf("Tudo certo, obrigado!\n");
    break;

        case 2:
     printf("Selecione as opções desejadas:\n");
        printf("1- Camareira\n");
        printf("2- Comida\n");
        printf("3- Cobertores\n");
        printf("4- Toalhas\n");
        scanf ("%d", &servico);
        printf("Escreva seu numero de quarto:\n");
        scanf("%d", &quarto);
        printf("Obrigado, seu pedido está a caminho!");
    break;
   
        case 3:
    printf("Qual pedido deseja fazer? \n");
    scanf("%s", &pedidos);
    printf("Insira o numero de seu quarto. \n");
    scanf("%d", &quarto);
    printf("Em alguns instantes seu pedido será entregue, obrigado!\n");
    break;
    default:
    return 1;
    }
    return 0;
    
}
 