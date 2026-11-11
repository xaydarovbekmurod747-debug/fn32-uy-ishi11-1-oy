#include <stdio.h>
int main()
    int tanlov = 0, jami = 0;

    while (tanlov != 5) {
        printf("\n1. Olma - 5000 so'm\n");
        printf("2. Banan - 12000 so'm\n");
        printf("3. Apelsin - 10000 so'm\n");
        printf("4. Hisobni ko'rish\n");
        printf("5. Xaridni yakunlash\n");
        printf("Tanlang: ");
        scanf("%d", &tanlov);

        if (tanlov == 1) jami += 5000;
        else if (tanlov == 2) jami += 12000;
        else if (tanlov == 3) jami += 10000;
        else if (tanlov == 4) printf("Hisob: %d so'm\n", jami);
        else if (tanlov == 5) printf("Jami: %d so'm\n", jami);
        else printf("Noto'g'ri tanlov!\n");
    }
{
     
    return 0;
}