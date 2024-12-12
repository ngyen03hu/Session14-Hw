#include<stdio.h>
#include<string.h>

int main(){
	char  str[]="hello em";
	char ch;
	int hie=0;
	
	printf("hello em\n");
	printf("Nhap 1 ki tu bat ki : ");
	scanf("%d",&ch); 

	for(int i = 0 ; str[i] != '\0';i++){
		if(str[i]==ch){
			hie++;
		}
	}
	printf("so lan xuat hien ky tu %c trong chuoi :%d\n",ch,hie);
	

	return 0;
}
