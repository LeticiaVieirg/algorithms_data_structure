#include <stdio.h>
#include <stdlib.h>

//definindo a estrutura aluno
struct student {
	char name[20];
	int age;
	long int matricula; //o inteiro tem 6 bytes
	char email[50];
};

//alocação estatica
int main() {

	struct student a; // a é uma variavel da estrutura aluno
	printf("enter a name of student: \n");
	scanf(" %[^\n]", a.name);

	printf("enter a age: \n");
	scanf("%d", &a.age);

	printf("enter a matricula: \n");
	scanf("%d", &a.matricula);

	printf("enter a email: \n");
	scanf(" %[^\n]", a.email);


return 0;

}
