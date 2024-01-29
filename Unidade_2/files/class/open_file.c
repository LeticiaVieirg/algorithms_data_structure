#include <stdlib.h>
#include <stdio.h>


int main(void){
	FILE *fp;
	fp=fopen("entrada.txt", "wt");

	if(fp==NULL){ //verificar se 
		printf("erro");
		exit(1);
	}
	else{
		printf("created file!");
	}

return 0;

}
