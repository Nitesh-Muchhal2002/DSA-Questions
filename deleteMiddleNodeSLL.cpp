#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  	int data;
  	Node* next;
  	public:
 	Node(int data1,Node* next1)
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
  Node* deleteMiddleNode(Node* head)
  {
  	   //declare temp store head
  	   Node* temp=head;
  	   int N=0; // counting Node
  	   while(temp!=nullptr)
  	   {
  	   	   N++;
  	   	   temp=temp->next;
		 }
		  //middle ka previous node linkeList
		 int res=N/2;

		 temp=head;
		 while(temp!=nullptr)
		 {
		 	res--;
		 	if(res==0)
		 	{
		 		 Node* deleteNode=temp->next;
		 		 temp->next=temp->next->next;
		 		 delete deleteNode;
			 }
			 temp=temp->next;
		 }
  	  return head;
  }
   void printList(Node* head)
   { 
   	  while(head!=nullptr)
   	  {
   	  	   cout<<head->data<<" ";
   	  	   head=head->next;
		 }
		 cout<<endl;
		 
   }
int main(){
	 Node* head=new Node(2);
	 head->next=new Node(3);
	 head->next->next=new Node(4);
	 head->next->next->next=new Node(5);
	 head->next->next->next->next=new Node(3);
	 cout<<"before middle node delete Linked list"<<endl;
	 printList(head);
	
	 head=deleteMiddleNode(head);
	  cout<<"After Delete Middle Node "<<endl;
	 printList(head);
}