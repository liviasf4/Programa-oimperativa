#include <stdio.h>

int main (){

    char letra;
    char letraa = 'A';

    scanf(" %c", &letra);

    int pos = letra - 'A'; //pegamos a pos da letra
    int pos2 = letra - 'A';

    int pos_fora1 = letra - 'A';
    int pos_fora2 = letra - 'A';

    char conj_letras[60] = "A";
    char duplo[40] = "";
    char pontos = '.';

    int i = 1;

    //adicionar a quantidade de pontos na variavel principal
 
    while (letraa <= letra){

        letraa += 1; //vai para a prox letra

    for (; pos >= 0; pos --){

        if (pos != 0){

            printf("%c", pontos); //se a pos for igual a zero, não precisa printar pontos
            
        }
    }

        printf("%s%s", conj_letras, duplo);

    for (; pos2 >= 0; pos2 --){

        if (pos2 != 0){

            printf("%c", pontos); //repeti a lógica dos pontos
            
        }
    }
        
        conj_letras[i] = letraa;

        int tam = i;

        for(int k = 0; k < tam; k++){
            duplo[k] = conj_letras[tam - 1 - k];
        }

        duplo[tam] = '\0';

        i += 1;

        puts("");

        pos_fora1 -= 1;
        pos_fora2 -= 1;    //essa parte é para ir diminuindo os pontos(funcionando)
        pos = pos_fora1;
        pos2 = pos_fora2;
        
    }

}
