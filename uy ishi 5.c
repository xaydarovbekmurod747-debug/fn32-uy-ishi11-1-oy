#include <stdio.h>
int main(){
{
     int boshi, oxiri;
    int faqat3 = 0, faqat5 = 0, ikkalasi = 0;

    printf("Boshlang'ich sonni kiriting: ");
    scanf("%d", &boshi);
    printf("Oxirgi sonni kiriting: ");
    scanf("%d", &oxiri);

    printf("3 ga ham, 5 ga ham bo'linadigan sonlar: ");

    for (int i = boshi; i <= oxiri; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            ikkalasi++;
        } else if (i % 3 == 0) {
            faqat3++;
        } else if (i % 5 == 0) {
            faqat5++;
        }
    }

    printf("\n");
    printf("Faqat 3 ga bo'linadigan sonlar soni: %d\n", faqat3);
    printf("Faqat 5 ga bo'linadigan sonlar soni: %d\n", faqat5);
    printf("Ikkalasiga ham bo'linadigan sonlar soni: %d\n", ikkalasi);
    }
    return 0;
}