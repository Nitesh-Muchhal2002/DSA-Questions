#include<bits/stdc++.h>
using namespace std;
class Node{
	 public:
	int data;
	Node* next;
	
	public:
		Node(int val,Node* next1)
		{
			data=val;
			next =next1;
		}
		public:
			Node(int val)
			{
				data=val;
				next=nullptr;
			}
};
  Node* rotateRight(Node* head,int k)
  {
  	if(head==NULL || head->next==NULL || k==0) return head;
  	
// calculating Length
    Node* temp=head;
    int length=1;
    while(temp->next!=NULL)
    {
    	 ++length;
    	 temp=temp->next;
	}
	 //link last node to first node
	temp->next=head;
     //when k is more than length
   k=k%length;
     //to get end of the list
     int end=length-k;
     while(end--) temp=temp->next;
     
     //breaking last node link and pointing to NULL
     head=temp->next;
     temp->next=NULL;
     return head;
  }

 void printList(Node* head)
 {
 	 while(head->next!=nullptr)
 	 {
 	 	cout<<head->data<<"->";
 	 	head=head->next;
	  }
	  cout<<head->data<<endl;
	  return;
 }
int main()
{
	Node* head=new Node(1);
	head->next=new Node(2);
	head->next->next=new Node(3);
	head->next->next->next=new Node(4);
	cout<<"Original Linked List:"<<" ";
	printList(head);
	
	int k=5;
	Node* newHead=rotateRight(head,k);
	cout<<"After"<<k<<"rotation linkedList:";
	printList(newHead);
}