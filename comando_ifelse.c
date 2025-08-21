#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
//exercicio 1
    /*float n1, n2, n3, n4, n5, maior, menor, media, soma;
    printf("Informe 5 números: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    scanf("%f", &n5);

    soma = n1+n2+n3+n4+n5;
    media = soma/5;
    maior= n1;
    menor=n1;

    if (n2>maior){maior=n2;}
    if (n3>maior){maior=n3;}
    if (n4>maior){maior=n4;}
    if (n5>maior){maior=n5;}

    if (n2<menor ){menor =n2;}
    if (n3<menor ){menor =n3;}
    if (n4<menor ){menor =n4;}
    if (n5<menor ){menor =n5;}
    printf("O maior número é: %.1f e o menor número é: %.1f", maior, menor);
    printf("\nA soma dos número é: %.1f e a média dos números é: %.2f", soma, media);*/
//\t deixa tudo alinhadinho
//\a gera um som de bip

//exercicio 2
    /*float n1, n2;
    printf("Digite o números 1: \n");
    scanf("%f", &n1);
    printf("Digite o números 2: \n");
    scanf("%f", &n2);

    if (n2!=0){
        float div = n1/n2;
        printf("\nA divisão é %.2f", div);
    }else {
        printf("Não foi possivel realizar a divisão. ");
        }*/

//exercicio 3
    /*int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
//para referenciar o int pode ser o %d ou o %i
    if(num%2 == 0){
        printf("O numero é par");
    }else{
        printf("Numero é impar");
    }*/


//exercicio 4
    /*float p1, p2, media, nota_necs;
    printf("Digite a nota da p1: ");
    scanf("%f", &p1);
    printf("Digite a nota da p2: ");
    scanf("%f", &p2);

    media = (p1+p2)/2;
    nota_nesc=10 - media;
    printf("A sua media %.2f", media);

    if(media >=7){
        printf("\nVocê passou");
    }else if(4<=media){
        printf("\nFicou de exame");
        printf("\nNota necessaria é: %f", nota_necs);
    }else{
        printf("Reprovado");
    }*/


//exercicio 5
    float salario, aliquota, ir;
    printf("Digite sue salario: ");
    scanf("%f", &salario);

    if(salario<=    2259.21){
        aliquota=0;
        printf("Sem IR a ser pago");
    }else if(salario <=2826.65){
        aliquota=7.5/100.0;
        ir = salario * aliquota;
        printf("\nO valor a ser pago é: %f", ir);
    }else if(salario <=3751.05){
        aliquota=15.0/100.0;
        ir = salario * aliquota;
        printf("\nO valor a ser pago é: %f", ir);
    }else if(salario<=4664.68){
        aliquota=22.5/100.0;
        ir = salario * aliquota;
        printf("\nO valor a ser pago é: %f", ir);
    }else{
        aliquota=27.5/100.0;
        ir = salario * aliquota;
        printf("\nO valor a ser pago é: %f", ir);
    }
}
