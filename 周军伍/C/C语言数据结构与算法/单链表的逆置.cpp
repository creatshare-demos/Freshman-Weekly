#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node	*next;	
}Node,*Linklist;


Linklist CreatFromTail()
{
	Linklist L;
	Node *s;
	Node *p;
	int x;
	L=(Linklist)malloc(sizeof(Node));
	L->next=NULL;
	p=L;
	
	while(1)
	{
		scanf("%d",&x);
		if(x!=0)
		{
			
			s=(Node *)malloc(sizeof(Node));
			s->data=x;
			
			p->next = s;	//β�巨 
			p = s;
		}
		else
		{
			p->next = NULL;
			break;
		}
		
	}
	return L;
	
}
void Output(Linklist L)
{
	Node *p;
	p=L->next;
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
	
}
void Reverse(Linklist L)
{
	Node *temp,*pre;
	
	pre = L->next;
	L->next = NULL;
	
	while(pre){
		temp = pre->next;
		pre->next = L->next;
		L->next = pre;
		pre = temp;
	}
}


int main()
{	
	Linklist L;
	
	L=CreatFromTail();//����������
 	
	Output(L);//��ӡ���������
	
    Reverse(L);//���õ�����
    
    Output(L); //��ӡ���õ����� 
    
	Reverse(L); //�ٴ����� 
	
	Output(L);	//��ӡ�ٴ�����֮������� 

	
}