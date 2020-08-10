#include<stdio.h>
#include<string.h>
#include<fstream>

using namespace std;

int main (){


    //Cria um objeto de arquivo
    ofstream arquivoSaida;
    arquivoSaida.open("Texto.txt", std::ios_base::app);


    //Escreve no arquivo
    arquivoSaida << "Teste de Texto";

    //Fecha o arquivo
    arquivoSaida.close();




}