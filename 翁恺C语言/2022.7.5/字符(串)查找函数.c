#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char s[] = "hello";
	
	char *p = strchr(s,'l');//这是在一个字符串中寻找字符的函数，返回指针。

	//strrchr(s,'s');这个函数是从字符串的右边开始查找。

	//char *strstr(const char * s1,const char *s2);//这个是在字符串中寻找字符串的函数，返回的也是指针。
	//char *strcasestr(const char * s1,const char *s2);//这个是在字符串中寻找字符串的函数，只是这个不区分大小写，返回的也是指针。

	char *t = (char*)malloc(strlen(p)+1);

	char c = *p;
	*p = '\0';
	printf("%s\n",s);
	*p = c;

	strcpy(t,p);
	printf("%s\n",t);
	free(t);
	p = strchr(p+1,'l');
	printf("%s\n",p);

	return 0;
}