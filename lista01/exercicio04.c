#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int x, y, c;
    int contagem_x = 0;
    int contagem_y = 0;
    int K = 1;

    scanf("%d %d %d", &x, &y, &c);

    if ((c == 1) || (c == 3)){

        if (c == 1){
            if ((x > 0) && (y > 0)){
                puts("caminhada invalida\n");
            }else{
                K = 0;
            }
        }else if (c ==3){
            if ((x < 0) && (y < 0)){
                puts("caminhada invalida\n");
            }else{
                K = 0;
            }
        }if (K == 0){
            if((x < 0) && (y > 0)){
                //Será o quadrante 2

                x *= -1;

                contagem_x = x + 1;
                contagem_y = y + 1;

                printf("%d passos em y e %d passos em x", contagem_y, contagem_x);

            }else if ((x > 0) && (y < 0)){
                // será o quadrante 4

                y *= -1;

                contagem_x = x + 1;
                contagem_y = y + 1;

                printf("%d passos em y e %d passos em x", contagem_y, contagem_x);

            }
        }
    }


    //SE C for 2 ou 4
    if ((c == 2) || (c == 4)){

        if (c == 2){
            if ((x < 0) && (y > 0)){
                puts("caminhada invalida\n");
            }else{
                K = 0;
            }
        }else if (c ==4){
            if ((x > 0) && (y < 0)){
                puts("caminhada invalida\n");
            }else{
                K = 0;
            }
        }if (K == 0){
            if((x > 0) && (y > 0)){
                //Será o quadrante 1

                contagem_x = x + 1;
                contagem_y = y + 1;

                printf("%d passos em y e %d passos em x", contagem_y, contagem_x);

            }else if ((x < 0) && (y < 0)){
                // será o quadrante 3

                x *= -1;
                y *= -1;

                contagem_x = x + 1;
                contagem_y = y + 1;

                printf("%d passos em y e %d passos em x", contagem_y, contagem_x);

            }
        }
    }

}
