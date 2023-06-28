#include<stdio.h>
#include<locale.h>
main()
{
    setlocale(LC_ALL, "Portuguese");
    int  pont1, pont2, pont3, pont4, resp, cont=0;
    system("color 2e");
    printf("\n\n\t\t\t\t\t\t¤¤     PARA INICIAR ESTE QUIZ É RECOMENDADO O USO DA TELA CHEIA     ¤¤\n\n\n");
    printf("Para prosseguir pressione a tecla 'enter'");
    getch();
    system("cls");
    titulo();
    system("cls");
    regras ();
    printf("\n\n\n\tAperte ENTER para iniciar o QUIZ");
    getch();
    system("cls");
    sub11();
    sleep(3);
    for(pont1=0;pont1<3;) //NÍVEL 1
    {
        for(resp=0, pont1=0;resp<1;)
        {
            system ("cls");
            printf("\n\t\t\t   CATEGORIA SUB-11\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 3+ GOLS)", pont1);
            printf ("\n\n\t\t(PERGUNTA 1)- Quanto tempo dura uma partida de futebol");
            printf ("\n\n\t1) 30 minutos");
            printf ("\n\n\t2) 60 minutos");
            printf ("\n\n\t3) 80 minutos");
            printf ("\n\n\t4) 90 minutos");
            printf("\n\n\tResposta:"); scanf("%i", &resp);

            switch (resp)
            {
                case 4:
                {
                    gol();
                    pont1=pont1+1;
                    break;
                }
                case 2: case 3: case 1:
                {
                    fora ();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        for(resp=0;resp<1;)
        {
            system ("cls");
            printf("\n\t\t\t   CATEGORIA SUB-11\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 3+ GOLS)", pont1);
            printf ("\n\n\t\t(PERGUNTA 2)- Quantos jogadores formam um time titular? ");
            printf ("\n\n\t1) 10 Jogadores");
            printf ("\n\n\t2) 13 Jogadores");
            printf ("\n\n\t3) 11 Jogadores");
            printf ("\n\n\t4) 9 Jogadores");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 3:
                {
                    gol();
                    pont1=pont1+1;
                    break;
                }
                case 2: case 4: case 1:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        for(resp=0;resp<1;)
        {
            system ("cls");
            printf("\n\t\t\t   CATEGORIA SUB-11\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 3+ GOLS)", pont1);
            printf ("\n\n\t\t(PERGUNTA 3)- Qual seleção venceu mais Copas do Mundo? ");
            printf ("\n\n\t1) Brasil");
            printf ("\n\n\t2) Inglaterra");
            printf ("\n\n\t3) Argentina");
            printf ("\n\n\t4) Alemanha");
            printf("\n\n\tResposta:"); scanf("%i", &resp);

            switch (resp)
            {
                case 1:
                {
                    gol();
                    pont1=pont1+1;
                    break;
                }
                case 2: case 4: case 3:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        for(resp=0;resp<1;)
        {
            system ("cls");
            printf("\n\t\t\t   CATEGORIA SUB-11\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 3+ GOLS)", pont1);
            printf ("\n\n\t\t(PERGUNTA 4)- Qual é a cor do gramado ? ");
            printf ("\n\n\t1) Amarelo");
            printf ("\n\n\t2) Azul");
            printf ("\n\n\t3) Verde");
            printf ("\n\n\t4) Laranja");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 3:
                {
                    gol();
                    pont1=pont1+1;
                    break;
                }
                case 2: case 4: case 1:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }

        }
        for(resp=0;resp<1;)
        {
            system ("cls");
            printf("\n\t\t\t   CATEGORIA SUB-11\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 3+ GOLS)", pont1);
            printf ("\n\n\t\t(PERGUNTA 5)- Qual a única posição que pode usar as mãos? ");
            printf ("\n\n\t1) Atacante");
            printf ("\n\n\t2) Goleiro");
            printf ("\n\n\t3) Zagueiro");
            printf ("\n\n\t4) Volante");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 2:
                {
                    gol();
                    pont1=pont1+1;
                    break;
                }
                case 1: case 4: case 3:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        printf("\n\n\tAGUARDE...");
        sleep(3);
        system("cls");
        printf ("\n\n\tVocê conseguiu %i gols de 5 tentativas", pont1);
        sleep(3);
        if(pont1<3)
        {
            printf("\n\n\tVAI TER QUE JOGAR ESSA FASE NOVAMENTE");
            sleep(3);
        }
        if(pont1<3)
        for(;cont<2;)
        {
            falt();
            system("cls");
            printf("\n\t\tA PRÓXIMA FASE PRECISA DE 3 GOLS E VOCÊ SÓ FEZ %i", pont1);
            sleep(2);
            printf ("\n\n\n\tMas sua equipe sofreu um pênalti e terá UMA chance nos acréscimos");
            sleep(2);
            printf("\n\n\tSe acertar o pênalti você ganhará mais dois gols");
            sleep(2);
            printf ("\n\n\tSe perder, terá que responder todas as perguntas novamente");
            sleep(2);
            printf("\n\n\tCom a mesma pontuação que iniciou essa fase");
            sleep(1);
            printf("\n\n\tMas não terá outra cobrança de pênalti");
            sleep(2);
            printf("\n\n\tBoa sorte...");
            sleep(2);
            printf("\n\n\tVAI PRECISAR `~´");
            sleep(2);
            system ("cls");
            printf("\n\t\t\t  COBRANÇA DE PÊNALTI\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(VOCÊ PRECISA DE %i)", pont1,3-pont1);
            printf ("\n\n\t\t(+2 GOLS)- A Premier League é uma liga de que país? ");
            printf ("\n\n\t1) Alemanha");
            printf ("\n\n\t2) Espanha");
            printf ("\n\n\t3) Inglaterra");
            printf ("\n\n\t4) Itália");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 3:
                {
                    gol();
                    pont1=pont1+2;
                    cont=2;
                    break;
                }
                case 1: case 4: case 2:
                {
                    perd();
                    printf("\n\n\tVAI TER QUE JOGAR ESSA FASE NOVAMENTE");
                    sleep(3);
                    cont=2;
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    cont=-1;
                    break;
                }
            }
        }
    }
    cont=0;
    system("cls");
    fase();
    sleep (2);
    amad();
    sleep(3);
    system("color 9f");
    for(pont2=pont1;pont2<8;) //NÍVEL 2
    {
        pont2=pont1;
        for(resp=0;resp<1;)
        {
            system ("cls"); //1
            printf("\n\t\t\t   CATEGORIA AMADOR\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 8+ GOLS)", pont2);
            printf ("\n\n\t\t(PERGUNTA 1)- Por qual time atua o jogador Neymar Jr.(2022)?");
            printf ("\n\n\t1) PSV");
            printf ("\n\n\t2) Barcelona");
            printf ("\n\n\t3) PSG");
            printf ("\n\n\t4) Liverpool");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 3:
                {
                    gol();
                    pont2=pont2+1;
                    break;
                }
                case 2: case 1: case 4:
                {
                    fora ();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        for(resp=0;resp<1;)
        {
            system ("cls"); //2
            printf("\n\t\t\t   CATEGORIA AMADOR\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 8+ GOLS)", pont2);
            printf ("\n\n\t\t(PERGUNTA 2)- Qual país sede da Copa do Mundo de 2022? ");
            printf ("\n\n\t1) Rússia");
            printf ("\n\n\t2) EUA");
            printf ("\n\n\t3) Coreia do Sul");
            printf ("\n\n\t4) Catar");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 4:
                {
                    gol();
                    pont2=pont2+1;
                    break;
                }
                case 2: case 3: case 1:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        for(resp=0;resp<1;)
        {
            system ("cls");//3
            printf("\n\t\t\t   CATEGORIA AMADOR\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 8+ GOLS)", pont2);
            printf ("\n\n\t\t(PERGUNTA 3)- Que time de SP tem como mascote uma baleia? ");
            printf ("\n\n\t1) Ponte Preta");
            printf ("\n\n\t2) Santos");
            printf ("\n\n\t3) Santo André");
            printf ("\n\n\t4) Palmeiras");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 2:
                {
                    gol();
                    pont2=pont2+1;
                    break;
                }
                case 1: case 4: case 3:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        for(resp=0;resp<1;)
        {
            system ("cls"); //4
            printf("\n\t\t\t   CATEGORIA AMADOR\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 8+ GOLS)", pont2);
            printf ("\n\n\t\t(PERGUNTA 4)- Qual destas equipes não está situada no Rio de Janeiro?");
            printf ("\n\n\t1) Resende");
            printf ("\n\n\t2) Volta Redonda");
            printf ("\n\n\t3) Vasco");
            printf ("\n\n\t4) Ceilândia");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 4:
                {
                    gol();
                    pont2=pont2+1;
                    break;
                }
                case 2: case 3: case 1:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }

        }
        for(resp=0;resp<1;)
        {
            system ("cls"); //5
            printf("\n\t\t\t   CATEGORIA AMADOR\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 8+ GOLS)", pont2);
            printf ("\n\n\t\t(PERGUNTA 5)- Quantas equipes são rebaixadas no Campeonato Brasileiro?");
            printf ("\n\n\t1) 4 Equipes");
            printf ("\n\n\t2) 3 Equipes");
            printf ("\n\n\t3) 1 Equipes");
            printf ("\n\n\t4) 2 Equipes");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 1:
                {
                    gol();
                    pont2=pont2+1;
                    break;
                }
                case 2: case 4: case 3:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        printf("\n\n\tAGUARDE...");
        sleep(3);
        system("cls");
        printf ("\n\n\tVocê conseguiu %i gols. A próxima fase precisa de 8", pont2);
        sleep(3);
        if(pont2<8)
        printf("\n\n\tVAI TER QUE JOGAR ESSA FASE NOVAMENTE");
        sleep(3);
        if(pont2<8)
        for(;cont<2;)
        {
            falt();
            system("cls");
            printf("\n\t\tA PRÓXIMA FASE PRECISA DE 8 GOLS E VOCÊ SÓ FEZ %i", pont2);
            sleep(1);
            printf ("\n\n\n\tMas sua equipe sofreu um pênalti e terá UMA chance nos acréscimos");
            sleep(1);
            printf("\n\n\tSe acertar o pênalti você ganhará mais dois gols");
            sleep(1);
            printf ("\n\n\tSe perder, terá que responder todas as perguntas novamente");
            sleep(1);
            printf("\n\n\tCom a mesma pontuação que iniciou essa fase");
            sleep(1);
            printf("\n\n\tMas não terá outra cobrança de pênalti");
            sleep(1);
            printf("\n\n\tBoa sorte...");
            sleep(1);
            printf("\n\n\tVAI PRECISAR `~´");
            sleep(1);
            printf("\n\n\tAperte ENTER...");
            getch();
            system ("cls");
            printf("\n\t\t\t COBRANÇA DE PÊNALTI\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(VOCÊ PRECISA DE %i)", pont2,8-pont2);
            printf ("\n\n\t\t(+2 GOLS)- Qual time é o maior vencedor da Premier League? ");
            printf ("\n\n\t1) Arsenal");
            printf ("\n\n\t2) West Ham");
            printf ("\n\n\t3) Man. United");
            printf ("\n\n\t4) Liverpool");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 3:
                {
                    gol();
                    getch();
                    pont2=pont2+2;
                    cont=2;
                    break;
                }
                case 1: case 4: case 2:
                {
                    perd();
                    printf("\n\n\tVAI TER QUE JOGAR ESSA FASE NOVAMENTE");
                    sleep(3);
                    cont=2;
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    cont=-1;
                    break;
                }
            }

        }
    }
    cont=0;
    system("cls");
    fase();
    sleep (2);
    system("cls");
    prof();
    sleep(3);
    system("color b1");
    for(pont3=pont2;pont3<13;) //NÍVEL 3
    {
        pont3=pont2;
        for(resp=0;resp<1;)
        {
            system ("cls"); //1
            printf("\n\t\t\t   CATEGORIA PROFISSA\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 13+ GOLS)", pont3);
            printf ("\n\n\t\t(PERGUNTA 1)- Qual destes times não é brasileiro?");
            printf ("\n\n\t1) Vila Nova");
            printf ("\n\n\t2) Gil Vicente");
            printf ("\n\n\t3) Azuriz");
            printf ("\n\n\t4) Brusque");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 2:
                {
                    gol();
                    pont3=pont3+1;
                    break;
                }
                case 3: case 1: case 4:
                {
                    fora ();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        for(resp=0;resp<1;)
        {
            system ("cls"); //2
            printf("\n\t\t\t   CATEGORIA PROFISSA\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 13+ GOLS)", pont3);
            printf ("\n\n\t\t(PERGUNTA 2)- Qual destas é uma equipe Tricolor? ");
            printf ("\n\n\t1) Fortaleza");
            printf ("\n\n\t2) Flamengo");
            printf ("\n\n\t3) Corinthians");
            printf ("\n\n\t4) RB Bragantino");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 1:
                {
                    gol();
                    pont3=pont3+1;
                    break;
                }
                case 2: case 3: case 4:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        for(resp=0;resp<1;)
        {
            system ("cls");//3
            printf("\n\t\t\t   CATEGORIA PROFISSA\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 13+ GOLS)", pont3);
            printf ("\n\n\t\t(PERGUNTA 3)- Quais jogadores formaram o trio de ataque MSN?  ");
            printf ("\n\n\t1) Mané, Salah, Nuno Tavares");
            printf ("\n\n\t2) Martial, Sergio, Neymar");
            printf ("\n\n\t3) Messi, Suarez, Neymar ");
            printf ("\n\n\t4) Messi, Saul, Nilmar");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 3:
                {
                    gol();
                    pont3=pont3+1;
                    break;
                }
                case 1: case 4: case 2:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        for(resp=0;resp<1;)
        {
            system ("cls"); //4
            printf("\n\t\t\t   CATEGORIA PROFISSA\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 13+ GOLS)", pont3);
            printf ("\n\n\t\t(PERGUNTA 4)- Que equipe ficou marcada pelo estilo de jogo “TIKI TAKA”? ");
            printf ("\n\n\t1) Milan");
            printf ("\n\n\t2) Internazionale");
            printf ("\n\n\t3) Barcelona");
            printf ("\n\n\t4) Real Madrid");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 3:
                {
                    gol();
                    pont3=pont3+1;
                    break;
                }
                case 2: case 4: case 1:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }

        }
        for(resp=0;resp<1;)
        {
            system ("cls"); //5
            printf("\n\t\t\t   CATEGORIA PROFISSA\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 13+ GOLS)", pont3);
            printf ("\n\n\t\t(PERGUNTA 5)- Qual destes jogadores estava presente na Copa de 2010?");
            printf ("\n\n\t1) Ronaldinho");
            printf ("\n\n\t2) Robinho");
            printf ("\n\n\t3) Neymar");
            printf ("\n\n\t4) Marcelo");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 2:
                {
                    gol();
                    pont3=pont3+1;
                    break;
                }
                case 1: case 4: case 3:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        printf("\n\n\tAGUARDE...");
        sleep(3);
        system("cls");
        printf ("\n\n\tVocê conseguiu %i gols. A próxima fase precisa de 13", pont3);
        sleep(3);
        if(pont3<13)
        printf("\n\n\tVAI TER QUE JOGAR ESSA FASE NOVAMENTE");
        sleep(3);
        if(pont3<13)
        for(;cont<2;)
        {
            falt();
            system("cls");
            printf("\n\t\tA PRÓXIMA FASE PRECISA DE 13 GOLS E VOCÊ SÓ FEZ %i", pont3);
            sleep(1);
            printf ("\n\n\n\tMas sua equipe sofreu um pênalti e terá UMA chance nos acréscimos");
            sleep(1);
            printf("\n\n\tSe acertar o pênalti você ganhará mais dois gols");
            sleep(1);
            printf ("\n\n\tSe perder, terá que responder todas as perguntas novamente");
            sleep(1);
            printf("\n\n\tCom a mesma pontuação que iniciou essa fase");
            sleep(1);
            printf("\n\n\tMas não terá outra cobrança de pênalti");
            sleep(1);
            printf("\n\n\tBoa sorte...");
            sleep(1);
            printf("\n\n\tVAI PRECISAR `~´");
            sleep(1);
            printf("\n\n\tAperte ENTER...");
            getch();
            system ("cls");
            printf("\n\t\t\t  COBRANÇA DE PÊNALTI\n");
            printf ("\n\tSEUS PONTOS: %i\t\t\t\t(VOCÊ PRECISA DE %i)", pont3,13-pont3);
            printf ("\n\n\t\t(+2 GOLS)- Qual jogador fez o único gol do Brasil no 7x1 contra Alemanha? ");
            printf ("\n\n\t1) Fred");
            printf ("\n\n\t2) Bernard");
            printf ("\n\n\t3) Oscar");
            printf ("\n\n\t4) Hulk");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 3:
                {
                    gol();
                    pont3=pont3+2;
                    //acert++;
                    cont=2;
                    break;
                }
                case 1: case 4: case 2:
                {
                    perd();
                    printf("\n\n\tVAI TER QUE JOGAR ESSA FASE NOVAMENTE");
                    sleep(2);
                   // err=err+1;
                    cont=2;
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    cont=-1;
                    break;
                }
            }
        }
    }
    cont=0;
    system("cls");
    fase();
    sleep (2);
    system("cls");
    vet();
    sleep(3);
    system("color 3f");
    for(pont4=pont3;pont4<18;) //NÍVEL 4
    {
        pont4=pont3;
        for(resp=0;resp<1;)
        {
            system ("cls"); //1
            printf("\n\t\t\t  CATEGORIA VETERANO\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 18+ GOLS)", pont4);
            printf ("\n\n\t\t(PERGUNTA 1)- Que time brasileiro venceu o Barcelona de Ronaldinho em 2006?");
            printf ("\n\n\t1) São Paulo");
            printf ("\n\n\t2) Vasco");
            printf ("\n\n\t3) Cruzeiro");
            printf ("\n\n\t4) Internacional");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 4:
                {
                    gol();
                    pont4=pont4+1;
                    break;
                }
                case 3: case 1: case 2:
                {
                    fora ();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        for(resp=0;resp<1;)
        {
            system ("cls"); //2
            printf("\n\t\t\t  CATEGORIA VETERANO\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 18+ GOLS)", pont4);
            printf ("\n\n\t\t(PERGUNTA 2)- Que jogador marcou o gol do Corinthians contra o Boca na Bombonera em 2012? ");
            printf ("\n\n\t1) Paulinho");
            printf ("\n\n\t2) Emerson Sheik");
            printf ("\n\n\t3) Guerrero");
            printf ("\n\n\t4) Romarinho");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 4:
                {
                    gol();
                    pont4=pont4+1;
                    break;
                }
                case 2: case 3: case 1:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        for(resp=0;resp<1;)
        {
            system ("cls");//3
            printf("\n\t\t\t  CATEGORIA VETERANO\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 18+ GOLS)", pont4);
            printf ("\n\n\t\t(PERGUNTA 3)- Qual seleção ficou em 3° lugar na Copa de 2014? ");
            printf ("\n\n\t1) Holanda");
            printf ("\n\n\t2) França");
            printf ("\n\n\t3) Argentina ");
            printf ("\n\n\t4) Alemanha");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 1:
                {
                    gol();
                    pont4=pont4+1;
                    break;
                }
                case 3: case 4: case 2:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        for(resp=0;resp<1;)
        {
            system ("cls"); //4
            printf("\n\t\t\t  CATEGORIA VETERANO\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 18+ GOLS)", pont4);
            printf ("\n\n\t\t(PERGUNTA 4)- Qual é a seleção com mais títulos de Copa América? ");
            printf ("\n\n\t1) Brasil");
            printf ("\n\n\t2) Colômbia");
            printf ("\n\n\t3) Uruguai");
            printf ("\n\n\t4) Argentina");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 3:
                {
                    gol();
                    pont4=pont4+1;
                    break;
                }
                case 2: case 4: case 1:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }

        }
        for(resp=0;resp<1;)
        {
            system ("cls"); //5
            printf("\n\t\t\t  CATEGORIA VETERANO\n");
            printf ("\n\tSEUS GOLS: %i\t\t\t\t(PRÓXIMO NÍVEL: 18+ GOLS)", pont4);
            printf ("\n\n\t\t(PERGUNTA 5)- Quem é o jogador com mais troféus na história do futebol?");
            printf ("\n\n\t1) Messi");
            printf ("\n\n\t2) Daniel Alves");
            printf ("\n\n\t3) Xavi");
            printf ("\n\n\t4) Iniesta");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 2:
                {
                    gol();
                    pont4=pont4+1;
                    break;
                }
                case 1: case 4: case 3:
                {
                    fora();
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    resp=-1;
                    break;
                }
            }
        }
        printf("\n\n\tAGUARDE...");
        sleep(3);
        system("cls");
        printf ("\n\n\tVocê conseguiu %i gols. Para ser campeão precisa de 20.", pont4);
        sleep(3);
        if(pont4<18)
        printf("\n\n\tVAI TER QUE JOGAR ESSA FASE NOVAMENTE");
        sleep(5);
        if(pont4<=18)
        for(;cont<2;)
        {
            falt();
            system("cls");
            printf("\n\t\t PARA SER CAMPEÃO VOCÊ PRECISA DE 20 GOLS E VOCÊ SÓ FEZ %i", pont4);
            sleep(1);
            printf ("\n\n\n\tMas sua equipe sofreu um pênalti e terá UMA chance nos acréscimos");
            sleep(1);
            printf("\n\n\tSe acertar o pênalti você ganhará mais dois gols, e talvez o título.");
            sleep(1);
            printf ("\n\n\tSe perder, terá que responder todas as perguntas novamente");
            sleep(1);
            printf("\n\n\tCom a mesma pontuação que iniciou essa fase");
            sleep(1);
            printf("\n\n\tMas não terá outra cobrança de pênalti");
            sleep(1);
            printf("\n\n\tBoa sorte...");
            sleep(1);
            printf("\n\n\tVAI PRECISAR `~´");
            sleep(1);
            printf("\n\n\tAperte ENTER...");
            getch();
            system ("cls");
            printf("\n\t\t\t COBRANÇA DE PÊNALTI\n");
            printf ("\n\tSEUS PONTOS: %i\t\t\t\t", pont4);
            printf ("\n\n\t\t(+2 GOLS)- Quem formava a dupla com Romário na seleção de 94? ");
            printf ("\n\n\t1) Edmundo");
            printf ("\n\n\t2) Bebeto");
            printf ("\n\n\t3) Ronaldinho");
            printf ("\n\n\t4) Ronaldo Fenômeno");
            printf("\n\n\tResposta:"); scanf("%i", &resp);
            switch (resp)
            {
                case 2:
                {
                    gol();
                    pont4=pont4+2;
                    cont=2;
                    break;
                }
                case 1: case 4: case 3:
                {
                    perd();
                    printf("\n\n\tVAI TER QUE JOGAR ESSA FASE NOVAMENTE");
                    sleep(3);
                    cont=2;
                    break;
                }
                default:
                {
                    printf("\n\nOpção inválida\n\n");
                    getch();
                    cont=-1;
                    break;
                }
            }

        }
    }
    if (pont4>=20)
    {
        system("cls");
        printf("\n\n\tPARABÉNS VOCÊ MERECEU O TÍTULO");
        sleep(3);
        trof();
    }
    if (pont4<20)
    {
       printf("\n\n\t Mas para finalizar o jogo precisa de 18.");
       sleep(3);
       printf("\n\n\tParabéns por completar o jogo. ");
       sleep(3);
       printf("\n\n\tAperte enter para sair"); getch();
    }
}

void fora()
{
    system("cls");
    printf("\t\t\t\t=======================================================================================================\n\n\n");
    printf("\t\t\t\t                          NNNNNNNNN   NNNNNNN   NNNNNNNNN    NNNNNNN   NNN  NNN  NNN                        \n");
    printf("\t\t\t\t                          NNNNNNNNN  NNNNNNNNN  NNN    NNN  NNNNNNNNN  NNN  NNN  NNN                        \n");
    printf("\t\t\t\t                          NNN        NNN   NNN  NNN    NNN  NNN   NNN  NNN  NNN  NNN                        \n");
    printf("\t\t\t\t                          NNNNNN     NNN   NNN  NNNNNNNNN   NNN   NNN  NNN  NNN  NNN                        \n");
    printf("\t\t\t\t                          NNNNNN     NNN   NNN  NNN  NNN    NNNNNNNNN                                    \n");
    printf("\t\t\t\t                          NNN        NNNNNNNNN  NNN   NNN   NNN   NNN  NNN  NNN  NNN                        \n");
    printf("\t\t\t\t                          NNN         NNNNNNN   NNN   NNNN  NNN   NNN  NNN  NNN  NNN                    \n\n\n");
    printf("\t\t\t\t=======================================================================================================    \n");
    sleep(2);

}

void sub11()
{
    printf("\n=====================================================================================================================\n\n\n");
    printf("  NNN   NNN  NNN NNN	NNN  NNNNNNNNN  NNN                                                                                \n");
    printf("  NNNN  NNN  NNN NNN	NNN  NNNNNNNNN  NNN                                                                                \n");
    printf("  NNNNN NNN  NNN NNN    NNN  NNN        NNN                                                                                \n");
    printf("  NNNNNNNNN  NNN  NNN  NNN   NNNNNNN    NNN                                                                                \n");
    printf("  NNN NNNNN  NNN   NNNNNN    NNN        NNN                                                                                \n");
    printf("  NNN  NNNN  NNN    NNNN     NNNNNNNNN  NNNNNNNNN                                                                          \n");
    printf("  NNN   NNN  NNN     NN      NNNNNNNNN  NNNNNNNNN                                                                        \n\n");
    printf("\t\t\t\t\t         NNNNNNNNN  NNN   NNN  NNNNNNNNN             NNNN       NNNN                                             \n");
    printf("\t\t\t\t\t         NNNNNNNN   NNN   NNN  NNN    NNN           N NNN      N NNN                                             \n");
    printf("\t\t\t\t\t         NNNN       NNN   NNN  NNN    NNN             NNN        NNN                                             \n");
    printf("\t\t\t\t\t          NNNN      NNN   NNN  NNNNNNNNN              NNN        NNN                                             \n");
    printf("\t\t\t\t\t             NNNN   NNN   NNN  NNN    NNN             NNN        NNN                                             \n");
    printf("\t\t\t\t\t          NNNNNNNN  NNNNNNNNN  NNN    NNN             NNN        NNN                                             \n");
    printf("\t\t\t\t\t         NNNNNNNNN   NNNNNNN   NNNNNNNNN           NNNNNNNNN  NNNNNNNNN                                          \n");
    printf("\n\n\n=====================================================================================================================\n");
}

 void amad()
{
    system("cls");
    printf("\n=====================================================================================================================\n\n\n");
    printf("  NNN   NNN  NNN NNN	NNN  NNNNNNNNN  NNN                                                                                \n");
    printf("  NNNN  NNN  NNN NNN	NNN  NNNNNNNNN  NNN                                                                                \n");
    printf("  NNNNN NNN  NNN NNN    NNN  NNN        NNN                                                                                \n");
    printf("  NNNNNNNNN  NNN  NNN  NNN   NNNNNNN    NNN                                                                                \n");
    printf("  NNN NNNNN  NNN   NNNNNN    NNN        NNN                                                                                \n");
    printf("  NNN  NNNN  NNN    NNNN     NNNNNNNNN  NNNNNNNNN                                                                          \n");
    printf("  NNN   NNN  NNN     NN      NNNNNNNNN  NNNNNNNNN                                                                        \n\n");
    printf("\t\t\t\t\t          NNNNNNN   NNN     NNN   NNNNNNN   NNNNNNNN     NNNNNNN   NNNNNNNNN                                     \n");
    printf("\t\t\t\t\t         NNNNNNNNN  NNNN   NNNN  NNNNNNNNN  NNNNNNNNN   NNNNNNNNN  NNN    NNN                                    \n");
    printf("\t\t\t\t\t         NNN   NNN  NNNNN NNNNN  NNN   NNN  NNN    NNN  NNN   NNN  NNN    NNN                                    \n");
    printf("\t\t\t\t\t         NNN   NNN  NNN NNN NNN  NNN   NNN  NNN    NNN  NNN   NNN  NNNNNNNNN                                     \n");
    printf("\t\t\t\t\t         NNNNNNNNN  NNN  N  NNN  NNNNNNNNN  NNN    NNN  NNN   NNN  NNN  NNN                                      \n");
    printf("\t\t\t\t\t         NNN   NNN  NNN     NNN  NNN   NNN  NNNNNNNNN   NNNNNNNNN  NNN   NNN                                     \n");
    printf("\t\t\t\t\t         NNN   NNN  NNN     NNN  NNN   NNN  NNNNNNNN     NNNNNNN   NNN   NNNN                                    \n");
    printf("\n\n\n=====================================================================================================================\n");
 }

 void prof()
 {
    printf("\n============================================================================================================================  \n\n\n");
    printf("  NNN   NNN  NNN NNN	NNN  NNNNNNNNN  NNN                                                                                         \n");
    printf("  NNNN  NNN  NNN NNN	NNN  NNNNNNNNN  NNN                                                                                         \n");
    printf("  NNNNN NNN  NNN NNN    NNN  NNN        NNN                                                                                         \n");
    printf("  NNNNNNNNN  NNN  NNN  NNN   NNNNNNN    NNN                                                                                         \n");
    printf("  NNN NNNNN  NNN   NNNNNN    NNN        NNN                                                                                         \n");
    printf("  NNN  NNNN  NNN    NNNN     NNNNNNNNN  NNNNNNNNN                                                                                   \n");
    printf("  NNN   NNN  NNN     NN      NNNNNNNNN  NNNNNNNNN                                                                                 \n\n");
    printf("\t\t\t\t         NNNNNNNNN   NNNNNNNNN    NNNNNNN   NNNNNNNNN  NNN  NNNNNNNN  NNNNNNNNN    NNNNNNN                                  \n");
    printf("\t\t\t\t         NNN    NNN  NNN    NNN  NNNNNNNNN  NNNNNNNNN  NNN  NNNNNNN   NNNNNNNN    NNNNNNNNN                                 \n");
    printf("\t\t\t\t         NNN    NNN  NNN    NNN  NNN   NNN  NNN        NNN  NNNN      NNNN        NNN   NNN                                 \n");
    printf("\t\t\t\t         NNNNNNNNN   NNNNNNNNN   NNN   NNN  NNNNNN     NNN   NNNN       NNNN      NNN   NNN                                 \n");
    printf("\t\t\t\t         NNN         NNN  NNN    NNN   NNN  NNNNNN     NNN      NNNN       NNNN   NNNNNNNNN                                 \n");
    printf("\t\t\t\t         NNN         NNN   NNN   NNNNNNNNN  NNN        NNN   NNNNNNNN   NNNNNNNN  NNN   NNN                                 \n");
    printf("\t\t\t\t         NNN         NNN   NNNN   NNNNNNN   NNN        NNN  NNNNNNNNN  NNNNNNNNN  NNN   NNN                                 \n");
    printf("\n\n\n============================================================================================================================  \n");
}

void vet()
{
    printf("\n====================================================================================================================================  \n\n\n");
    printf("  NNN   NNN  NNN NNN	NNN  NNNNNNNNN  NNN                                                                                                  \n");
    printf("  NNNN  NNN  NNN NNN	NNN  NNNNNNNNN  NNN                                                                                                  \n");
    printf("  NNNNN NNN  NNN NNN    NNN  NNN        NNN                                                                                                  \n");
    printf("  NNNNNNNNN  NNN  NNN  NNN   NNNNNNN    NNN                                                                                                  \n");
    printf("  NNN NNNNN  NNN   NNNNNN    NNN        NNN                                                                                                  \n");
    printf("  NNN  NNNN  NNN    NNNN     NNNNNNNNN  NNNNNNNNN                                                                                            \n");
    printf("  NNN   NNN  NNN     NN      NNNNNNNNN  NNNNNNNNN                                                                                          \n\n");
    printf("\t\t\t\t         NNN	NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN    NNNNNNN   NNN   NNN   NNNNNNN                                     \n");
    printf("\t\t\t\t         NNN	NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNN    NNN  NNNNNNNNN  NNNN  NNN  NNNNNNNNN                                    \n");
    printf("\t\t\t\t         NNN	NNN  NNN           NNN     NNN        NNN    NNN  NNN   NNN  NNNNN NNN  NNN   NNN                                    \n");
    printf("\t\t\t\t          NNN  NNN   NNNNNNN       NNN     NNNNNNN    NNNNNNNNN   NNN   NNN  NNNNNNNNN  NNN   NNN                                    \n");
    printf("\t\t\t\t           NNNNNN    NNN           NNN     NNN        NNN  NNN    NNNNNNNNN  NNN NNNNN  NNN   NNN                                    \n");
    printf("\t\t\t\t            NNNN     NNNNNNNNN     NNN     NNNNNNNNN  NNN   NNN   NNN   NNN  NNN  NNNN  NNNNNNNNN                                    \n");
    printf("\t\t\t\t             NN      NNNNNNNNN     NNN     NNNNNNNNN  NNN   NNNN  NNN   NNN  NNN   NNN   NNNNNNN                                     \n");
    printf("\n\n\n===================================================================================================================================    \n");
}

void gol()
{
    system("cls");
    printf("\n==============================================================================================================================     \n\n\n\n\n");
    printf("   NNNNNNNN                                  \n");
    printf("  NNNNNNNNN                          \n");
    printf("  NNN                           \n");
    printf("  NNN  NNNN                     \n");
    printf("  NNN   NNN                     \n");
    printf("  NNNNNNNNN                      \n");
    printf("   NNNNNNN                                             \n");
    printf("                                \n");
    printf("                              \n\n\n");
    printf("\n\n\n============================================================================================================================           \n");
    sleep(0,9);
    system("cls");
    printf("\n==============================================================================================================================     \n\n\n\n\n");
    printf("   NNNNNNNN                                 \n");
    printf("  NNNNNNNNN                                \n");
    printf("  NNN         NNNNNNN                        \n");
    printf("  NNN  NNNN  NNNNNNNNN                      \n");
    printf("  NNN   NNN  NNN   NNN                     \n");
    printf("  NNNNNNNNN  NNN   NNN                       \n");
    printf("   NNNNNNN   NNN   NNN                        \n");
    printf("             NNNNNNNNN                               \n");
    printf("              NNNNNNN                      \n\n\n");
    printf("\n\n\n============================================================================================================================           \n");
    sleep(0,9);
    system("cls");
    printf("\n==============================================================================================================================     \n\n\n\n\n");
    printf("   NNNNNNNN              NNNNNNN                                   \n");
    printf("  NNNNNNNNN             NNNNNNNNN                                  \n");
    printf("  NNN         NNNNNNN   NNN   NNN                       \n");
    printf("  NNN  NNNN  NNNNNNNNN  NNN   NNN                       \n");
    printf("  NNN   NNN  NNN   NNN  NNN   NNN                      \n");
    printf("  NNNNNNNNN  NNN   NNN  NNNNNNNNN                      \n");
    printf("   NNNNNNN   NNN   NNN   NNNNNNN                                                 \n");
    printf("             NNNNNNNNN                                  \n");
    printf("              NNNNNNN                                \n\n\n");
    printf("\n\n\n============================================================================================================================           \n");
    sleep(0,9);
    system("cls");
    printf("\n==============================================================================================================================     \n\n\n\n\n");
    printf("   NNNNNNNN              NNNNNNN                                   \n");
    printf("  NNNNNNNNN             NNNNNNNNN                                 \n");
    printf("  NNN         NNNNNNN   NNN   NNN   NNNNNNN                       \n");
    printf("  NNN  NNNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN                       \n");
    printf("  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN                       \n");
    printf("  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN                       \n");
    printf("   NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN                             \n");
    printf("             NNNNNNNNN             NNNNNNNNN                                       \n");
    printf("              NNNNNNN               NNNNNNN                                          \n\n\n");
    printf("\n\n\n============================================================================================================================           \n");
    sleep(0,9);
    system("cls");
    printf("\n==============================================================================================================================     \n\n\n\n\n");
    printf("   NNNNNNNN              NNNNNNN               NNNNNNN                        \n");
    printf("  NNNNNNNNN             NNNNNNNNN             NNNNNNNNN                      \n");
    printf("  NNN         NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN                       \n");
    printf("  NNN  NNNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN                       \n");
    printf("  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN                     \n");
    printf("  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN                       \n");
    printf("   NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN   NNNNNNN                                              \n");
    printf("             NNNNNNNNN             NNNNNNNNN                                          \n");
    printf("              NNNNNNN               NNNNNNN                                           \n\n\n");
    printf("\n\n\n============================================================================================================================           \n");
    sleep(0,9);
    system("cls");
    printf("\n==============================================================================================================================     \n\n\n\n\n");
    printf("   NNNNNNNN              NNNNNNN               NNNNNNN    NNNNNNN                             \n");
    printf("  NNNNNNNNN             NNNNNNNNN             NNNNNNNNN  NNNNNNNNN                                \n");
    printf("  NNN         NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN  NNN   NNN                       \n");
    printf("  NNN  NNNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN  NNN   NNN                       \n");
    printf("  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN                       \n");
    printf("  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNNNNNNNN                       \n");
    printf("   NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN   NNNNNNN    NNNNNNN                                                  \n");
    printf("             NNNNNNNNN             NNNNNNNNN                                            \n");
    printf("              NNNNNNN               NNNNNNN                                           \n\n\n");
    printf("\n\n\n============================================================================================================================           \n");
    sleep(0,9);
    system("cls");
    printf("\n==============================================================================================================================     \n\n\n\n\n");
    printf("   NNNNNNNN              NNNNNNN               NNNNNNN    NNNNNNN                                 \n");
    printf("  NNNNNNNNN             NNNNNNNNN             NNNNNNNNN  NNNNNNNNN                                  \n");
    printf("  NNN         NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN  NNN   NNN   NNNNNNN                        \n");
    printf("  NNN  NNNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN  NNN   NNN  NNNNNNNNN                      \n");
    printf("  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN                      \n");
    printf("  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNNNNNNNN  NNN   NNN                      \n");
    printf("   NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN   NNNNNNN    NNNNNNN   NNN   NNN                                         \n");
    printf("             NNNNNNNNN             NNNNNNNNN                        NNNNNNNNN                                  \n");
    printf("              NNNNNNN               NNNNNNN                          NNNNNNN                            \n\n\n");
    printf("\n\n\n============================================================================================================================           \n");
    sleep(0,9);
    system("cls");
    printf("\n==============================================================================================================================     \n\n\n\n\n");
    printf("   NNNNNNNN              NNNNNNN               NNNNNNN    NNNNNNN              NNN                                    \n");
    printf("  NNNNNNNNN             NNNNNNNNN             NNNNNNNNN  NNNNNNNNN             NNN                                        \n");
    printf("  NNN         NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN  NNN   NNN   NNNNNNN   NNN                            \n");
    printf("  NNN  NNNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN  NNN   NNN  NNNNNNNNN  NNN                          \n");
    printf("  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN                             \n");
    printf("  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN                      \n");
    printf("   NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN   NNNNNNN    NNNNNNN   NNN   NNN  NNNNNNNNN                                                \n");
    printf("             NNNNNNNNN             NNNNNNNNN                        NNNNNNNNN                                 \n");
    printf("              NNNNNNN               NNNNNNN                          NNNNNNN                              \n\n\n");
    printf("\n\n\n============================================================================================================================           \n");
    sleep(0,9);
    system("cls");
    printf("\n==============================================================================================================================     \n\n\n\n\n");
    printf("   NNNNNNNN              NNNNNNN               NNNNNNN    NNNNNNN              NNN                                        \n");
    printf("  NNNNNNNNN             NNNNNNNNN             NNNNNNNNN  NNNNNNNNN             NNN                                        \n");
    printf("  NNN         NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN  NNN   NNN   NNNNNNN   NNN        NNN                             \n");
    printf("  NNN  NNNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN  NNN   NNN  NNNNNNNNN  NNN        NNN                             \n");
    printf("  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN        NNN                            \n");
    printf("  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN                            \n");
    printf("   NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN   NNNNNNN    NNNNNNN   NNN   NNN  NNNNNNNNN  NNN                                                \n");
    printf("             NNNNNNNNN             NNNNNNNNN                        NNNNNNNNN             NNNNNNNNN                       \n");
    printf("              NNNNNNN               NNNNNNN                          NNNNNNN              NNNNNNNNN                    \n\n\n");
    printf("\n\n\n============================================================================================================================           \n");
    sleep(0,9);
    system("cls");
    printf("\n==============================================================================================================================     \n\n\n\n\n");
    printf("   NNNNNNNN              NNNNNNN               NNNNNNN    NNNNNNN              NNN                    NNN  NNN  NNN  NNN                     \n");
    printf("  NNNNNNNNN             NNNNNNNNN             NNNNNNNNN  NNNNNNNNN             NNN                    NNN  NNN  NNN  NNN                     \n");
    printf("  NNN         NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN  NNN   NNN   NNNNNNN   NNN        NNN         NNN  NNN  NNN  NNN                     \n");
    printf("  NNN  NNNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN  NNN   NNN  NNNNNNNNN  NNN        NNN         NNN  NNN  NNN  NNN                     \n");
    printf("  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN   NNN  NNN        NNN         NNN  NNN  NNN  NNN                     \n");
    printf("  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNN         NNN  NNN  NNN  NNN                     \n");
    printf("   NNNNNNN   NNN   NNN   NNNNNNN   NNN   NNN   NNNNNNN    NNNNNNN   NNN   NNN  NNNNNNNNN  NNN                                                \n");
    printf("             NNNNNNNNN             NNNNNNNNN                        NNNNNNNNN             NNNNNNNNN   NNN  NNN  NNN  NNN                     \n");
    printf("              NNNNNNN               NNNNNNN                          NNNNNNN              NNNNNNNNN   NNN  NNN  NNN  NNN                 \n\n\n");
    printf("\n\n\n============================================================================================================================           \n");
    sleep(1);
    system("cls");
}

void titulo()
{
    printf("\t\t\t\t=======================================================================================================\n\n\n");
    printf("\t\t\t\t   NNNNNNNNN                                                                                      \n");
    printf("\t\t\t\t   NNN    NNN                                                                                     \n");
    printf("\t\t\t\t   NNN    NNN                                                                                          \n");
    printf("\t\t\t\t   NNNNNNNNN                                                                                       \n");
    printf("\t\t\t\t   NNN  NNN                          \n");
    printf("\t\t\t\t   NNN   NNN             \n");
    printf("\t\t\t\t   NNN   NNNN         \n\n\n");
    printf("\t\t\t\t=======================================================================================================    \n");
    sleep(0,9);
    system("cls");
    printf("\t\t\t\t=======================================================================================================\n\n\n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNNNN                                                                                    \n");
    printf("\t\t\t\t   NNN    NNN NNNNNNNNN                                                                                    \n");
    printf("\t\t\t\t   NNN    NNN NNN                                                                                          \n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNN                                                                                      \n");
    printf("\t\t\t\t   NNN  NNN   NNN                        \n");
    printf("\t\t\t\t   NNN   NNN  NNNNNNNNN           \n");
    printf("\t\t\t\t   NNN   NNNN NNNNNNNNN        \n\n\n");
    printf("\t\t\t\t=======================================================================================================    \n");
    sleep(0,9);
    system("cls");
    printf("\t\t\t\t=======================================================================================================\n\n\n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNNNN   NNNNNNNN             \n");
    printf("\t\t\t\t   NNN    NNN NNNNNNNNN  NNNNNNNNN              \n");
    printf("\t\t\t\t   NNN    NNN NNN        NNN                    \n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNN    NNN                    \n");
    printf("\t\t\t\t   NNN  NNN   NNN        NNN                         \n");
    printf("\t\t\t\t   NNN   NNN  NNNNNNNNN  NNNNNNNNN              \n");
    printf("\t\t\t\t   NNN   NNNN NNNNNNNNN   NNNNNNNN         \n\n\n");
    printf("\t\t\t\t=======================================================================================================    \n");
    sleep(0,9);
    system("cls");
     printf("\t\t\t\t=======================================================================================================\n\n\n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNNNN   NNNNNNNN  NNNNNNNNN                         \n");
    printf("\t\t\t\t   NNN    NNN NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                          \n");
    printf("\t\t\t\t   NNN    NNN NNN        NNN        NNN                                               \n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNN    NNN        NNNNNNN                             \n");
    printf("\t\t\t\t   NNN  NNN   NNN        NNN        NNN                                                \n");
    printf("\t\t\t\t   NNN   NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                             \n");
    printf("\t\t\t\t   NNN   NNNN NNNNNNNNN   NNNNNNNN  NNNNNNNNN                      \n\n\n");
    printf("\t\t\t\t=======================================================================================================    \n");
    sleep(0,9);
    system("cls");
     printf("\t\t\t\t=======================================================================================================\n\n\n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNNNN   NNNNNNNN  NNNNNNNNN  NNNNNNNNN                       \n");
    printf("\t\t\t\t   NNN    NNN NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                        \n");
    printf("\t\t\t\t   NNN    NNN NNN        NNN        NNN        NNN                                       \n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNN    NNN        NNNNNNN    NNNNNNN                         \n");
    printf("\t\t\t\t   NNN  NNN   NNN        NNN        NNN        NNN                                        \n");
    printf("\t\t\t\t   NNN   NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                           \n");
    printf("\t\t\t\t   NNN   NNNN NNNNNNNNN   NNNNNNNN  NNNNNNNNN  NNNNNNNNN                    \n\n\n");
    printf("\t\t\t\t=======================================================================================================    \n");
    sleep(0,9);
    system("cls");
     printf("\t\t\t\t=======================================================================================================\n\n\n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNNNN   NNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                     \n");
    printf("\t\t\t\t   NNN    NNN NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                      \n");
    printf("\t\t\t\t   NNN    NNN NNN        NNN        NNN        NNN        NNN                               \n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNN    NNN        NNNNNNN    NNNNNNN    NNNNNNN                     \n");
    printf("\t\t\t\t   NNN  NNN   NNN        NNN        NNN        NNN        NNN                                \n");
    printf("\t\t\t\t   NNN   NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                         \n");
    printf("\t\t\t\t   NNN   NNNN NNNNNNNNN   NNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                 \n\n\n");
    printf("\t\t\t\t=======================================================================================================    \n");
    sleep(0,9);
    system("cls");
    printf("\t\t\t\t=======================================================================================================\n\n\n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNNNN   NNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                \n");
    printf("\t\t\t\t   NNN    NNN NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNN    NNN              \n");
    printf("\t\t\t\t   NNN    NNN NNN        NNN        NNN        NNN        NNN        NNN    NNN             \n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNN    NNN        NNNNNNN    NNNNNNN    NNNNNNN    NNNNNNNNN               \n");
    printf("\t\t\t\t   NNN  NNN   NNN        NNN        NNN        NNN        NNN        NNN    NNN                   \n");
    printf("\t\t\t\t   NNN   NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNN    NNN             \n");
    printf("\t\t\t\t   NNN   NNNN NNNNNNNNN   NNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN           \n\n\n");
    printf("\t\t\t\t=======================================================================================================    \n");
    sleep(0,9);
    system("cls");
     printf("\t\t\t\t=======================================================================================================\n\n\n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNNNN   NNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN    NNNNNNN               \n");
    printf("\t\t\t\t   NNN    NNN NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNN    NNN  NNNNNNNNN              \n");
    printf("\t\t\t\t   NNN    NNN NNN        NNN        NNN        NNN        NNN        NNN    NNN  NNN   NNN              \n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNN    NNN        NNNNNNN    NNNNNNN    NNNNNNN    NNNNNNNNN   NNNNNNNNN              \n");
    printf("\t\t\t\t   NNN  NNN   NNN        NNN        NNN        NNN        NNN        NNN    NNN  NNNNNNNNN                  \n");
    printf("\t\t\t\t   NNN   NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNN    NNN  NNN   NNN              \n");
    printf("\t\t\t\t   NNN   NNNN NNNNNNNNN   NNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN   NNN   NNN          \n\n\n");
    printf("\t\t\t\t=======================================================================================================    \n");
    sleep(0,9);
    system("cls");
     printf("\t\t\t\t=======================================================================================================\n\n\n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNNNN   NNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN    NNNNNNN   NNNN            \n");
    printf("\t\t\t\t   NNN    NNN NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNN    NNN  NNNNNNNNN  NNNN            \n");
    printf("\t\t\t\t   NNN    NNN NNN        NNN        NNN        NNN        NNN        NNN    NNN  NNN   NNN  NNNN            \n");
    printf("\t\t\t\t   NNNNNNNNN  NNNNNNN    NNN        NNNNNNN    NNNNNNN    NNNNNNN    NNNNNNNNN   NNNNNNNNN  NNNN            \n");
    printf("\t\t\t\t   NNN  NNN   NNN        NNN        NNN        NNN        NNN        NNN    NNN  NNNNNNNNN                  \n");
    printf("\t\t\t\t   NNN   NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNN    NNN  NNN   NNN  NNNN            \n");
    printf("\t\t\t\t   NNN   NNNN NNNNNNNNN   NNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN   NNN   NNN  NNNN        \n\n\n");
    printf("\t\t\t\t=======================================================================================================    \n");
    sleep(2);
}

void falt()
{
    system("cls");
    printf("\n==============================================================================================================================     \n\n\n\n\n");
    printf("  NNNNNNNNN   NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN      NNN  NNN  NNN                                                  \n");
    printf("  NNN    NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN      NNN  NNN  NNN                                                  \n");
    printf("  NNN    NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN      NNN  NNN  NNN                                                  \n");
    printf("  NNNNNNNNN   NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN      NNN  NNN  NNN                                                  \n");
    printf("  NNN         NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN                                                                     \n");
    printf("  NNN         NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN      NNN  NNN  NNN                                                  \n");
    printf("  NNN         NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN  NNN      NNN  NNN  NNN                                              \n\n\n");
    printf("\t\t\t\t              NNNNNNNNN   NNNNNNN   NNN        NNNNNNNNN   NNNNNNN                                                                 \n");
    printf("\t\t\t\t              NNNNNNNNN  NNNNNNNNN  NNN        NNNNNNNNN  NNNNNNNNN                                                                \n");
    printf("\t\t\t\t              NNN        NNN   NNN  NNN           NNN     NNN   NNN                                                                \n");
    printf("\t\t\t\t              NNNNNN     NNN   NNN  NNN           NNN     NNN   NNN                                                                \n");
    printf("\t\t\t\t              NNNNNN     NNNNNNNNN  NNN           NNN     NNNNNNNNN                                                                \n");
    printf("\t\t\t\t              NNN        NNN   NNN  NNNNNNNNN     NNN     NNN   NNN  NNN  NNN  NNN                                                 \n");
    printf("\t\t\t\t              NNN        NNN   NNN  NNNNNNNNN     NNN     NNN   NNN  NNN  NNN  NNN                                                 \n");
    printf("\n\n============================================================================================================================             \n");
    sleep(3);
}

void perd()
{
    system("cls");
    printf("\t\t\t\t===================================================================================================      \n\n\n");
    printf("\t\t\t\t\t   NNNNNNNNN  NNNNNNNNN  NNNNNNNNN    NNNNNNNN    NNNNNNNNN  NNN    NNN    NNN  NNN  NNN                   \n");
    printf("\t\t\t\t\t   NNN    NNN NNNNNNNNN  NNN    NNN   NNNNNNNNN   NNNNNNNNN  NNN    NNN    NNN  NNN  NNN                   \n");
    printf("\t\t\t\t\t   NNN    NNN NNN        NNN    NNN   NNN    NNN  NNN        NNN    NNN    NNN  NNN  NNN                   \n");
    printf("\t\t\t\t\t   NNNNNNNNN  NNNNNNN    NNNNNNNNN    NNN    NNN  NNNNNNN    NNN    NNN    NNN  NNN  NNN                   \n");
    printf("\t\t\t\t\t   NNN        NNN        NNN  NNN     NNN    NNN  NNN        NNN    NNN                                    \n");
    printf("\t\t\t\t\t   NNN        NNNNNNNNN  NNN   NNN    NNNNNNNNN   NNNNNNNNN  NNNNNNNNNN    NNN  NNN  NNN                   \n");
    printf("\t\t\t\t\t   NNN        NNNNNNNNN  NNN    NNNN  NNNNNNNN    NNNNNNNNN   NNNNNNNN     NNN  NNN  NNN               \n\n\n");
    printf("\t\t\t\t===================================================================================================          \n");
    sleep(3);
    system("cls");
}

void fase()
{
    printf("\t============================================================================================================================\n\n\n");
    printf("\t    NNNNNNN   NNN         NNNNNNN   NNNNNNNN   NNNNNNNN  NNN  NNNNNNNNN NNN   NNNNNNN    NNNNNNN   NNNNNNNN     NNNNNNN         \n");
    printf("\t   NNNNNNNNN  NNN        NNNNNNNNN  NNNNNNN    NNNNNNN   NNN  NNNNNNNNN NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN   NNNNNNNNN        \n");
    printf("\t   NNN        NNN        NNN   NNN  NNNN       NNNN      NNN  NNN       NNN  NNN        NNN   NNN  NNN    NNN  NNN   NNN        \n");
    printf("\t   NNN        NNN        NNN   NNN   NNNN        NNNN    NNN  NNNNNN    NNN  NNN        NNN   NNN  NNN    NNN  NNN   NNN        \n");
    printf("\t   NNN        NNN        NNNNNNNNN      NNNN       NNNN  NNN  NNNNNN    NNN  NNN        NNNNNNNNN  NNN    NNN  NNN   NNN        \n");
    printf("\t   NNNNNNNNN  NNNNNNNNN  NNN   NNN   NNNNNNNN   NNNNNNNN NNN  NNN       NNN  NNNNNNNNN  NNN   NNN  NNNNNNNNN   NNNNNNNNN        \n");
    printf("\t    NNNNNNN   NNNNNNNNN  NNN   NNN  NNNNNNNNN  NNNNNNNNN NNN  NNN       NNN   NNNNNNN   NNN   NNN  NNNNNNNN     NNNNNNN     \n\n\n");
    printf("\t============================================================================================================================    \n");
    sleep(2);
    system("cls");
    printf("\n\n\n\t Preparando proxima fase.");
    sleep(1);
    system("cls");
    printf("\n\n\n\t Preparando proxima fase..");
    sleep(1);
    system("cls");
    printf("\n\n\n\t Preparando proxima fase...");
    sleep(1);
}

void trof ()
{
    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    sleep(0,9);
        system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    sleep(0,9); system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");//30
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");//30
    printf("\t\t                                   OOO                               OOO                                                        \n");//30,9
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");//30
    printf("\t\t                                   OOO                               OOO                                                        \n");//30,9
    printf("\t\t                                   OOO                               OOO                                                        \n");//32
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");//30
    printf("\t\t                                   OOO                               OOO                                                        \n");//30,9
    printf("\t\t                                   OOO                               OOO                                                        \n");//32
    printf("\t\t                                   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                                                        \n");//33
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");//30
    printf("\t\t                                   OOO                               OOO                                                        \n");//30,9
    printf("\t\t                                   OOO                               OOO                                                        \n");//32
    printf("\t\t                                   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                                                        \n");//33
    printf("\t\t                                                                                                                                \n");//34
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");//30
    printf("\t\t                                   OOO                               OOO                                                        \n");//30,9
    printf("\t\t                                   OOO                               OOO                                                        \n");//32
    printf("\t\t                                   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                                                        \n");//33
    printf("\t\t                                                                                                                                \n");//34
    printf("\t\t               NNNNNNN    NNNNNNN   NNN     NNN  NNNNNNNNN   NNNNNNNNN   NNNNNNN    NNNNNNN                                      \n");//35
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");//30
    printf("\t\t                                   OOO                               OOO                                                        \n");//30,9
    printf("\t\t                                   OOO                               OOO                                                        \n");//32
    printf("\t\t                                   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                                                        \n");//33
    printf("\t\t                                                                                                                                \n");//34
    printf("\t\t               NNNNNNN    NNNNNNN   NNN     NNN  NNNNNNNNN   NNNNNNNNN   NNNNNNN    NNNNNNN                                      \n");//35
    printf("\t\t              NNNNNNNNN  NNNNNNNNN  NNNN   NNNN  NNN    NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                                     \n");//36
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");//30
    printf("\t\t                                   OOO                               OOO                                                        \n");//30,9
    printf("\t\t                                   OOO                               OOO                                                        \n");//32
    printf("\t\t                                   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                                                        \n");//33
    printf("\t\t                                                                                                                                \n");//34
    printf("\t\t               NNNNNNN    NNNNNNN   NNN     NNN  NNNNNNNNN   NNNNNNNNN   NNNNNNN    NNNNNNN                                      \n");//35
    printf("\t\t              NNNNNNNNN  NNNNNNNNN  NNNN   NNNN  NNN    NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                                     \n");//36
    printf("\t\t              NNN        NNN   NNN  NNNNN NNNNN  NNN    NNN  NNN        NNN   NNN  NNN   NNN                                     \n");//37
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");//30
    printf("\t\t                                   OOO                               OOO                                                        \n");//30,9
    printf("\t\t                                   OOO                               OOO                                                        \n");//32
    printf("\t\t                                   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                                                        \n");//33
    printf("\t\t                                                                                                                                \n");//34
    printf("\t\t               NNNNNNN    NNNNNNN   NNN     NNN  NNNNNNNNN   NNNNNNNNN   NNNNNNN    NNNNNNN                                      \n");//35
    printf("\t\t              NNNNNNNNN  NNNNNNNNN  NNNN   NNNN  NNN    NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                                     \n");//36
    printf("\t\t              NNN        NNN   NNN  NNNNN NNNNN  NNN    NNN  NNN        NNN   NNN  NNN   NNN                                     \n");//37
    printf("\t\t              NNN        NNN   NNN  NNN NNN NNN  NNNNNNNNN   NNNNNNN    NNN   NNN  NNN   NNN                                     \n");//38
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");//30
    printf("\t\t                                   OOO                               OOO                                                        \n");//30,9
    printf("\t\t                                   OOO                               OOO                                                        \n");//32
    printf("\t\t                                   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                                                        \n");//33
    printf("\t\t                                                                                                                                \n");//34
    printf("\t\t               NNNNNNN    NNNNNNN   NNN     NNN  NNNNNNNNN   NNNNNNNNN   NNNNNNN    NNNNNNN                                      \n");//35
    printf("\t\t              NNNNNNNNN  NNNNNNNNN  NNNN   NNNN  NNN    NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                                     \n");//36
    printf("\t\t              NNN        NNN   NNN  NNNNN NNNNN  NNN    NNN  NNN        NNN   NNN  NNN   NNN                                     \n");//37
    printf("\t\t              NNN        NNN   NNN  NNN NNN NNN  NNNNNNNNN   NNNNNNN    NNN   NNN  NNN   NNN                                     \n");//38
    printf("\t\t              NNN        NNNNNNNNN  NNN  N  NNN  NNN         NNN        NNNNNNNNN  NNN   NNN                                     \n");//39
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");//30
    printf("\t\t                                   OOO                               OOO                                                        \n");//30,9
    printf("\t\t                                   OOO                               OOO                                                        \n");//32
    printf("\t\t                                   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                                                        \n");//33
    printf("\t\t                                                                                                                                \n");//34
    printf("\t\t               NNNNNNN    NNNNNNN   NNN     NNN  NNNNNNNNN   NNNNNNNNN   NNNNNNN    NNNNNNN                                      \n");//35
    printf("\t\t              NNNNNNNNN  NNNNNNNNN  NNNN   NNNN  NNN    NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                                     \n");//36
    printf("\t\t              NNN        NNN   NNN  NNNNN NNNNN  NNN    NNN  NNN        NNN   NNN  NNN   NNN                                     \n");//37
    printf("\t\t              NNN        NNN   NNN  NNN NNN NNN  NNNNNNNNN   NNNNNNN    NNN   NNN  NNN   NNN                                     \n");//38
    printf("\t\t              NNN        NNNNNNNNN  NNN  N  NNN  NNN         NNN        NNNNNNNNN  NNN   NNN                                     \n");//39
    printf("\t\t              NNNNNNNNN  NNN   NNN  NNN     NNN  NNN         NNNNNNNNN  NNN   NNN  NNNNNNNNN                                     \n");//40
    sleep(0,9);    system("cls");
    printf("\t==================================================================================================================================\n");//0,9
    printf("\t\t                                                     N                                                                          \n");//2
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");//3
    printf("\t\t                                                  N     N                                                                       \n");//4
    printf("\t\t                                ¤                N       N                                                                      \n");//5
    printf("\t\t       ¤                                        N         N                                                                     \n");//6
    printf("\t\t                                               N           N                                                                    \n");//7
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");//8
    printf("\t\t                              N                                             N                      ¤                            \n");//9
    printf("\t\t                                N N                                     N N                                                     \n");//0,90
    printf("\t\t                                    N N N                          N N N                                                        \n");//0,90,9
    printf("\t\t                                         N N                    N N                                                             \n");//0,92
    printf("\t\t                                            N                 N                                                                 \n");//0,93
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");//0,94
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");//0,95
    printf("\t\t                                          N      N  O O  N      N                                                               \n");//0,95
    printf("\t\t                                         N     N    O O    N     N                                                              \n");//0,96
    printf("\t\t                                        N    N      O O      N    N                                                             \n");//0,97
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");//0,98
    printf("\t\t                                        N         O     O         N                                                             \n");//0,99
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");//20
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");//20,9
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");//22
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");//23
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");//24
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");//25
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//26
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");//27
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//28
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");//29
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");//30
    printf("\t\t                                   OOO                               OOO                                                        \n");//30,9
    printf("\t\t                                   OOO                               OOO                                                        \n");//32
    printf("\t\t                                   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                                                        \n");//33
    printf("\t\t                                                                                                                                \n");//34
    printf("\t\t               NNNNNNN    NNNNNNN   NNN     NNN  NNNNNNNNN   NNNNNNNNN   NNNNNNN    NNNNNNN                                      \n");//35
    printf("\t\t              NNNNNNNNN  NNNNNNNNN  NNNN   NNNN  NNN    NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                                     \n");//36
    printf("\t\t              NNN        NNN   NNN  NNNNN NNNNN  NNN    NNN  NNN        NNN   NNN  NNN   NNN                                     \n");//37
    printf("\t\t              NNN        NNN   NNN  NNN NNN NNN  NNNNNNNNN   NNNNNNN    NNN   NNN  NNN   NNN                                     \n");//38
    printf("\t\t              NNN        NNNNNNNNN  NNN  N  NNN  NNN         NNN        NNNNNNNNN  NNN   NNN                                     \n");//39
    printf("\t\t              NNNNNNNNN  NNN   NNN  NNN     NNN  NNN         NNNNNNNNN  NNN   NNN  NNNNNNNNN                                     \n");//40
    printf("\t\t               NNNNNNN   NNN   NNN  NNN     NNN  NNN         NNNNNNNNN  NNN   NNN   NNNNNNN                                      \n");//40,9
    sleep(0,9);
    system("cls");
    printf("\t==================================================================================================================================\n");
    printf("\t\t                                                     N                                                                          \n");
    printf("\t\t                        ¤                          N   N                 ¤                                                      \n");
    printf("\t\t                                                  N     N                                                                       \n");
    printf("\t\t                                ¤                N       N                                                                      \n");
    printf("\t\t       ¤                                        N         N                                                                     \n");
    printf("\t\t                                               N           N                                                                    \n");
    printf("\t\t                            N N N N N N N N N N             N N N N N N N N N N                                                 \n");
    printf("\t\t                              N                                             N                      ¤                            \n");
    printf("\t\t                                N N                                     N N                                                     \n");
    printf("\t\t                                    N N N                          N N N                                                        \n");
    printf("\t\t                                         N N                    N N                                                             \n");
    printf("\t\t                                            N                 N                                                                 \n");
    printf("\t\t         ¤               ¤                  N      N N N      N                  ¤                                              \n");
    printf("\t\t                                           N      N O O N      N        ¤                                                       \n");
    printf("\t\t                                          N      N  O O  N      N                                                               \n");
    printf("\t\t                                         N     N    O O    N     N                                                              \n");
    printf("\t\t                                        N    N      O O      N    N                                                             \n");
    printf("\t\t                                       N   N       O   O       N   N          ¤                                                 \n");
    printf("\t\t                                        N         O     O         N                                                             \n");
    printf("\t\t                       ¤                        OO       OO                                     ¤                               \n");
    printf("\t\t                                             OOOOOOOOOOOOOOOOO                                                                  \n");
    printf("\t\t                                        OOOOO                 OOOOO                                                             \n");
    printf("\t\t                                     OOOO                         OOOO             ¤                                            \n");
    printf("\t\t                                   OOO             NNNN              OOO                                                        \n");
    printf("\t\t                 ¤                 OOO            N NNN              OOO                          ¤                             \n");
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");
    printf("\t\t                          ¤        OOO              NNN              OOO                                                        \n");
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");
    printf("\t\t                                   OOO              NNN              OOO                                                        \n");
    printf("\t\t                                   OOO            NNNNNNN            OOO                                                        \n");
    printf("\t\t                                   OOO                               OOO                                                        \n");
    printf("\t\t                                   OOO                               OOO                                                        \n");
    printf("\t\t                                   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                                                        \n");
    printf("\t\t                                                                                                                                \n");
    printf("\t\t               NNNNNNN    NNNNNNN   NNN     NNN  NNNNNNNNN   NNNNNNNNN   NNNNNNN    NNNNNNN                                      \n");
    printf("\t\t              NNNNNNNNN  NNNNNNNNN  NNNN   NNNN  NNN    NNN  NNNNNNNNN  NNNNNNNNN  NNNNNNNNN                                     \n");
    printf("\t\t              NNN        NNN   NNN  NNNNN NNNNN  NNN    NNN  NNN        NNN   NNN  NNN   NNN                                     \n");
    printf("\t\t              NNN        NNN   NNN  NNN NNN NNN  NNNNNNNNN   NNNNNNN    NNN   NNN  NNN   NNN                                     \n");
    printf("\t\t              NNN        NNNNNNNNN  NNN  N  NNN  NNN         NNN        NNNNNNNNN  NNN   NNN                                     \n");
    printf("\t\t              NNNNNNNNN  NNN   NNN  NNN     NNN  NNN         NNNNNNNNN  NNN   NNN  NNNNNNNNN                                     \n");
    printf("\t\t               NNNNNNN   NNN   NNN  NNN     NNN  NNN         NNNNNNNNN  NNN   NNN   NNNNNNN                                      \n");
    printf("\t==================================================================================================================================\n");
    getch();
}

void regras()
{
    printf("\t==================================================================================================================================\n");
    printf("\t||                                                          REGRAS                                                              ||\n");
    printf("\t|| -----------------------------------------------------------------------------------------------------------------------------||\n");
    printf("\t|| 1. DIGITE APENAS NÚMEROS NAS RESPOSTAS                                                                                       ||\n");
    printf("\t|| -----------------------------------------------------------------------------------------------------------------------------||\n");
    printf("\t|| 2. ESSE QUIZ POSSUI 4 FASES                                                                                                  ||\n");
    printf("\t|| -----------------------------------------------------------------------------------------------------------------------------||\n");
    printf("\t|| 3. CADA FASE TEM 5 PERGUNTAS, PARA PASSAR DE FASE ACERTE PELO MENOS 3                                                        ||\n");
    printf("\t|| -----------------------------------------------------------------------------------------------------------------------------||\n");
    printf("\t|| 4. EM CADA FASE TERÁ *UMA* OPORTUNIDADE DE GANHAR DOIS PONTOS A MAIS, SE PRECISAR...                                         ||\n");
    printf("\t|| -----------------------------------------------------------------------------------------------------------------------------||\n");
    printf("\t|| 5. PARA GANHAR O TÍTULO VOCÊ PRECISA MARCAR 20 GOLS                                                                          ||\n");
    printf("\t|| -----------------------------------------------------------------------------------------------------------------------------||\n");
    printf("\t|| 6. QUANDO PASSAR DE FASE APARECERÁ 'CLASSIFICADO'                                                                            ||\n");
    printf("\t|| -----------------------------------------------------------------------------------------------------------------------------||\n");
    printf("\t|| 7. SÓ APERTE ALGUMA TECLA QUANDO FOR RESPONDER OU QUANDO LHE FOR SOLICITADO                                                  ||\n");
    printf("\t|| -----------------------------------------------------------------------------------------------------------------------------||\n");
    printf("\t==================================================================================================================================\n");
    printf("\t||                               *RECEEEBA 1.0* (Desenvolvido por Felipe Lyra e João Assis)                                     ||\n");
    printf("\t==================================================================================================================================\n");
}





