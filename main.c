#include <stdio.h>
#include "helpers/vector.h"
#include "compiler.h"
int main()
{

    int res = compile_file("./test.c", "test.o", 0);

    if(res == COMPILER_FILE_COMPILED_OK)
    {
        printf("Compilation ok...\n");
    } 
    else if(res== COMPILER_FAILED_WITH_ERRORS)
    {
        printf("Compilation failed...\n");
    } 
    else 
    {
        printf("Unknown response for compilation \n");
    }
    return 0;
}