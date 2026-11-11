#include <stdio.h>
int main()
{
     int son;

    printf("1 dan 7 gacha son kiriting: ");
    scanf("%d", &son);

    while (son != 0) {
        switch (son) {
            case 1:
                printf("Dushanba\n");
                break;
            case 2:
                printf("Seshanba\n");
                break;
            case 3:
                printf("Chorshanba\n");
                break;
            case 4:
                printf("Payshanba\n");
                break;
            case 5:
                printf("Juma\n");
                break;
            case 6:
                printf("Shanba\n");
                break;
            case 7:
                printf("Yakshanba\n");
                break;
            default:
                printf("Bunday hafta kuni mavjud emas\n");
        }

        printf("1 dan 7 gacha son kiriting: ");
        scanf("%d", &son);
    }
    return 0;
}