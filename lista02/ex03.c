#include <stdio.h>
#include <stdlib.h>

int main(){

    int X, N;
    scanf("%d %d", &X, &N);

    int melhor_canal = 0;
    int melhor_minuto = 0;
    int melhor_termo = 0;
    int melhor_dist = 1000000000;

    for(int canal = 1; canal <= N; canal++){

        int a, b;
        scanf("%d %d", &a, &b);

        int f1 = a;
        int f2 = b;

        int minuto = 1;

        int melhor_local = f1;
        int minuto_local = 1;
        int dist_local = abs(X - f1);

        minuto = 2;

        int dist = abs(X - f2);
        if(dist < dist_local || (dist == dist_local && f2 < melhor_local)){
            dist_local = dist;
            melhor_local = f2;
            minuto_local = 2;
        }

        while(1){

            int f3 = f1 + f2;
            minuto++;

            dist = abs(X - f3);

            if(dist < dist_local || (dist == dist_local && f3 < melhor_local)){
                dist_local = dist;
                melhor_local = f3;
                minuto_local = minuto;
            }

            if(f3 > X) break;

            f1 = f2;
            f2 = f3;
        }

        if(dist_local < melhor_dist || 
           (dist_local == melhor_dist && canal > melhor_canal)){

            melhor_dist = dist_local;
            melhor_canal = canal;
            melhor_minuto = minuto_local;
            melhor_termo = melhor_local;
        }
    }

    int soma = 0;
    int temp = melhor_termo;

    while(temp > 0){
        soma += temp % 10;
        temp /= 10;
    }

    if(soma > 10){
        printf("Xupenio, para ir ao lulupalooza vc deve entrar no canal %d e sera chamado mais ou menos no minuto %d e com o VIP garantido!!!\n", melhor_canal, melhor_minuto);
    }else{
        printf("Xupenio, para ir ao lulupalooza vc deve entrar no canal %d e sera chamado mais ou menos no minuto %d, mas o ingresso VIP não vai rolar :(\n", melhor_canal, melhor_minuto);
    }

}
