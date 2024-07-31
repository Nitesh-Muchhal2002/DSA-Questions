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
  Node* removeLoop(Node* head)
  {
  	Node* slow=head,*fast=head;
  	while(fast && fast->next)
  	{
  		  slow=slow->next;
  		  fast=fast->next->next;
  		  if(fast==slow)
  		  break;
	  }
//	  if(fast==nullptr && fast->next ==nullptr)
//	  return;
	  slow=head;
	  while(slow!=fast)
	  {
	  	slow=slow->next;
	  	fast=fast->next;
	  }
	  while(slow->next!=fast)
	  {
	  	slow=slow->next;
	  }
	  slow->next=nullptr;
	  return head;
  }
 int main()
  {
  
  // Create a sample linked list
    // with a loop for testing
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
   fifth->next = second; 
   
  cout<<removeLoop(head);
   
    // Clean up memory (free the allocated nodes)
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}