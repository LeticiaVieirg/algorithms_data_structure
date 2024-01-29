#include <stdlib.h>
#include <stdio.h>


int main(void){
	FILE *arquivo=fopen("entrada.txt", "wt");

	if(arquivo==NULL){
		printf("erro");
		exit(1);
	}
	else{
		printf("created file");
	}

	if(!fclose(arquivo)){
		printf("closed file");
	}

return 0;
}
