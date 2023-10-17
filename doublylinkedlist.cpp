#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node *previous;
	public:
		Node(){
			data=0;
			next=NULL;
			previous=NULL;
		}
			
};


int main()
	{
	Node *head;	
	Node* newNode1= new Node;
	newNode1->data=10; 
	
	head=newNode1;
	
	Node* newNode2= new Node;
	newNode2->data=20;
	
	Node* newNode3= new Node;
	newNode3->data=30;
	
	Node* newNode4= new Node;
	newNode4->data=40;
	
	newNode1->next=newNode2;
	newNode2->next=newNode3;
	newNode3->next=newNode4;
	
	newNode4->previous=newNode3;
	newNode3->previous=newNode2;
	newNode2->previous=newNode1;
	
	cout<<" data1 "<<newNode1->data<<" self address1 "<<newNode1<<" next address "<<newNode1->next<<endl<<" previous address "<<newnode1->previous<<endl;
	cout<<" data2 "<<newNode2->data<<" self address2 "<<newNode2<<" next address "<<newNode2->next<<endl<<" previous address "<<newnode2->previous<<endl;
	cout<<" data3 "<<newNode3->data<<" self address4 "<<newNode3<<" next address "<<newNode3->next<<endl<<" previous address "<<newnode3->previous<<endl;
	cout<<" data4 "<<newNode4->data<<" self address4 "<<newNode4<<" next address "<<newNode4->next<<endl<<" previous address "<<newnode4->previous<<endl;

	

	
	return 0;
}

	

