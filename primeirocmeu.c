#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char ch;
    printf("Digite uma tecla: ");
    scanf("%c", &ch);
    printf("Você pressionou a tecla %c", ch);
}
