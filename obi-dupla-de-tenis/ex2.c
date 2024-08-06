#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[4];
    int menor = 100000;
    for(int i = 0; i < 4; i++){
        scanf("%d", &array[i]);
    }
    int ab, cd; 
    int ac, bd; 
    int ad, bc;
    ab = array[0] + array[1];
    cd = array[2] + array[3];
    if(abs(ab-cd) < menor){
        menor = abs(ab-cd);
    }
    ac = array[0] + array[2];
    bd = array[1] + array[3];
    if(abs(ac-bd) < menor){
        menor = abs(ac-bd);
    }
    ad = array[0] + array[3];
    bc = array[1] + array[2];
    if(abs(ad-bc) < menor){
        menor = abs(ad-bc);
    }
    printf("%d\n", menor);
}