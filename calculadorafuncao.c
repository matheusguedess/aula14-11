/*Aula de C - calculadora utilizando funções
Aluno: Matheus Guedes RA: 1800586981
*/
#include <stdio.h>
#include <locale.h>

int soma(int n1, int n2);
int sub(int n1, int n2);
int mult(int n1, int n2);
int div(int n1, int n2);

int main(void)
{

    setlocale(LC_ALL, "");
    int op, op2, x, y;
    do{
        system("cls");
        printf("Calculadora por função\n\n");
        printf("[1] SOMA\n[2] SUBTRAÇÃO\n[3] MULTIPLICAÇÃO\n[4] DIVISÃO\n");
        scanf(" %d", &op2);
        switch(op2)
        {
        case 1:
            printf("Digite o primeiro valor:");
            scanf("%d", &x);
            printf("Digite o segundo valor:");
            scanf("%d", &y);
            printf("Resultado: %d\n",soma(x, y));
        break;
        case 2:
            printf("Digite o primeiro valor:");
            scanf("%d", &x);
            printf("Digite o segundo valor:");
            scanf("%d", &y);
            printf("Resultado: %d\n",sub(x, y));
        break;
        case 3:
            printf("Digite o primeiro valor:");
            scanf("%d", &x);
            printf("Digite o segundo valor:");
            scanf("%d", &y);
            printf("Resultado: %d\n",mult(x, y));
        break;
        case 4:
            printf("Digite o primeiro valor:");
            scanf("%d", &x);
            printf("Digite o segundo valor:");
            scanf("%d", &y);
            printf("Resultado: %d\n",div(x, y));
        break;
        default:
            main();
        break;
        }
        printf("[1] para voltar\n[2] para sair");
        scanf(" %d", &op);
    }while(op==1);

}

int soma(int n1, int n2)
{
    int result;
    result=n1+n2;
    return(result);
}

int sub(int n1, int n2)
{
    int result;
    result=n1-n2;
    return(result);
}

int mult(int n1, int n2)
{
    int result;
    result=n1*n2;
    return(result);
}

int div(int n1, int n2)
{
    int result;
    result=n1/n2;
    return(result);
}
