#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    if (argc != 2) {
        fprintf(stderr,
            "Program requires a single integer input as maximum value.\n");
        exit(EXIT_FAILURE);
    }
    int max = atoi(argv[1]);
    int f_i = 0;
    int f_j = 1;
    while (f_i < max) {
        printf("%d \n", f_i);
        int f_j_old = f_j;
        f_j += f_i;
        f_i = f_j_old;
    }

    return 0;
}

