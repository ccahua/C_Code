#include<stdio.h>
#include"node.h"
#include<stdlib.h>

//typedef struct _node {
//	int value;
//	struct _node* next;
//} Node;

//我的理解是把链表结构化成一个头指针和尾指针的结构体
typedef struct list {
	Node* head;//链表的头部
	Node* tail;//链表的尾部
} List;

//void add(Node** head, int number);

void add(List* pList, int number);

void print(List* plist);

void search(List* plist, int number);

void delete(List* plist, int number);

void clean(List* plist);

int main(int argc, char const* argv[]) {
	List list;
	list.tail = list.head = NULL;
	int number;
	do {
		scanf("%d", &number);
		if (number != -1) {
			add(&list, number);
		}
	} while (number != -1);
	//遍历链表
	print(&list);
	//从一个链表中查找一个数
	scanf("%d", &number);
	search(&list, number);

	scanf("%d", &number);
	delete(&list, number);

	print(&list);

	clean(&list);

	print(&list);

	return 0;
}

void add(List* pList, int number) {
	//add to linked-list 把节点添加到链表之中。
	Node* p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//find the last
	//Node* last = pList->head;
	if (pList->tail) {//判断该节点是否为空
		/*while (pList->tail->next) {//找到最后一个
			pList->tail = pList->tail->next;
		}*/
		//attach 把新产生的节点接到这个新的链表后面
		pList->tail->next = p;
		pList->tail = p;//这里的pList->tail、p、pList->tail->next三者是等价的。非常神奇。
	}
	else {//如果该节点为空，就说明是第一个节点，先让head和tail指向这个新产生的节点。
		pList->head = p;
		pList->tail = p;
	}
}

/*
//这里使用了一个二级指针，指向地址的地址。解决函数传值的问题，上面是另一种解决方法。
void add(Node** pHead, int number) {
	//add to linked-list 把节点添加到链表之中。
	Node* p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//find the last
	Node* last = *pHead;
	if (last) {//判断该节点是否为空
		while (last->next) {//找到最后一个
			last = last->next;
		}
		//attach 把新产生的节点接到这个新的链表后面
		last->next = p;
	}
	else {//如果该节点为空，就说明是第一个节点，先让head指向这个新产生的节点。
		*pHead = p;
	}
}
*/

void print(List* plist) {
	//遍历链表,展示链表的值
	Node* p = plist->head;
	if (p != NULL) {
		for (p; p; p = p->next) {
			printf("%d\t", p->value);
		}
		printf("\n");
	}
	else {
		printf("该链表为空！");
	}
}

void search(List* plist, int number) {
	int i = 1, found = 0;
	Node* p;
	for (p = plist->head, i; p; p = p->next, i++) {
		if (p->value == number) {
			printf("找到了！在链表的第%d个位置\n", i);
			found = 1;
			break;
		}
	}
	if (found != 1) {
		printf("没找到>_<\n");
	}
}

void delete(List* plist, int number) {
	//删除
	Node* p, * q;
	for (q = plist->head/*q = NULL，这是翁恺老师的写法，这种写法更容易懂*/, p = plist->head; p; q = p, p = p->next) {
		if (p->value == number) {
			if (p != q/*q,也就是说q!=NULL*/) {
				q->next = p->next;
			}
			else {//当删除的是第一个节点，或者当链表只有一个节点时的情况
				plist->head = p->next;
			}
			free(p);
			break;
		}
	}
}

void clean(List* plist) {
	Node* p, * q;
	for (p = plist->head; p; p = q) {
		q = p->next;
		free(p);
	}
	plist->head = NULL;
}