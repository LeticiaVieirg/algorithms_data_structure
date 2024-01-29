//using fgets
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

	fgets(c, 20, arquivo); 
	printf("%s\n", c);

	if(!fclose(arquivo)){
		printf("closed file");
	}

return 0;

}
//displays the full name
