/* B05_03B.C */
#include <stdio.h>
#include <conio.h>
int giaithua(int number)
{
    if (number == 0)
        return (1);
    /* else */
    return (number * giaithua(number-1));
}
int main() {
    int n;
    printf("Nhap vao mot so: "); scanf("%d",&n);
    printf("Giai thua=%d", giaithua(n));
    getch();
    return 0;
}
