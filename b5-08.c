#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%lf", &x);

// a) 
    double S1 = 1.0;
    double a = 1.0; 
    int i;
    for( i = 1; i <= n; i++) {
        a = a * x;
        S1 += a;
    }
    printf("a) S = %.2lf\n", S1);
// b)
    double S2 = 1.0;
    double b = 1.0;
    
    for(i = 1; i <= n; i++) {
        b = b * (-x); 
        S2 += b;
    }
    printf("b) S = %.2lf\n", S2);
//c
    double S3 = 1.0;
    double c = 1.0;
    
    for(i = 1; i <= n; i++) {
        c = c * (x / i);
        S3 += c;
    }
    printf("c) S = %.2lf\n", S3);
    return 0;
}
