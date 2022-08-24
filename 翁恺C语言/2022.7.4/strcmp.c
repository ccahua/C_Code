#include<stdio.h>
#include<string.h>

int mycmp(const char *p,const char *q){
	int result;
	/*int idx = 0; 这是第一种写法，当作数组，指针始终没有移动
	while(p[idx] == q[idx] && p[idx] != '\0'){
		idx++;
	}*/
	//这种写法是把指针移动了，输出结果之后指针指向了最后的结果。
	while (*p == *q && *p != '\0'){
		p++;
		q++;
	}
	if(*p - *q == 0){
		result = 0;
	}else if(*p - *q > 0){
		result = 1;
	}else{
		result = -1;
	}
	return result;
}

int main(){
	char s1[] = "abc";
	char s2[] = "abc";

	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",mycmp(s1,s2));
	return 0;
}