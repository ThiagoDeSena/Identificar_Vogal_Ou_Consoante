#include <stdio.h>
#include <stdlib.h>
// 1. Ler uma letra e identificar se é vogal ou não.
int main(){
	char i;
	
	printf("1. Ler uma letra e identificar se e vogal ou nao.\n");
	printf("\nDigite uma letra: ");
	scanf("%c",&i);
	
	switch (i){
		case 'a':
			printf("A letra digitada e Vogal\n");
			break;
		case 'e':
			printf("A letra digitada e Vogal\n");
			break;
		case 'i':
			printf("A letra digitada e Vogal\n");
			break;
		case 'o':
			printf("A letra digitada e Vogal\n");
			break;
		case 'u':
			printf("A letra digitada e Vogal\n");
			break;
		case 'A':
			printf("A letra digitada e Vogal\n");
			break;
		case 'E':
			printf("A letra digitada e Vogal\n");
			break;
		case 'I':
			printf("A letra digitada e Vogal\n");
			break;
		case 'O':
			printf("A letra digitada e Vogal\n");
			break;
		case 'U':
			printf("A letra digitada e Vogal\n");
			break;
		default:
			printf("A letra digitada e consoante\n");
			break;
	}
	system("pause");
	return 0;
}
