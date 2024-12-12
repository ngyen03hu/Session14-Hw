#include<stdio.h>
#include<string.h>

int main(){
	int length;
	int number;
	char fullName[]="hello woll";
	length = sizeof(fullName)/sizeof(char);
	while(1){
	printf("hello woll\n");
	printf("so tu trong chuoi la bao nhieu: \n");
	scanf("%d",&number);
	if (number== length){
	printf("ban nhap dung roi %d = %d cua do dai\n ",number,length);
	return 0;
	}else{
	printf("sai roi nhap lai\n");
	}
	}
	return 0;
} 
