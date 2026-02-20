#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int*) malloc(3 * sizeof(int));     //allocates memory for 3 integers on the heap and stores the starting address in pointer p.

    for(int i = 0; i < 3; i++)
        p[i] = i + 1;

    p = (int*) realloc(p, 5 * sizeof(int));

    for(int i = 3; i < 5; i++)
        p[i] = i + 1;

    for(int i = 0; i < 5; i++)
        printf("%d ", p[i]);

    free(p);
}
