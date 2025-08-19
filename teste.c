#include <stdio.h>]
#include <locale.h>
//exercicio 1
void main(){
    /*setlocale(LC_ALL, "Portuguese");
    int a, b, c, d;
    float media;
    printf("Digite 4 numeros: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    media=(a+b+c+d)/4;          //.2 para limitar as casas decimais
    printf("A media dos 4 numeros e: %.2f", media);*/

    /*float base, altura, area;
    printf("Informe a base do triângulo");
    scanf("%f", &base);
    printf("Informe a altura do triângulo");
    scanf("%f", &altura);

    area= (base*altura)/2;
    printf("A área do triângulo é: %f", area);*/

    /*float mercadoria, desconto_porc, valor_final, promocao;
    printf("Qual o valor da mercadoria? ");
    scanf("%f", &mercadoria);
    printf("Qual o valor do desconto (%%)? ");
    scanf("%f", &desconto_porc);
    promocao= mercadoria*desconto_porc/100;
    valor_final=mercadoria-promocao;
    printf("o desconto é de: %f", promocao);
    printf("O valor total do seu produto é: %.2f", valor_final);*/

    /*float a, b, c, formula;
    printf("Informe um valor para A: ");
    scanf("%f", &a);
    printf("Informe um valor para B: ");
    scanf("%f", &b);
    printf("Informe um valor para C: ");
    scanf("%f", &c);
    formula=2*a*b+3*a*c-4*b*c;
    printf("O valor de X é: %.2f", formula);*/

    /*float a,b, aux;
    printf("Informe o valor de A: ");
    scanf("%f", &a);
    printf("Informe o valor de B: ");
    scanf("%f", &b);
    aux=a;
    a=b;
    b=aux;
    //usa-se o auxiliar para que o aux pegue o valor de a
    //não perdendo o valor de a
    printf("a = %.2f e b= %.2f", a, b);*/

    /*float lado, perimetro, area;
    printf("Informe o valor do lado do quadrado: ");
    scanf("%f", &lado);
    area=lado*lado;
    perimetro=lado*4;
    printf("O valor do perímetro desse quadrado é: %.2f", area);
    printf("O valor da área é: %.2f", perimetro);*/

    char nome[100];
    float nota1, nota2, media;

    printf("informe o nome do aluno: ");
    gets(nome);
    printf("informe a nota 1 do aluno: ");
    scanf("%f", &nota1);
    printf("informe a nota 2 aluno: ");
    scanf("%f", &nota2);

    //não dá pra usar o scanf para pegar frases com espaços
    //scanf("%s", nome);
    //por esse motivo usamos o

    //por esse motivo tava dando aquele erro de simplesmente excluir os outros prints e scanfs
    media= (nota1 + nota2)/2;
    //não dá pra usar o scanf para pegar frases com espaços
    printf("O aluno %s possui a média %.2f", nome, media);



}
