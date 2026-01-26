/* B05_06.C */
#include <stdio.h>
#include <conio.h>
int gt(int n){
    int i, g=1;
    for(i=1; i<=n; i++)
        g=g*i;
    return g;
}
int tohop(int n, int k){
    return gt(n)/(gt(k)*gt(n-k));
}
main(){
    int i,j,n;
    printf("Nhap vao so hang cua tam giac:");scanf("%d",&n);
    
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++)
            printf("%5d",tohop(i,j));
        printf("\n");
    }
    getch();
}
