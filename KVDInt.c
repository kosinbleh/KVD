#include "KVDInt.h"
#include <stdio.h>

void KVD_Int_Append(KVD_Int* arr, int new){
    if(arr->len >= arr->cap){
        size_t newCap = arr->cap * 2 + (arr->cap < 1);
        int* newArr = realloc(arr->arr, sizeof(int) * newCap);
        if(!newArr){
            printf("Reallocation failed. RIP :(");
            exit(1);
        }
        arr->cap = newCap;
        arr->arr = newArr;
    }
    
    arr->arr[arr->len] = new;
    arr->len += 1;
}

void KVD_Int_Remove(KVD_Int* arr, int idx){
    if(idx < 0 || idx > arr->len){
        return;
    } 
    
    for(int i = idx; i < arr->len - 1; i++){
        arr->arr[i] = arr->arr[i + 1];
    }
    
    arr->len -= 1;
}

int* KVD_Int_Get(KVD_Int* arr, int idx){
    if(idx < 0 || idx > arr->len){
        return 0;
    } 
    
    return &arr->arr[idx];
}

void KVD_Int_Free(KVD_Int* arr){
    free(arr->arr);
}
