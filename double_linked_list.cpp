#include <bits/stdc++.h>

struct Node {
	int data;
	struct Node * prev;
	struct Node * next;
};

Node* addNode(const int data, Node* iNodeToLinkTo)
{
    struct Node * newNode = new Node;

    newNode->data = data;

    if (iNodeToLinkTo != NULL)
    {
    	newNode->prev = iNodeToLinkTo;
    	iNodeToLinkTo->next = newNode;
    }
    else
    {
	newNode->prev = NULL;
    }

    newNode->next = NULL;
}

int main (int argc, char *argv[])
{
	struct Node * head = NULL;
	
	auto node1 = addNode(7, head);
	auto node2 = addNode(9, node1);
	auto node3 = addNode(11, node2);

	std::cout << node1->data << std::endl;	
	std::cout << node2->data << std::endl;	
	std::cout << node3->data << std::endl;	

	std::cout << node3->prev->data << std::endl;	
	std::cout << node2->prev->data << std::endl;	
}
