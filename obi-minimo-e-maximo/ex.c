#include <stdio.h>

int main(void){
    int S, A, B;
    scanf("%d", &S);
    scanf("%d", &A);
    scanf("%d", &B);
    int min = 10001; int max = -10001; int soma; int aux = 0;
    for(int i = A; i <= B; i++){
        soma = 0;
        int cobaia = i;
        while(cobaia != 0){
            if(cobaia % 10 == 0 && 10 > cobaia/10){
                soma += cobaia / 10;
                break;
            }
            else
                soma += cobaia % 10;
            cobaia = cobaia / 10;
        }
        if(soma == S){
            if(i > max)
                max = i;
            if(i < min)
                min = i;
        }
    }
    printf("%d\n%d\n", min, max);
}