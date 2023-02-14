#include <iostream>

using namespace std;

struct Node {
	Node* next;
	int data;
};

void push(Node *head, int newdata)
{
	Node* newNode = new Node();
	newNode -> data = newdata;
	newNode -> next = head;
	head = newNode;
}

int count(Node* head)
{
	int cnt = 0;
	Node* curr = head;
	while (curr != NULL)
	{
		cnt++;
		curr = curr->next;
	}
	return cnt;
}

int main()
{
	Node* head = NULL;
	int size;
	int dataOne;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> dataOne;
		push(head, dataOne);
	}
	cout << count(head);
}
