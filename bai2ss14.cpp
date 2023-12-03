#include<stdio.h>
#include<math.h>
int swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a = 10;
	int b = 20;
	int *ptrA = &a;
	int *ptrB = &b;
	printf("hieu truoc khi doi cho la: %d" ,a-b);
	swap(&a ,&b);
	printf("hieu sau khi doi cho la: %d" ,b-a);
}
