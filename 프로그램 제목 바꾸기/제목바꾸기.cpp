#include <stdio.h>
#include <Windows.h>
#include <string.h>
int main(){
	char s[1000]="title ", t[1000]={};
	
	while(1){
		printf("������ ���� �Է�: ") ;
		scanf("%s", t);
		int n=strlen(t);
		if(n==0){
			break;
		}
		for(int i=6;i<=n+6;i++) s[i]=t[i-6];
		system(s);
		system("cls");
	}
	return 0;
}
