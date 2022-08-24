#include<stdio.h>
#include<string.h>

int mylen(const char *s){
	int idx = 0;
	while(s[idx] != '\0'){
		idx++;
	}
	return idx;
}

int main(int argc, const char *argv[]){
	char line[] = "Hello";

	printf("strlen = %d\n",strlen(line));
	printf("sizeof = %d\n",sizeof(line));
	printf("mylen = %d\n",mylen(line));
	return 0;
}
