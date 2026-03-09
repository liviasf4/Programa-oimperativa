#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int x, y, c;
    int contagem_x = 0;
    int contagem_y = 0;
    int quadrante = 0;

    scanf("%d %d %d", &x, &y, &c);

    if ((x > 0) && (y > 0)){quadrante = 1;}
    else if ((x < 0) && (y > 0)){quadrante = 2;}
    else if ((x < 0) && (y < 0)){quadrante = 3;}
    else if ((x > 0) && (y < 0)){quadrante = 4;}

    if ((quadrante == 1) && (c == 2)){

        contagem_x = x + 1;
        contagem_y = y + 1;

        printf("%d passos em y e %d passos em x", contagem_y, contagem_x);           //QUADRANTE 1
        
    }else if ((quadrante == 1) && (c == 4)){

        contagem_x = x + 1;
        contagem_y = y + 1;

        printf("%d passos em x e %d passos em y", contagem_x, contagem_y);
    }else if((quadrante == 1 && c == 1)){puts("caminhada invalida");}

    if ((quadrante == 2) && (c == 1)){

        contagem_x = (x * -1) + 1;
        contagem_y = y + 1;

        printf("%d passos em y e %d passos em x", contagem_y, contagem_x);           //QUADRANTE 2
        
    }else if ((quadrante == 2) && (c == 3)){

        contagem_x = (x * -1) + 1;
        contagem_y = y + 1;

        printf("%d passos em x e %d passos em y", contagem_x, contagem_y);
    }else if((quadrante == 2 && c == 2)){puts("caminhada invalida");}

    if ((quadrante == 3) && (c == 2)){

        contagem_x = (x * -1) + 1;
        contagem_y = (y * -1) + 1;

        printf("%d passos em x e %d passos em y", contagem_x, contagem_y);           //QUADRANTE 3
        
    }else if ((quadrante == 3) && (c == 4)){

        contagem_x = (x * -1) + 1;
        contagem_y = (y * -1) + 1;

        printf("%d passos em y e %d passos em x", contagem_y, contagem_x);
    }else if((quadrante == 3 && c == 3)){puts("caminhada invalida");}

    if ((quadrante == 4) && (c == 1)){

        contagem_x = x + 1;
        contagem_y = (y * -1) + 1;

        printf("%d passos em x e %d passos em y", contagem_x, contagem_y);           //QUADRANTE 4
        
    }else if ((quadrante == 4) && (c == 3)){

        contagem_x = x + 1;
        contagem_y = (y * -1) + 1;

        printf("%d passos em y e %d passos em x", contagem_y, contagem_x);
    }else if((quadrante == 4 && c == 4)){puts("caminhada invalida");}

    return 0;

}
