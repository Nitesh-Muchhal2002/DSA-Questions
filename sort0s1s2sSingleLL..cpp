#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
   int data;
   Node* next;
   public:
   	Node(int data1, Node* next1)
  {
  	 data=data1;
  	 next=next1;
  }
  Node (int data1)
  {
  	data=data1;
  	next=nullptr;
  }
   	
};
 Node* sort0s1s2s(Node* head)
 {
 	Node* temp=head;
    int cnt0=0,cnt1=0,cnt2=0;
    while(temp!=NULL)
    {
    	 if(temp->data==0) cnt0++;
    	 else if(temp->data==1) cnt1++;
    	 else cnt2++;
    	 temp=temp->next;
	}
	temp=head;
	while(temp!=NULL)
	{
		 if(cnt0)
		 {
		 	temp->data=0;
		 	cnt0--;
		 }
		 else if(cnt1)
		 {
		 	 temp->data=1;
		 	 cnt1--;
		 }
		 else {
		 	  temp->data=2;
		 	  cnt2--;
		 }
		 temp=temp->next;
	}
	return head;
 }
   void print(Node* head)
   {
   	 Node* temp=head;
	 	while(temp!=NULL)
	 	{
	 		cout<<temp->data<<" ";
	 		temp=temp->next;
		 }
		 cout<<endl;
   }
     //Optimal solution O(n) TC O(1) SC
   Node* segregate(Node* head)
   {
   	  
   	   //create Dummy Node
   	    Node* zeroDummy=new Node(-1);
		Node* oneDummy=new Node(-1);
   	  Node* twoDummy=new Node(-1);
   	  
   	  //traverse the node
   	Node* zero=zeroDummy;
   	  Node* one=oneDummy;
   	  Node* two=twoDummy;
   	  
    Node* temp=head;
    while(temp)
    {
    	if(temp->data==0)
    	{
    		zero->next=temp;
    		zero=zero->next;
		}
	  else	if(temp->data==1)
		{
			one->next=temp;
			one=one->next;
		}
		else{
			two->next=temp;
			two=two->next;
		}
		temp=temp->next;
	}
	  zero->next=(oneDummy->next)?(oneDummy->next):(twoDummy->next);
	  one->next=twoDummy->next;
	  two->next=NULL;
	  Node* newHead=zeroDummy->next;
	  delete zeroDummy;
	  delete oneDummy;
	  delete twoDummy;
	  return newHead;
   }
int main()
{
	Node* head=new Node(1);
	head->next=new Node(0);
	head->next->next=new Node(1);
	head->next->next->next=new Node(1);
	head->next->next->next->next=new Node(2);
	head->next->next->next->next->next=new Node(0);
    head->next->next->next->next->next->next=new Node(2);
    
	cout<<"orginal Linke list:"<<endl;
    print(head);
    
    cout<<"After Sort 0S 1s and 2s"<<endl;
	segregate( head);
	print(head);
	return 0;
}
