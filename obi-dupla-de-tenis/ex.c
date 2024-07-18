#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int niveis[4] = {0};
    for(int i = 0; i < 4; i++){
        scanf("%d", &niveis[i]);
    }
    int dif = 99999;
    int duplas[4] = {0};
    duplas[0] = niveis[0]+niveis[1];
    duplas[1] = niveis[2]+niveis[3];
    duplas[2] = niveis[1]+niveis[2];
    duplas[3] = niveis[0]+niveis[3];
    for(int i = 0; i < 3; i++){
        if(abs(duplas[i] - duplas[i+1]) < dif)
            dif = abs(duplas[i]-duplas[i+1]);
    }
    printf("%d\n", dif);
    return 0;
}
