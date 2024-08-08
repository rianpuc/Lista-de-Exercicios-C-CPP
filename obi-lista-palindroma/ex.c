#include <stdio.h>

int minContracts(int *array, int length){
    int contractions = 0;
    int left = 0;
    int right = length-1;
    while (left < right){
        if(array[left] == array[right]){
            left++;
            right--;
        } else if (array[left] > array[right]){
            array[right-1] += array[right];
            right--;
            contractions++;
        } else {
            array[left+1] += array[left];
            left++;
            contractions++;
        }
    }
    return contractions;
}

int main(void){
    int n; int contract = 0; int length;
    scanf("%d", &n);
    int array[n];
    length = sizeof(array)/sizeof(array[0]);
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    printf("%d\n", minContracts(array, length));
}