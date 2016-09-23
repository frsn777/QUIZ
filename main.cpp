#include <iostream>
#include<string>
#include "Quiz.h"
#include <stdlib.h>
#include <locale.h>


using namespace std;

//Função Principal

int main(){

    setlocale(LC_ALL, "Portuguese");                  //Possibilita, juntamente com a biblioteca locale.h a inserção de acentos gráficos em textos
    const int arrayTam = 5;                           //Variavel constante utilizada para definir o numero de elementos no array
    int a_cor = 0, a_err = 0;
    int op;
    string nome;
    int repete;



    do{                    //Inicio do loop

        cout<<"****BEM VINDO AO QUIZ BOLADA1****"<<endl<<endl;
        cout<<"Digite seu nome:  "<<endl;                               //Apresentação do Programa
        cin>>nome;

        system("cls");              //"limpa a tela"


        cout<<"*******MENU*******"<<endl<<endl;                     //Menu Principal do game
        cout<<nome<<", para iniciar o game, escolha a disciplina desejada ou 3 para sair:  "<<endl<<endl;
        cout<<"1 - Matemática"<<endl;
        cout<<"2 - Informática Básica"<<endl;
        cout<<"3 - Sair"<<endl;
        cin>>op;

        system("cls");

        switch(op){             //Inicio da estrutura de seleção

        case 1:
        {
                            //Objetos do tipo Quiz
            Quiz questao1(1, "Como chamamos este tipo de função?: f(x)= x-3\n\na)  afim\nb)  simples\nc)  quadrada\nd)  logaritmica", "a");
            Quiz questao2(2, "Qual o resultado da equação f(x)= x+5\n\na)  5\nb)  -5\nc)  1/5 \nd)  -1/5 \n", "b");
            Quiz questao3(3, "A função f(x) = x^2+2x+2 gera que tipo de figura no gráfico?\n\na)  reta\nb)  parabolóide \nc)  parábola \nd)  parábola com concavidade positiva", "d");
            Quiz questao4(4, "Quantos graus existem entre duas retas ortogonais?\n\na)  30\nb)  45\nc)  90\nd)  60", "c");
            Quiz questao5(5, "Tenho um Eevee de 600 de cp. Seu multiplicador de evolução para Vaporeon é de 1,5. Qual o seu cp após a evolução?\n\na)  900\nb)  1500\nc)  1200\nd)  1600", "b");

                Quiz perguntas[arrayTam] = {questao1, questao2, questao3, questao4, questao5};       //Populando o array

            int i;
            for (i=0; i<arrayTam; i++) {
                cout << perguntas[i].get_comando() << endl;             //Estrutura que exibe as o comando, alternativas e recebe a a resposta.
                                                                        //Após o usuário responder a pergunta, é incrementado 1 na posição do elemento(objeto do tipo Quiz)
                string resposta;                                        // É exibida a Pergunta dentro do próximo elemento do array
                cin >> resposta;

            if (perguntas[i].get_alt_correta().compare(resposta) == 0){            //compare() - função que compara string
                cout << "Certo" << endl;                                           // exibe se as respostas estão certas
                a_cor++;                                                            // conta e armazena as respostas certas

            }else{

                cout << "Errrrrroooouuuuuu!!" << endl;                             // exibe se as respostas estão erradas
                a_err++;                                                           // conta e armazena as respostas erradas

            }

                system("pause");
                system("cls");

            }
                cout<<"Acertos:  "<< a_cor<<endl<<endl;                             //exibe a Quantidade de acertos, erros e pontuação
                cout<<"Erros:  "<< a_err<<endl<<endl;
                cout<<"Pontuação:  "<<a_cor*2<<endl<<endl;
                system("pause");
                system("cls");

                cout<<"Para jogar novamente, digite 1."<<endl<<endl;                //menu para reiniciar o Game
                cout<<"Para sair, digite qualquer tecla."<<endl;
                cin>>repete;
                if(repete==1){                                                      //estrutura que compara a resposta do usuario, que, caso seja positiva, retorna o Jogo ao inicio,
                    system("cls");                                                  //senão, finaliza o programa
                    return main();
                }else{
                return 0;
                }
        }

        case 2:

        {
            Quiz questao1(1, "Todos são componentes de entrada, exceto:\n\na)  Teclado\nb)  Mouse\nc)  Monitor\nd)  Mesa DIgitalizadora", "c");
            Quiz questao2(2, "Todos são dispositivos de saída, exceto:\n\na)  Monitor\nb)  Auto-Falantes\nc)  Impressora\nd)  Teclado\n", "d");
            Quiz questao3(3, "Qual a Tecla de atalho para o menu Executar?\n\na)  Winkey+r\nb)  ctrl+z \nc)  ctrl+e \nd)  esc", "a");
            Quiz questao4(4, "Todas são linguagens de programação, exceto:\n\na)  C++\nb)  C\nc)  Java\nd)  HTML", "d");
            Quiz questao5(5, "Qual a evolução do Slowpoke?\n\na)  Slowbrother\nb)  Slowboy\nc)  Slowbro\nd)  Fastpoke", "c");

                Quiz perguntas[arrayTam] = {questao1, questao2, questao3, questao4, questao5};

            int i;
            for (i=0; i<arrayTam; i++) {
                cout << perguntas[i].get_comando() << endl;

                string resposta;
                cin >> resposta;

            if (perguntas[i].get_alt_correta().compare(resposta) == 0){
                cout << "Certo" << endl;
                a_cor++;

            }else{

                cout << "Errrrrroooouuuuuu!!" << endl;
                a_err++;

            }

                system("pause");
                system("cls");

            }
                cout<<"Acertos:  "<< a_cor<<endl<<endl;
                cout<<"Erros:  "<< a_err<<endl<<endl;
                cout<<"Pontuação:  "<<a_cor*2<<endl<<endl;

                }

                system("pause");
                system("cls");

                cout<<"Para jogar novamente, digite 1."<<endl<<endl;
                cout<<"Para sair, digite qualquer tecla."<<endl;
                cin>>repete;
                if(repete==1){
                    system("cls");
                    return main();
                }else{
                return 0;

                }


        case 3:                         //define que o usuario quer sair do programa
            {
                return 0;
            }

        default:                           //mostra uma mensagem de erro e reinicia o programa caso o usuario escolha uma opção inválida
        {
            cout<<"Opção invalida! Refaça sua inscrição."<<endl;
            system("pause");
            system("cls");
            break;
        }


        }

        }while(op);         //fim do loop




}        //Fim main
