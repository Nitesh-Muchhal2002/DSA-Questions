#include<bits/stdc++.h>
using namespace std;
 class Node{
 	public:
    int data;
	Node* next;
	
	public:
	Node (int data1,Node* next1)
	{
		data=data1;
		next=next1;
	}
	public:
	Node(int data1)
	{
		data=data1;
		next=nullptr;
	}
 };
  Node* findMiddle(Node* head)
  {
  	 if(head==NULL || head->next==NULL)
  	 {
  	 	return head;
	   }
	   Node* temp=head;
	   int cnt=0;
	   while(temp!=NULL)
	   {
	   	 cnt++;
	   	 temp=temp->next;
	   }
	   int middle=cnt/2+1;
	   temp=head;
	   while(temp!=NULL)
	   {
	   	  middle=middle-1;
	   	  if(middle==0)
	   	  {
	   	  	 break;
			 }
			 temp=temp->next;
	   }
	   return temp;
  }
    //totoise and hare alogorithm
    Node* findMid(Node* head)
    {
    	 //initialize the slow pointer to the head
    	Node* slow= head;
    	//initialize the fast pointer to the head
    	Node* fast=head;
    	
    	//traverse the linked list using the
    	// Tortoise and Hare alogorithm
    	while(fast!=NULL && fast->next!=NULL)
    	{
    		//Move slow one step
    		slow = slow->next;
    		
    		// Move fast two step
    		fast=fast->next->next;
		}
		//return slow pointer,
		//which us now at the middle node
		return slow;
	}
	Node* reverseLL(Node* head)
	{
		Node* temp=head;
		//previous node null
		Node* prev=NULL;
		while(temp!=NULL)
		{
			Node* front=temp->next;
			temp->next=prev;
			prev=temp;
			temp=front;
		}
		return prev;
	}
	 void printList(Node* head)
	 {
	 	Node* temp=head;
	 	while(temp!=NULL)
	 	{
	 		cout<<temp->data<<" ";
	 		temp=temp->next;
		 }
		 cout<<endl;
	 }
	 //reverse linked list using recurssion
	 Node* reverseLinkedList(Node* head)
	 {
	 	if(head==NULL || head->next==NULL)
	 	{
	 		return head;
		 }
		 Node* newHead=reverseLinkedList(head->next);
		 Node* front=head->next;
		 front->next= head;
		 head->next=NULL;
		 return newHead;
	 }
int main()
{
	Node*head=new Node(3);
	head->next=new Node(4);
	head->next->next = new Node(5);
	head->next->next->next= new Node(6);
	head->next->next->next->next=new Node(7);
//	Node* middleNode=findMid(head);
//	cout<<"Middle Node is:"<<middleNode->data<<" ";
//      cout<<"Original Linked List:";
//	  printList(head);
//       head=reverseLL(head);
//       cout<<"Reversed Linked List";
//	   printList(head);
//	   
	   cout<<"Original Linked List:";
	  printList(head);
       head=reverseLinkedList(head);
       cout<<"Reversed Linked List";
	   printList(head);
	return 0;
}