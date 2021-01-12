#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct node
{
	int num;
	struct node *next;
};
struct node *linklist(int n)		//linklist 
{
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->num = 1;
	head->next = NULL;
	struct node *tail = head;
	for(int i1 = 2;i1 <= n;i1++)
	{
		struct node *new_node = (struct node*)malloc(sizeof(struct node));
		new_node->num = i1;
		new_node->next = NULL;
		tail->next = new_node;
		tail= tail->next;
	}
	tail->next = head;		//连接首位 
	return head;
}
void out(struct node *list,int m,int n)
{
	struct node *prev,*cur;
	cur = list;
	prev = list;
	while(prev->next != list)		//prev找到最后一个人 
	{
		prev = prev->next;
	}
	while(cur->next != cur)
	{
		for(int i = 1;i < m;i++)
		{
			prev = cur;
			cur = cur->next;
		}
		prev->next = cur->next;
		printf("%d ",cur->num);
		free(cur);
		cur = prev->next;
	}
	printf("%d",cur->num);
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	struct node *list = linklist(n);		//创建链表 
	out(list,m,n);
	return 0;
}

//------P5744--------------------------
