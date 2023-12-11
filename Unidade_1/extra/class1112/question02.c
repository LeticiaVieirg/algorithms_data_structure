#include <stdio.h>
#include <stdlib.h>

//definindo a estrutura aluno
struct student {
	char name[20];//20 bytes
	int age;//4 bytes
	long int matricula; //o inteiro tem 6 bytes
	char email[50];//50 bytes
};

//alocação dinamica -> variavel do tipo ponteiro
int main() {

	struct student *aluno=(struct aluno*)malloc(sizeof(struct aluno));	printf("enter a name of student: \n");
	
	if(student==NULL){
		exit(1);
	}

	printf("enter a name: \n");
	scanf(" %[^\n]", student->name);

	printf("enter a age: \n");
	scanf("%d", &student->age);

	printf("enter a matricula: \n");
	scanf("%d", &student->matricula);

	printf("enter a email: \n");
	scanf(" %[^\n]", student->email);

free(student);

return 0;

}
