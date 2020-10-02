#include<bits/stdc++.h>
using namespace std;

struct node
{
	int val;
	node* next;
	node(int v)
	{
		val = v;
		next = NULL;
	}
};

void one(node* a)
{
	a = new node(2);
}

int main()
{
	node* head = new node(1);
	one(head);
	cout<<head->val;
	return 0;
}


