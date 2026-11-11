#include <stdio.h>
int main(){
    int ball, alo = 0, yaxshi = 0, qoniqarli = 0, qoniqarsiz = 0;

    for (int i = 1; i <= 15; i++) {
        printf("%d-o'quvchi: ", i);
        scanf("%d", &ball);

        if (ball < 0 || ball > 100) continue;

        if (ball >= 90) alo++;
        else if (ball >= 75) yaxshi++;
        else if (ball >= 60) qoniqarli++;
        else qoniqarsiz++;
    }

    printf("A'lo: %d\nYaxshi: %d\nQoniqarli: %d\nQoniqarsiz: %d\n",
           alo, yaxshi, qoniqarli, qoniqarsiz);
     
    return 0;
}