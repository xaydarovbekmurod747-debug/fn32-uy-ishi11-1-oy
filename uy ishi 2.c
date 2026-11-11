#include <stdio.h>
int main()
{
     int harorat;
    int issiqKunlar = 0;

    for (int i = 1; i <= 7; i++) {
        printf("%d-kun haroratini kiriting: ", i);
        scanf("%d", &harorat);

        if (harorat > 30) {
            printf("Issiq\n");
            issiqKunlar++;
        } else if (harorat >= 15) {
            printf("Iliq\n");
        } else {
            printf("Sovuq\n");
        }
    }

    printf("30 dan yuqori bo'lgan kunlar soni: %d\n", issiqKunlar);
    return 0;
}