#ifndef QUIZ_H_INCLUDED
#define QUIZ_H_INCLUDED

#include<iostream>
#include<string>

using namespace std;

//Arquivo .h para defini��o da Classe, atributos e m�todos

class Quiz{//Classe Principal

public:
    Quiz(int, string, string);
    ~Quiz();                   //destrutor
    int get_numero_q();        //Fun��es Get para mmanipula��o de variaveis
    string get_comando();
    string get_alt_correta();


private:
    int numero_q;              //Variaveis privadas e fun��es Set
    string comando, alt_correta;
    void set_numero_q(int);
    void set_comando(string);
    void set_alt_correta(string);





};
#endif // QUIZ_H_INCLUDED
