#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};
void LinkedList(struct Node *n)
{
	cout<<"The list has been formed and it has 3 nodes with data: "<<endl;
	while(n!=NULL)
	{
		cout<<n->data<<endl;
		n=n->next;
	}
}
int main()
{
	struct Node* head=NULL;
	struct Node* second=NULL;
	struct Node* third=NULL;
	head=(struct Node*)malloc(sizeof(struct Node*));
	second=(struct Node*)malloc(sizeof(struct Node*));
	third=(struct Node*)malloc(sizeof(struct Node*));
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	
	LinkedList(head);
	return 0;
}
