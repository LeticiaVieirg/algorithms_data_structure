//using fscanf
#include <stdlib.h>
#include <stdio.h>


int main(void){
	FILE *arquivo=fopen("entrada.txt", "r");
	char c[20];

	if(arquivo==NULL){ 
		printf("erro");
		exit(1);
	}
	else{
		printf("created file! \n ");
	}

	fscanf(arquivo, "%s", c); 
	printf("%s\n", c); 

	if(!fclose(arquivo)){
		printf("closed file! ");
	}

return 0;
}
