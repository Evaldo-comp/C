#include<stdio.h>

void main(){
	int t, i, num[4][5];

	for (t = 0; t<4;t++){
		for(i = 0; i < 5; i++){
			num[t][i]= (t*4) + i+1;
		}


	}


	for (t = 0; t < 5; t++){
		for(i = 0; i< 5; i++){
			printf("%d",num[t][i] );
		}
	}	printf("\n");


}