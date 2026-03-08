#include <stdio.h>
#include <stdlib.h>

int main(){

    int p1, p2, p3, p11, p22, p33;

    scanf("%d/%d/%d %d/%d/%d", &p1, &p2,&p3, &p11, &p22, &p33);
    int resultado = ((p1 + p2 + p3 + p11 + p22 + p33)*7)%101;
    
    //AMOR
    printf("Amor: %d%%", resultado);
    
    if (resultado < 20){
        puts(" Pessimo dia para se apaixonar.");
    }else if (resultado >= 20 && resultado <= 40){
        puts(" Melhor manter o coracao <3 longe de perigo.");
    }else if (resultado >= 41 && resultado <= 69){
        puts(" Se o papo e as ideias baterem, esta liberado pensar em algo.");
    }else if (resultado >= 70 && resultado <= 80){
        puts(" Saia com o coracao aberto, mas lembre, nem toda troca de olhar em onibus e sinal de romance.");
    }else if (resultado > 80){
        puts(" Um dia deslumbrantemente lindo para amar. Ps: Cuidado com a intensidade.");
    } 
    //SORTE
    
    int dif = p3 - p33;
    if (p3 < p33){
        dif *= -1;
    }
    
    int resultado2 = (((p1+p11)+(p2+p22))*9 + dif) % 101;

    printf("Sorte: %d%%", resultado2);
    
    if (resultado2 < 30){
        printf(" Nem jogue moedas pra cima hoje.");
    }else if (resultado2 >= 30 && resultado2 <= 50){
        printf(" Melhor nao arriscar.");
    }else if (resultado2 >= 51 && resultado2 <= 79){
        printf(" Por sua conta em risco.");
    }else if (resultado2 >= 80 && resultado2 <= 90){
        printf(" Hoje vale a pena arriscar.");
    }else if (resultado2 >90){
        printf(" Nao tenha medo de virar cartas hoje.");
    }
    
    puts(" Sem tigrinho nem jogos de azar, por favor!");
    
        
    //TRABALHO
    
    int resultado3 = ((p3 + p33) - ((p1 + p11 + p2 + p22)*8)) % 101;
    
    printf("Trabalho: %d%%", resultado3);
    
    if (resultado3 < 40){
        puts(" Hoje nao sera um dia tao proveitoso, keep calm e faca o basico.");
    }else if (resultado3 >= 40 && resultado3<= 50){
        puts(" Hoje nao sera um dia tao proveitoso, keep calm e faca o basico.");
    }else if (resultado3 >= 51 && resultado3<= 69){
        puts(" Um dia proveitoso com certeza, leve sua simpatia consigo.");
    }else if (resultado3 >= 70 && resultado3 <= 84){
        puts(" Boas vibracoes hoje, chances podem estar ao seu redor.");
    }else if (resultado3 > 85){
        puts(" Use do maximo de networking possÃ­vel hoje, dia bom para negocios.");
    }
        
    //COR
    
    int resultado4 = ((p1*p1) + (p2*p2) + (p3*p3) + (p11*p11) +(p22*p22) + (p33 * p33))%11;
    
    switch(resultado4){

        case 0:
        puts("Cor: Cinza.");
        break;
        case 1:
        puts("Cor: Vermelho.");
        break;
        case 2:
        puts("Cor: Laranja.");
        break;
        case 3:
        puts("Cor: Amarelo.");
        break;
        case 4:
        puts("Cor: Verde.");
        break;
        case 5:
        puts("Cor: Azul.");
        break;
        case 6:
        puts("Cor: Roxo.");
        break;
        case 7:
        puts("Cor: Marrom.");
        break;
        case 8:
        puts("Cor: Rosa.");
        break;
        case 9:
        puts("Cor: Preto.");
        break;
        case 10:
        puts("Cor: Branco.");
        break;
        
        default:
        break;
        
    }
    return 0;
}