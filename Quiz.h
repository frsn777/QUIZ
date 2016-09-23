#ifndef QUIZ_H_INCLUDED
#define QUIZ_H_INCLUDED

#include<iostream>
#include<string>

using namespace std;

//Arquivo .h para definição da Classe, atributos e métodos

class Quiz{//Classe Principal

public:
    Quiz(int, string, string);
    ~Quiz();                   //destrutor
    int get_numero_q();        //Funções Get para mmanipulação de variaveis
    string get_comando();
    string get_alt_correta();


private:
    int numero_q;              //Variaveis privadas e funções Set
    string comando, alt_correta;
    void set_numero_q(int);
    void set_comando(string);
    void set_alt_correta(string);





};
#endif // QUIZ_H_INCLUDED
