#include <stdio.h>
int main()
{
     for (int i = 1; i <= 15; i++) {
        if (i == 5) {
            printf("Besh\n");
        } else {
            printf("%d - %d\n", i, i * i);
        }
    }
    return 0;
}