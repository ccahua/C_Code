#include<stdio.h>
#include<string.h>

char* mycat(char* des,const char* src){
	int idx = strlen(des);
	while( *src ){

		des[idx++] = *src++;
}
	des[idx] = '\0';
	return des;
}

int main(){
	char s[] = "abc";
	char s1[] = "defg";
	//strcat(s,s1);
	mycat(s,s1);
	printf("%s\n",s);
	return 0;
}
