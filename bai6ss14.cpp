#include<stdio.h>
#include<stdlib.h>

int printMenu(){
	printf("\n*******Menu**********\n");
	printf("1. Nhap vao mang\n");
	printf("2. In ra mang\n");
	printf("3. Sao chep mang vao mang khac\n");
	printf("4. Nhap vao chuoi khac, them chuoi do vao chuoi ban dau\n");
	printf("5. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
	printf("6. In ra chuoi dao nguoc\n");
	printf("7. Thoat\n");
}

int cpyStr(char *str, char *des){
    while(*str != '\0'){
    	*des = *str;
    	str++;
    	des++;
    }
    *des = '\0';
}

int addStr(char *str, char *addstr){
	while(*str != '\0'){
        str++;
    }
    while(*addstr != '\0'){
    	*str = *addstr;
    	str++;
    	addstr++;
    }
    *str = '\0';
}

int strLen(char *str){
	const char *ptr = str;
	while(*ptr != '\0'){
		ptr++;
	}
	return ptr - str;
}

int reserveStr(char *str){
	int length = strLen(str);
	for(int i = length;i>=0;i--){
		printf("%c",str[i]);
	}
	printf("\n");
}

int main(){
	char str[100];
	char desStr[100];
	char addstr[50];
	char str1[100];
	int length=0;
	while(1){
		printMenu();
		printf("Lua chon cua ban: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				str[100];
				printf("Nhap vao mang: ");
				scanf("%s",str);
				break;
			case 2:
				printf("Mang vua nhap la: ");
				printf("%s",str);
				break;
			case 3:
			    printf("Mang nguon la: %s\n",str);
			    cpyStr(str,desStr);
			    printf("Mang da sao chep la: %s",desStr);
				break;
			case 4:
				printf("Nhap vao chuoi moi: ");
				scanf("%s",addstr);
				addStr(str,addstr);
				printf("Mang sau khi duoc them vao mang goc la: %s",str);
				break;
			case 5:
				str[100];
				str1[100];
				printf("Nhap vao chuoi khac: ");
				scanf("%s",str1);
				int str1Len = strLen(str);
				printf("Do dai cua chuoi goc la: %d\n", str1Len);
				int str2Len = strLen(str1);
				printf("Do dai cua chuoi moi la: %d\n", str2Len);
				if(str1Len == str2Len){
					printf("Chuoi goc bang chuoi moi\n");
				} else if(str1Len > str2Len){
					printf("Chuoi goc dai hon chuoi moi\n");
				} else{
					printf("Chuoi moi dai hon chuoi goc\n");
				}
				break;
			case 6:
				printf("Chuoi dao nguoc la:");
				reserveStr(str);
				break;
			case 7:
				exit(0);
		}
	}
	return 0;
}
