#include<stdio.h>

int main(){
	//printf("%f\n",10.0/3*3);
	//printf("%d\n",10/3*3);
	printf("请分别输入身高的英尺和英寸,"
		"如输入\"5 7\"表示身高为5英尺7英寸");
	//这里用到了转义字符！
	double a,b;
	scanf("%lf %lf",&a,&b);
	//double类型输入写成lf形式
	printf("身高为%f米",(a+(b/12))*0.3048);
	//double类型输出写成f形式
	return 0;
}
