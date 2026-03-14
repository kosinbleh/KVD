#ifndef KVDINT
#define KVDINT

#include <stdlib.h>

typedef struct KVD_Int{
    int* arr;
    size_t len;
    size_t cap;
} KVD_Int;

void KVD_Int_Append(KVD_Int* arr, int n);
void KVD_Int_Remove(KVD_Int* arr, int idx);
int* KVD_Int_Get(KVD_Int* arr, int idx);
void KVD_Int_Free(KVD_Int* arr);

#endif
