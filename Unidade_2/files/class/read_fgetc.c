//using fgetc
#include <stdlib.h>
#include <stdio.h>


int main(void){
	FILE *arquivo=fopen("entrada.txt", "rt");
	int c;

	if(arquivo==NULL){ //verificar se 
		printf("erro");
		exit(1);
	}
	else{
		printf("created file!");
	}

	c=fgetc(arquivo); //read a caracter of file
	printf("%c\n", c); //display a caracter 

	if(!fclose(arquivo)){
		printf("closed file");
	}// closed the created file

return 0;
}

//display the first letter
