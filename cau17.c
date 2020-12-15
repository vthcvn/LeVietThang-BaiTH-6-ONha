#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	char c;
	int k;
	printf("Nhap chuoi: ");
	gets(s);
	printf("Nhap ki tu: ");
	scanf("%c", &c);
	printf("Nhap vi tri: ");
	scanf("%d", &k);
	int i, vitri=0;
	for(i=k; i<strlen(s); i++){
		if(s[i]==c){
			vitri=i+1;
			break;
		}
	}
	printf("%d", vitri);
	return 0;
}
