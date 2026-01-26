#include <stdio.h>
int main(){
	char a[100];
	printf ("nhap vao mot chu so nguyen duong: ");
	scanf(" %s", &a);
	int i;
	int tong=0;
	for(i=0;a[i]!='\0';i++){
		tong += (a[i]-'0');
	}
	if(tong%3==0){
	printf("so chia het cho 3");
} else {
	printf("so ko chia het cho 3");
}
	return 0;
}
