#include <stdio.h>

int main(){

    long long N, A, B;

    scanf("%lld", &N);
    scanf("%lld %lld", &A, &B);

    long long ka = N/A;
    long long kb = N/B;

    long long somat = (N*(N+1))/2;
    long long somaA = A * ((ka *(ka+1))/2);
    long long somaB = B * ((kb *(kb+1))/2);

    long long kab = N / (A*B);
    long long somaAB = (A * B) * kab * (kab + 1) / 2;

    long long resultado = somat - somaA - somaB + somaAB;

    printf("%lld\n", resultado);

    if ((resultado%2) == 0){
        puts("Lá ele!!!");
    }else{
        puts("Opa xupenio AULAS...");
    }

    return 0;
}
