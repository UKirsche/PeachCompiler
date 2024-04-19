#include <stdio.h>
#include "helpers/vector.h"
int main(){
    //Nimmt Ints an
    struct vector* vec = vector_create(sizeof(int));
    int x=40;
    vector_push(vec, &x);
    x=29;
    vector_push(vec, &x);

    vector_set_peek_pointer(vec, 0);
    int* ptr = vector_peek(vec);
    
    printf("%i\n", *ptr);

    return 0;
}