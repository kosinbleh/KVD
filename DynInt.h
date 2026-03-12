#ifndef DYNINT
#define DYNINT

#include <stdlib.h>

typedef struct DynInt{
    int* arr;
    size_t len;
    size_t cap;
} DynInt;

void DynInt_Append(DynInt* arr, int n);
void DynInt_Free(DynInt* arr);

#endif
