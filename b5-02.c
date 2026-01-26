/* B05_02.C*/
#include <stdio.h>
#include <conio.h>
int sum(int i1, int i2, int i3)
{
    return (i1 + i2 + i3);
}
main()
{
    printf("Tong la %d\n", sum(1, 2, 3));
    getch();
}
