#include<stdio.h>

int main(){
	int i = 0;
	char* s = "Hello,World!";// <==> const char* s = "Hello,World!";
	char* s1= "Hello,World!";
	//s[0] = 'B';//写在了地址很小的代码段，只读，不能写

	char s2[] = "Hello,World!";

	printf("&i = %p\n",&i);
	printf("s = %p\n",s);
	printf("s1= %p\n",s1);
	printf("s2= %p\n",s2);

	s2[0] = 'B';
	printf("Here!s2[0]=%c\n",s2[0]);
	return 0;
}