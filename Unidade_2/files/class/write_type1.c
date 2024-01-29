//using fputc
#include <stdlib.h>
#include <stdio.h>


int main(void){
	FILE *arquivo=fopen("escrita.txt", "w");
	char c[20];

	if(arquivo==NULL){ 
		printf("erro");
		exit(1);
	}
	else{
		printf("created file! \n ");
	}

  fputc('A', arquivo);
	printf("%s\n", c); 

	if(!fclose(arquivo)){
		printf("closed file! ");
	}

return 0;

}
//aparece a letra num arquivo chamado escrita.txt
