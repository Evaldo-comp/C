#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<iostream>

using namespace std;

int main (){

//Cursor que irá percorrer cada letra do arquivo
	int c;

	//Arquivo a ser lido
	FILE *file;

	//Abre o arquivo
	file = fopen("Texto.txt", "r");

    //Verificar se o arquivo foi encontrado
    if(){
        while((c = get(file))  != EOF){

             printf("%c", c);
    }    
    	//Fecha o arquivo
    	fclose(file);


    }

   



}