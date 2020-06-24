// 
#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

using namespace std;



void imprimeVetor(int vetor[]){

int i;
cout << "\n";

for(i = 0; i< TAM; i++){
	cout << " |" << vetor[i] << "| ";

	}
}
void merge(int vetor[TAM], int indEsque, int meio, int Inddir){

	int i, j, k;
	int n1= meio - indEsque + 1;
	int n2 = Inddir - meio;

	int vetorEsquerdo[n1], vetorDireito[n2];


	for(i=0; i< n1; i++){

		vetorEsquerdo[i] = vetor[indEsque +1];
	}

	for(j=0; j< n2; j++){

		vetorDireito[j] = vetor[meio + 1 + j];

	}

}



while(i < n1 && j < n2){
	int i = 0;
	int j = 0;
	int k = indEsque;
	if(vetorEsquerdo[i] <= vetorDireito[j]){
		vetor[k] = vetorEsquerdo[i];
		i++;
	}else{
		vetor[k] = vetorDireito[j];
		j++;
	}
	k++;
}
while(i < n1){
	vetor[k] = vetorEsquerdo[i];
	i++;
	k++;

}

while(j < n2){
	vetor[k] = vetorDireito[j];
	j++;
	k++;
}

//função principal
void  merge_sort(int vetor[TAM], int indEsque, int  Inddir){

	//encontra o meio

	if(indEsque< Inddir){
		int maio = indEsque + (Inddir-indEsque)/2;
		//Da metade para trás

		merge_sort(vetor, indEsque, meio);
		//Da metade para frente

		merge_sort(vetor, meio+1, Inddir)

		merge(vetor, indEsque, meio, Inddir)
	}

}
	







int main(){

	int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

	
	merge_sort(vetor, 0, TAM-1);

	imprimeVetor(vetor);




	return 0;

}




