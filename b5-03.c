/* B05_03A.C */
#include <stdio.h>
#include <conio.h>
int giaithua(int number)
{
    int i, g=1;
    for(i=2;i<=number;i++)
        g=g*i;
    return g;
}
int main() {
    int n;
    printf("Nhap vao mot so: "); scanf("%d",&n);
    printf("Giai thua=%d", giaithua(n));
    getch();
}
