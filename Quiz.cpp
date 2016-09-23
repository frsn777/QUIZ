#include<iostream>
#include<string>
#include "Quiz.h"

//Arquivo .cpp para implementação dos métodos descritos no arquivo .h

using namespace std;

Quiz::Quiz(int new_num, string new_com, string new_alt_cor){ //Definição do Escopo e Método construtor padrão

    set_numero_q(new_num);
    set_comando(new_com);
    set_alt_correta(new_alt_cor);

}
Quiz::~Quiz(){              //Método destrutor

}
//Implementação de todas as funções Get e Set

void Quiz::set_numero_q(int new_num)
{
    numero_q = new_num;
}

void Quiz::set_comando(string new_com)
{
    comando = new_com;
}

void Quiz::set_alt_correta(string new_alt_cor)
{
    alt_correta = new_alt_cor;
}


int Quiz::get_numero_q()
{
    return numero_q;
}

string Quiz::get_comando()
{
    return comando;
}

string Quiz::get_alt_correta()
{
    return alt_correta;
}
