#include <stdio.h>
#include "KVDInt.h"

int main(){
    KVD_Int arr = {0};
    
    for(int i = 0; i <= 69; i++){
        KVD_Int_Append(&arr, i);
    }
    
    printf("%i\n", arr.arr[4]); //4
    printf("%zu\n", arr.len); //70
    printf("%zu\n", arr.cap); //128
    
    //Len = 70 Max accessible = arr[69]
    KVD_Int_Remove(&arr, arr.len -1);
    printf("%i\n", arr.arr[arr.len - 2]); //69?
    printf("%zu\n", arr.len); //69
    
    KVD_Int_Free(&arr);
    
    return 0;
}
