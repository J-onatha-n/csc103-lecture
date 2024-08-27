#pragma once

#include <initializer_list>
using std::initializer_list;
#include <iostream>
using std::cin;

struct node {
	int   data;
	node* next;
	/* constructor, in case you want to use it: */
	node(int d=0, node* n=NULL) : data(d), next(n) {}
};

node* buildlist(initializer_list<int> l)
{
	node* L = NULL;
	node** p = &L;
	for (int x : l) {
		*p = new node(x);
		p = &(*p)->next;
	}
	return L;
}

node* readlist()
{
	node* L = NULL;
	node** p = &L;
	int x;
	while (cin >> x) {
		*p = new node(x);
		p = &(*p)->next;
	}
	return L;
}

void printlist(node* L)
{
	while (L) cout << L->data << " ", L = L->next;
	cout << "\n";
}
