#include<stdio.h>

int a,b;
//��Ҫ���뿴��ȫ�ֱ�����ʲô���ã�������ͨ�˺���ֻ������ʽ������Ҳ���Բ��ò���
//ȫ�ֱ�������ȫ�������⺯�����á�

int main(){
	int changea();
	int changeb();
	a = 10;
	b = 20;
	printf("a=%d,b=%d\n",a,b);

	printf(
		"a=%d,"
		,
		changea()
		);
	//��һ����Ҫ�ǿ���C���Ե����ж�ô���⣬����޶Ȳ��ܲ�ֵ���
	printf("b=%d\n",changeb());
	return 0;
}

int changea(){
	a=1;
	return a;
}

int changeb(){
	b=2;
	return b;
}



