#include <stdio.h>
int main()
{
     int son, yigindi = 0;
    printf("Musbat son kiriting: ");
    scanf("%d", &son);

    while (son > 0) {
        yigindi += son % 10;
        son /= 10;
    }

    printf("Raqamlar yig'indisi: %d\n", yigindi);
    return 0;
}