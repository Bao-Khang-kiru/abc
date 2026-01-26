/* B05_07.C */
#include <stdio.h>
#include <conio.h>

void chuyen(int sotang, int vitri1, int vitri2, int vitri3)
{
    if(sotang==1)
        printf("\nDi chuyen tu %d -> %d",vitri1, vitri2);
    else {
        chuyen(sotang-1,vitri1, vitri3, vitri2);
        chuyen(1,vitri1, vitri2, vitri3);
        chuyen(sotang-1,vitri3, vitri2, vitri1);
    }
}
main()
{
    int n,v1=1,v2=2,v3=3;
    
    printf("Nhap vao so dia:");scanf("%d",&n);
    chuyen(n,v1,v2,v3);
    getch();
}
