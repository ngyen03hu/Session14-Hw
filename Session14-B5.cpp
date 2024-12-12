#include<stdio.h>
#include<string.h>

int main(){
	char  str[]="hello em";
	int length =0;
	// chia doi cac tu rieng biet 
	char* token = strtok(str," ");
while(token != NULL){
	length++;
	token = strtok(NULL," ");
}
printf("so luong tu %d\n",length);
	return 0;
}
