#include<stdio.h>

int insert(int *ptr, int n){
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", (ptr + i));
	}
}

int print(int *ptr, int n){
	for(int i = 0; i < n; i++){
		printf("arr[%d] = %d\n", i, *(ptr + i));
	}
	return 0;
}

int selSort(int *ptr, int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(*(ptr + i) > *(ptr + j)){
				int key = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = key;	
			}	
		}
	}
}

int main(){
	int arr[100];
	int size;
	printf("Nhap phan tu vo\n");
	scanf("%d", &size);
	insert(arr, size);
	selSort(arr, size);
	printf("Mang sau khi duoc sap xep tu be den lon la:\n");
	print(arr, size);
	return 0;
}
