#include <stdio.h>
#include "DynInt.h"

int main(){
    DynInt arr = {0};
    
    for(int i = 0; i <= 69; i++){
        DynInt_Append(&arr, i);
    }
    
    printf("%i\n", arr.arr[4]); //4
    printf("%zu\n", arr.len); //70
    printf("%zu\n", arr.cap); //128
    
    DynInt_Free(&arr);
    
    return 0;
}
