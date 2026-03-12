#include "DynInt.h"
#include <stdio.h>

void DynInt_Append(DynInt* arr, int new){
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

void DynInt_Free(DynInt* arr){
    free(arr->arr);
}
