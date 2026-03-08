//Vou explicar o código, pois o chat gpt me ajudou nessa questão

#include <stdio.h>

int main(){

    int N, A, B;

    scanf("%d", &N); //Recebe o N(o valor limite da soma do intervalo[1,N])
    scanf("%d %d", &A, &B); // recebe as letras, que serão usadas para excluir seus múltiplos na contagem

    int ka = N/A; //calcula a quantidade de múltiplos existente
    int kb = N/B; //calcula a quantidade de múltiplos existente

    int somat = (N*(N+1))/2; //com essa fórmula temos o resultado da soma de todos os números existentes no intervalo

    int somaA = A * ((ka *(ka+1))/2); //soma dos múltiplos de A
    int somaB = B * ((kb *(kb+1))/2); //soma dos múltiplos de B

    int kab = N / (A*B);  //multiplos de A e B
    int somaAB = (A * B) * kab * (kab + 1) / 2;

    int resultado = somat - somaA - somaB + somaAB; //cálculo final

    printf("%d\n", resultado);

    if ((resultado%2) == 0){
        puts("Lá ele!!!");
    }else{
        puts("Opa xupenio AULAS...");
    }

    return 0;
}
