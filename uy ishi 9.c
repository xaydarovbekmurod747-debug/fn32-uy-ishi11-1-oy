#include <stdio.h>
int main(){
    int tanlov = 0, bosh = 20;

    while (tanlov != 4) {
        printf("\n1. Avtomobil kiritish\n");
        printf("2. Avtomobil chiqarish\n");
        printf("3. Bo'sh joylarni ko'rish\n");
        printf("4. Dasturdan chiqish\n");
        printf("Tanlang: ");
        scanf("%d", &tanlov);

        switch (tanlov) {
            case 1:
                if (bosh == 0) {
                    printf("Bo'sh joy qolmagan!\n");
                } else {
                    bosh--;
                    printf("Avtomobil kiritildi.\n");
                }
                break;
            case 2:
                if (bosh == 20) {
                    printf("Avtoturargoh bo'sh, chiqaradigan avtomobil yo'q!\n");
                } else {
                    bosh++;
                    printf("Avtomobil chiqarildi.\n");
                }
                break;
            case 3:
                printf("Bo'sh joylar: %d ta\n", bosh);
                break;
            case 4:
                printf("Dastur tugadi.\n");
                break;
            default:
                printf("Noto'g'ri tanlov!\n");
        }
    }

     
    return 0;
}