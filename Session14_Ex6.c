#include <stdio.h>
#include <string.h>

void arr(){
	char a[20]="huasydbqj";
	int cnt=0;
	for(int i=0; i<strlen(a);i++){
	
		if(a[i]>='a' && a[i]<='z') ++cnt;
		if(a[i]>='A' && a[i]<='Z') ++cnt;
}
printf("So ky tu la chu cai trong mang la %d", cnt);
}
int main (){
	arr();
	return 0;
}

