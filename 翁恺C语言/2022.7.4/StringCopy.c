#include<stdio.h>
#include<string.h>

char *mycpy(char *des,const char *src){
	//数组版本
	/*int idx=0;
	while ( src[idx] ){
		des[idx] = src[idx];
		idx++;
	}
	des[idx] = '\0';*/
	//指针版本
	char *flag = des;//这里自己试了一下直接返回des也可以。我搞不明白！
	while( *src ){
		*des++ = *src++;
	}
	*des = '\0';
	return flag;
}

int main(){
	char s1[] = "abc";
	char s2[] = "";
	//strcpy(s2,s1);
	mycpy(s2,s1);
	printf("%s\n",s2);
	
	return 0;
}