#include <stdio.h>
#include <stdlib.h>
int chave1 =0 ,lanterna=0,hpgame=30; //  VARIAVEIS GLOBAIS
char nome [30];
void porta1(){
int opc ;
while(opc !=0) // ESTA E A FUNÇAÕ PORTA 1 SERVE PARA A PRIMEIRA PORTA.......
{

    printf("1-CAIXA\n");
     printf("2-ARMARIO\n");
      printf("3-GAVETAS\n");
       printf("4-EM BAIXO DA CAMA\n");
        printf("5-NO VASO DE PLANTAS\n");
       printf("0-EXIT\n");
       scanf("%i", &opc);system("cls");
       switch(opc){
       case 1: printf("1-a caixa esta vazia\n\n").
       break;
       case 2: printf("2-o armario esta vazio\n\n");
       break;
       case 3: printf("3-voce pegou uma CHAVE\n----------------------\n\n");
       opc = 0;
       chave1=1874;// SENHA PARA IMPEDIR O USUARIO DE BURLAR O JOGO
       break;
       case 4:  printf("4-nao a nada em baixo da cama\n\n");
       break;
       case 5:  printf("5-nao tem nada no vaso de plantas\n\n");
       break;
       default:
       system("cls");
       break;
       }


}

}

int main()
{

     printf("nome do jogador :\n\n");
 scanf("%s", &nome);system("cls");

     printf("Ao cair a noite voce acorda numa cama velha\n");
     printf("e nao sabe o porque esta ali mato cresce por dentro\n");
      printf("desta velha cabana abandonada voce precisa sair\ne descobrir o que esta acontecendo\n\n\n");
    while(chave1!=1874){printf("*****SALA PRINCIPAL***\n\n");
            printf("1-corredor para o porao\n2-porta a esquerda\n3-subir escadas\n4-banheiro\n");
    scanf("%i" ,&chave1);fflush(stdin);system("cls");

    if(chave1==1){printf("1-o corredor tem uma porta...ESTA TRANCADA!!\n\n");}
    else if(chave1==3){printf("3-nao tem saida por aqui\nna parede voce observa um cartaz\nde um agrande-----------**leao vermelho**\n\n");}
    else if(chave1==4){printf("4-nossa que lugar mais sujo tem sanguem nas paredes\no cheiro e muito ruim o que houve aqui?\nvoce encontrou uma---------***lanterna***\n\n");
     lanterna=10; }//CODIGO DA LANTERNA}
    else if(chave1==2){printf("voce abriu a porta agora\nprecisa explorar alguns itens\n\n");
        porta1();}

}//*************************************************
//*************************************************
//*************************************************
// SEGUNDA PARTE DO JOGO FAZE PORAO ****************

 printf(" \nao coletar a chave voce ouviu barulhos\nna casa velha e foi direto para o porao\n");
 printf("afim de se proteger de qualquer coisa...\n\n\n*****PORAO*****\n\n");
 int porao ;
 while(porao!=1){
    printf("1-abrir porta\n\n");
    scanf("%i", &porao);system("cls");
    if((porao>1)||(porao<1)){printf("OPCAO INVALIDA!!\n\nprecisa sair desta casa imadiatamente\n\n");}
 }
printf("*****DENTRO DO PORAO*****\n\nesta escuro aqui!!\nprecisa de uma lanterna:\n\n");

     if(lanterna==10)//***************************
    {printf("1-ligar lanterna\n2-agora nao\n");
     int acende1;

     //********************************************** PRIMEIRA SENTENÇA
     //REFERENSE SE VOCE PEGAR A LANTERNA
     while(acende1!=1477){
            scanf("%i",&acende1);

    switch(acende1){
    case 1: printf("voce acendeu a lanterna agora\n");
            printf("pode caminhar com seguranca por aqui\n\n");
            acende1=1477;//CODIGO DA LANTERNA

        break;
         case 2:
        hpgame=hpgame-2;
        printf("%s voce cortou o braco\nHP 30/%i\n\n",hpgame,nome);
        printf("precisa tomar cuidado as feras podem sentir o cheiro do sangue\n\n");
          acende1=1477;//CODIGO DA LANTERNA
     break;
         default:
           printf("opcao invalida!!\n\n");
           break;

    }



     }
    }

     //***********************
     //SEGUNDA SENTENÇA REFERENTE SE VOCE NAO
     //PEGAR A LANTERNA
     else{printf("voce nao tem uma lanterna!!\nnao a nada a fazer precisa continar\n\n");
     hpgame=hpgame-2;
        printf("olha voce cortou o braco\nHP 30/%i\n\n",hpgame);
     }


      printf("***************************************\n\n");
      printf("dentro do porao voce encontrou um buraco no chao\n\n1-examinar\n");
      int buraco ;
      while(buraco!=1){
        scanf("%i", &buraco);system("cls");
        if(buraco!=1){printf("OPCAO INVALIDA!!!!\n1-examinar\n");}

      }
      if(lanterna==10){printf("ao examinar o buraco com a lanterna voce percebe\n");
                       printf("algo diferente.... parece uma tubulacao de esgoto\n");
                       printf("****************************************************\n");
                        printf("mas a porta por onde passou estava batendo sosinha neste momento voce \nouve um grito estranho vindo da sala principal\n");
                        }
                        else {
                              printf("esta escuro e nao pode ver nada mas voce sente que tem um buraco no chao parece perigoso\n");
        printf("mas a porta por onde passou estava batendo sosinha neste momento voce \nouve um grito estranho vindo da sala principal\n\n");


                        }

printf("ei %s o que vai fazer agora? algo esta se aproximano de voce rapidamente\n\n",nome);
printf("1-atacar o suposto mostro\n2-se jogar no estranho buraco\n");
while(buraco!=1725){//CODIGO DO BURACO*************************************

 scanf("%i", &buraco);system("cls");
if(buraco==1){
    printf("%s HP 30/00\n\n\n\********GAME OVER*******\n\nfoi atacado pelo suposto mostro\npois nao possui armas pra lutar\n\n\n\n\n",nome);
    buraco=1725;
    }
//**************************************************************************
//**************************************************************************
//**************************************************************************
//**************************************************************************
     else if(buraco==2){printf("voce foi poupado acabou de se salvar\n");
     int tubo ;
     printf("diite alguma coisa\n");
     scanf("%i", &tubo);


     }
     // AQUI TEM QUE COMESSAR O NOVO CODIGO POIS E ONDE O GAMER SOBREVICE
     //TAVEL USAR FUNÇÕES ########################################
   //******************************************
   //**************************************************************************
   //**************************************************************************
   //**************************************************************************









      else if(buraco!=1725){printf("OPCAO INVALIDA\n");}

    }
    system("pause");
    return 0;
}
