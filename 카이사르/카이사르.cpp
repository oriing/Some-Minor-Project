#include <stdio.h>
#include <string.h>
#include <windows.h>
#define inner(a, b, c) ((a)>=(b) && (a)<=(c))

void conv(char *s, int k){
	int n=strlen(s), temp;
	for(int i=0;i<n;i++){
		if(inner(s[i], 'a', 'z')){
			temp=(s[i]-'a')+k;
			while(temp<0) temp+=26;
			s[i]=(temp)%26+'a';
		}
		else if(inner(s[i], 'A', 'Z')){
			temp=(s[i]-'A')+k;
			while(temp<0) temp+=26;
			s[i]=(temp)%26+'A';
		}
		else if(inner(s[i], '0', '9')){
			temp=(s[i]-'0')+k;
			while(temp<0) temp+=10;
			s[i]=(temp)%10+'0';
		}
	}
}
void deconv(char *s, int k){
	int n=strlen(s), temp;
	for(int i=0;i<n;i++){
		if(inner(s[i], 'a', 'z')){
			temp=(s[i]-'a')-k;
			while(temp<0) temp+=26;
			s[i]=(temp)%26+'a';
		}
		else if(inner(s[i], 'A', 'Z')){
			temp=(s[i]-'A')-k;
			while(temp<0) temp+=26;
			s[i]=(temp)%26+'A';
		}
		else if(inner(s[i], '0', '9')){
			temp=(s[i]-'0')-k;
			while(temp<0) temp+=10;
			s[i]=(temp)%10+'0';
		}
	}
}

void goc(){
    int i, innum;
    char inchar[10000];

    printf("암호화할 문장: ");
    scanf("%[^\n]%*c", inchar);
    printf("Key: ");
    scanf("%d", &innum);
    
    conv(inchar, innum);
    
	printf("\n\n");
    
    printf("결과: %s\n", inchar);
    system("pause");
}

void gon(){
    int i, innum;
    char inchar[10000];

    printf("복호화할 문장: ");
    scanf("%[^\n]%*c", inchar);
    printf("Key: ");
    scanf("%d", &innum);
    
	deconv(inchar, innum);
    
	printf("\n\n");
    
    printf("결과: %s\n", inchar);
    system("pause");
}

int main(){
	int c;
	printf("----------------\n"
			"1. 암호화\n"
			"2. 복호화\n"
			"---------------\n"
			": ");
	scanf("%d", &c);
	while(getchar()!='\n');
	switch(c){
		case 1:
			goc();
			break;
		case 2:
			gon();
			break;
	} 
	return 0;
}
