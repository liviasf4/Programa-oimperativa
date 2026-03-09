#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
   int valor = 0;
   int porcentagem1 = 0;
   int porcentagem2 = 0;
   int porcentagem3 = 0;

   float valor_final1 = 0;
   float valor_final2 = 0;
   float valor_final3 = 0;

   int valorR = 3; //VALOR QUE REBEKA POSSUI

   float sobra = 0; 

   char letra1, letra2, letra3;
   int idade1, idade2, idade3;

   int parcelas = 0;

   int A, B , C;
   A = B = C = 0;
   
   scanf("%d", &valor);
   scanf("%d", &porcentagem1);
   scanf("%d", &porcentagem2);
   scanf("%d", &porcentagem3);

    valor_final1 = valor * (porcentagem1 / 100.0);
    valor_final2 = valor * (porcentagem2 / 100.0);
    valor_final3 = valor * (porcentagem3 / 100.0);

    float soma_valorf = valor_final1 + valor_final2 + valor_final3;

    sobra = valor - (valor_final1 + valor_final2 + valor_final3);
        

    //SE A DIVISÃO FOR INTEIRA

    if (((valor_final1 == (int)valor_final1) && (valor_final2 == (int)valor_final2) && (valor_final3 == (int)valor_final3 && (soma_valorf <= valor)))){

        valorR += sobra;

        printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", (int)valor_final1, (int)valor_final2, (int)valor_final3);

    }else{ //REBEKA ADICIONA VALOR

        valorR = 2;
        sobra = 0;
        valor_final1 = valor_final2 = valor_final3  = soma_valorf= 0;

        valor += 1;

        valor_final1 = valor * (porcentagem1 / 100.0);
        valor_final2 = valor * (porcentagem2 / 100.0);
        valor_final3 = valor * (porcentagem3 / 100.0);

        soma_valorf = valor_final1 + valor_final2 + valor_final3;

        sobra = valor - (valor_final1 + valor_final2 + valor_final3);

        if ((valor_final1 == (int)valor_final1) && (valor_final2 == (int)valor_final2) && (valor_final3 == (int)valor_final3) && (sobra >= 2) && (soma_valorf <= valor)){
            printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", (int)valor_final1, (int)valor_final2, (int)valor_final3);
            valorR += sobra;

        }else{ //2 REAIS

            valor +=1;

            valor_final1 = valor_final2 = valor_final3 = 0;
            sobra = 0;
            valorR = 1;
            soma_valorf = 0;

            valor_final1 = valor * (porcentagem1 / 100.0);
            valor_final2 = valor * (porcentagem2 / 100.0);
            valor_final3 = valor * (porcentagem3 / 100.0);

            sobra = valor - (valor_final1 + valor_final2 + valor_final3);

            soma_valorf = valor_final1 + valor_final2 + valor_final3;

            if ((valor_final1 == (int)valor_final1) && (valor_final2 == (int)valor_final2) && (valor_final3 == (int)valor_final3) && (sobra >= 3) && (soma_valorf <= valor)){
            printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", (int)valor_final1, (int)valor_final2, (int)valor_final3);
            valorR += sobra;

            //RECEBIMENTO DAS LETRAS
            scanf(" %c %c %c", &letra1, &letra2, &letra3);

            int soma = (letra1 - 'a' + 1) + (letra2 - 'a' + 1) + (letra3 - 'a' + 1);

            printf("%d\n", soma);


            }else{
                valor +=1;
                valor_final1 = valor_final2 = valor_final3 = 0;
                sobra = 0;
                valorR = 0;
                soma_valorf = 0;

                valor_final1 = valor * (porcentagem1 / 100.0);
                valor_final2 = valor * (porcentagem2 / 100.0);
                valor_final3 = valor * (porcentagem3 / 100.0);

                sobra = valor - (valor_final1 + valor_final2 + valor_final3);

                soma_valorf = valor_final1 + valor_final2 + valor_final3;

                if ((valor_final1 == (int)valor_final1) && (valor_final2 == (int)valor_final2) && (valor_final3 == (int)valor_final3) && (sobra >= 4) && (soma_valorf <= valor)){
                printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", (int)valor_final1, (int)valor_final2, (int)valor_final3);
                valorR += sobra;
                //RECEBIMENTO DAS IDADES

                    scanf("%d %d %d", &idade1, &idade2, &idade3);

                if (idade1%3 == 0){
                    A = idade1/3;
                }if (idade2%3 == 0){
                    B = idade2/3;
                }if (idade3%3 == 0){
                    C = idade3/3;
                }

                int Soma_idades = A + B + C;

                printf("%d\n", Soma_idades);

                }else{
                    printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
                }
            }
            
    }
}


    if (valorR < 7){
    printf("E parece que Rebeka vai ter que voltar andando...\n");

    }else if (valorR >= 7){
    printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
    }


    return 0;
}
