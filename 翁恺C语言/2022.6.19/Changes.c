#include<stdio.h>

int main(){
	//初始化
	int price = 0;
	int bill = 0;
	//读入金额票面
	printf("请输入价格：");
	scanf("%d",&price);

	printf("请输入票面：");
	scanf("%d",&bill);

	//计算找零
	if(price <= bill){
		printf("找您零钱%d元\n",bill-price);
	}else{
		printf("您的钱不够了！少%d元\n",price-bill);
	}
	return 0;
}