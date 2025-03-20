#include <stdio.h>
#include <locale.h>
int main() {
    setlocale (LC_ALL,"");
    char cam, com, cob, toa, rg, cpf, e, t, ent, s, cafedamanha, almoco, lanchedatarde, jantar, sobremesas, bebidas; 
    int  menu, checkin, servico, quarto, comidas, opcao;
    char pedidos;
    //check-in
    do {
    printf("Seja bem vindo ao nosso hotel: Ponto de paz!\n");
    printf("Obrigado por nos escolhermos para as suas férias.\nSelecione o que você deseja?\n");
    printf("1- Fazer o check-in\n");
    printf("2- Solicitar serviço de quarto\n");
    printf("3- Escolher refeições\n");
    printf("0- Sair\n");
    scanf("%d",&menu);
   
    switch (menu) {
        case 1:
    printf("Por favor, insira seu rg: \n");
    scanf("%s", &rg);
    printf("Por favor, insira seu cpf: \n");
    scanf("%s", &cpf);
    printf("Por favor, insira seu endereço:\n");
    scanf("%s", &e);
    printf("Por favor, insira seu telefone:\n");
    scanf("%s", &t);
    printf("Por favor, informe o dia da entrada:\n");
    scanf("%s", &ent);
    printf("Por favor, informe o dia de saída:\n");
    scanf("%s", &s);
    printf("Tudo certo, obrigado!\n");
    break; 
    
        case 2:
    printf("Selecione as opções desejadas:\n");
    printf("1- Camareira\n");
    printf("2- Cobertores\n");
    printf("3- Toalhas\n");
    scanf ("%d", &servico);
    printf("Escreva seu numero de quarto:\n");
    scanf("%d", &quarto);
    printf("Obrigado, seu pedido está a caminho!");
    break;
    
        case 3:
    printf("Selecione as opções desejadas:\n");
    printf("1- Cafe da manha\n");
    printf("2- Almoco\n");   
    printf("3- Lanche da tarde\n");
    printf("4- Jantar\n");
    printf("5- Sobremesas\n");
    printf("6- Bebidas\n");
    scanf ("%d", &com);}
  
    switch (com) {
       case 1:
       printf("Selecione a sua escolha:\n");
       printf("1- pao na chapa\n");
       printf("2- cereal\n");
       printf("3- ovos e bacon\n");
       printf("4- omelete com queijo\n");
       scanf("%s", &cafedamanha);
       printf("Escreva seu numero de quarto:\n");
       scanf("%d", &quarto);
       printf("Seu cafe da manha está a caminho!\n");
       break; 
       
       case 2:
       printf("Selecione a sua escolha:\n");
       printf("1- parmegiana\n");
       printf("2- bife acebolado\n");
       printf("3- macarrão a bolonhesa\n");
       printf("4- feijoada\n");
       scanf("%s", &almoco);
       printf("informe o numero do quarto!\n");
       scanf("%d", &quarto);
       printf("Seu almoço está a caminho!:\n");
       break; 
      
       case 3:
       printf("Selecione a sua escolha:\n");
       printf("1- broa\n");
       printf("2- bolo de chocolate\n");
       printf("3- bolo de fubá\n");
       printf("4- salgado assado\n");
       scanf("%s", &lanchedatarde);
       printf("Escreva seu numero de quarto:\n");
       scanf("%d", &quarto);
       printf("Seu lanche da tarde está a caminho!\n");
       break; 
       
       case 4:
       printf("Selecione a sua escolha:\n");
       printf("1- carne com batatas\n");
       printf("2- rocambole de carne\n");
       printf("3- strogonof de frango\n");
       printf("4- ovo frito\n");
       scanf("%s", &jantar);
       printf("Escreva seu numero de quarto:\n");
       scanf("%d", &quarto);
       printf("Seu jantar está a caminho!\n");
       break;
       
       case 5:
       printf("Selecione a sua escolha:\n");
       printf("1- brownie\n");
       printf("2- sorvete de creme\n");
       printf("3- torta holandesa\n");
       printf("4- torta de frutas vermelhas\n");
       scanf("%s", &sobremesas);
       printf("Escreva seu numero de quarto:\n");
       scanf("%d", &quarto);
       printf("Sua sobremesa está a caminho!\n");
       break; 
       
       case 6:
       printf("Selecione a sua escolha:\n");
       printf("1- coca-cola\n");
       printf("2- suco de laranja\n");
       printf("3- agua\n");
       printf("4- achocolatado\n");
       scanf("%s", &bebidas);
       printf("Escreva seu numero de quarto:\n");
       scanf("%d", &quarto);
       printf("Sua bebida está a caminho!\n");
       break; 
        case 0 :
            printf("Até logo!...\n");
            break;
            default:
            printf("Opção inválida! Tente novamente.\n");
        }
        printf("\nPressione Enter para continuar");
       getchar(); //funciona como scanf
       getchar();//aguarga o enter do usuario
       
      
      
   }while(opcao != 0);
           
       
        
     
    return 0; }
    
    
   
        
    
    
 