#include<stdio.h>
int main(){
	int a = 20;
	int *ptrA = &a;
	printf("gia tri a =%d\n" ,a);
	printf("dia chi a =%d\n" ,&a);
	printf("gia tri con tro =%d\n" ,ptrA);
	printf("dia chi con tro =%d\n" ,&ptrA);
}
