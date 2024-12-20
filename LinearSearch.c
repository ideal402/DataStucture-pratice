#include <stdio.h>

int LSearch(int ar[], int len, int target){
    for(int i=0; i<len; i++){
        if (ar[i] == target){
            return i;
        }
    }
    return -1;
}

int main(void){
    int arr[] = {1,2,3,4,5};
    int idx;
    int target = 4;

    idx = LSearch(arr,sizeof(arr)/sizeof(int),target);

    if (idx == -1){
        printf("fail\n");
    }
    else{
        printf("success %d", idx);
    }
}