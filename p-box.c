#include <stdio.h>
#include <string.h>
void main()
{
    int pbox[8][8] = {{58,58,42,34,26,18,10,2},
                      {60,52,44,36,28,20,12,4},
                      {62,54,46,38,30,22,14,6},
                      {64,56,48,40,32,24,16,8},
                      {57,49,41,33,25,17,9,1},
                      {59,51,43,35,27,19,11,3},
                      {61,53,45,37,29,21,13,5},
                      {63,55,47,39,31,23,15,7},
                     };

    char a[64], b[64], c[64];
    int i;

    for (i = 0; i < 64; i++)
    {
        a[i] = 'Z';
        b[i] = 'Z';
    }

    printf("Enter 64 characters:");
    scanf("%s", b);

    for (i = 0 ; i < strlen(b) ; i++)
    {
        a[i] = b[i];
    }

    printf("Before Permutation:\n");
    for (i = 0 ; i < 64 ; i++)
    {
        printf("%c", a[i]);
    }

    printf("\n\n");

    for (i = 0; i < strlen(b) ; i++)
    {
        int position;
        position = pbox[i/8][i%8];
        //printf("position: %d\n", position);
        c[position-1] = b[i];
    }

    printf("After Permutation:\n");
    for (i = 0; i < 64 ; i++)
    {
        printf("%c", c[i]);
    }
}