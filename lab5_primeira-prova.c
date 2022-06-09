#include <stdio.h>
#include <stdlib.h>

//Prova_resolvida_laboratorio-03


//ex06

int main()
{
    int x, a, b;


    do{
        do{
            printf("-----Calculadora-----\n");
            printf("\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Modulo\n6 - SAIR\n");
            printf("Escolha uma opcao para calcular: ");
            scanf("%d", &x);

        }while(x<1||x>6);

        if(x!=6)
        {
            scanf("%d, %d", &a, &b);
        }

        switch(x)
        {
            case 1:
                printf("Adicao eh %d", a+b);
                break;
            case 2:
                printf("Subtracao eh %d", a-b);
                break;
            case 3:
                printf("Multiplicacao eh %d", a*b);
                break;
            case 4:
                if(b==0){
                    printf("Erro");
                }
                else{
                    printf("Divisao eh %d", a/b);
                }
                break;
            case 5:
                if(b==0) {
                    printf("Erro");
                }
                else{
                    printf("Modulo eh %.4f", a%b);
                }
                break;
        }
    }while(x!=6);

    return 0;
}







//ex05
/*
int main(){

    int x, i, j;

    printf("Digite um valor de ramos: ");
    scanf("%d", &x);

    for(i=1; i<=x; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;

}
*/



//ex04
    //formula F=C*(9.0/5.0)+32
/*
int main(){

    float t;
    char g;

    printf("-----Conversor de temperaturas-----\n");
    printf("Digite a temperatura: ");
    scanf("%f", &t);
    fflush(stdin);
    printf("Digite a unidade de medida: (C-graus celcius, F-graus Fahrenheit): ");
    scanf("%c", &g);

    if((g==67||g==99)){
        printf("%.2f Celsius em Fahrenheit e igual a: %.2f", t, (t*(9.0/5.0)+32));
    }else{
        if(g=='f'||g=='F'){
            printf("%.2f Fahrenheit em Celsius e igual a: %.2f", t, (t-32.0)/(9.0/5.0));
        }else{
        printf("Unidade incorreta");
        }
    }

    return 0;
}
*/


//ex03
/*
int main(){

    float sal;

    printf("-------Aumento Salarial-------\n\n");
    printf("Digite o salario do funcionario: R$");
    scanf("%f", &sal);

    printf("\nO salario apos 25%% de aumento eh: R$%.2f\n\n", sal*1.25);

    return 0;
}
*/
