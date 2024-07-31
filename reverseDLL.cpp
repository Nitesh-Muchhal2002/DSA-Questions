#include<bits/stdc++.h>
using namespace std;
 class Node{
 	  public:
 	  	int data;
 	  	Node* next;
 	  	Node* prev;
      public:
      Node(int data1,Node* next1,Node*prev1)
	  {
	  	  data=data1;
	  	    next=next1;
	  	    prev=prev1;
		  }	
		  public:
		  Node(int data1)
		  {
		    data=data1;
		    next=nullptr;
		    prev=nullptr;
		  }
	};
	Node* ArrDLL(vector<int>&arr)
	{
		Node* head= new Node{(arr[0])};
		Node* prev=head;
		 for(int i=1;i<arr.size();i++)
		 {
		 	 Node* temp=new Node(arr[i],nullptr,prev);
		 	 prev->next=temp;
		 	 prev=temp;
		 }
		return head;
	}
	void print(Node* head)
	{
		while(head!=NULL)
		{
			 cout<<head->data<<" ";
			 head=head->next;
		}
	}
  Node* reverseDLL(Node* head)
  {
  	
  	 stack<int>st;
  	 Node* temp=head;
  	 while(temp!=NULL)
  	 {
  	 	st.push(temp->data);
  	 	temp=temp->next;
	   }
	   temp=head;
	   while(temp!=NULL)
	   {
	   	 temp->data=st.top();
	   	 st.pop();
	   	 temp=temp->next;
	   }
	   return head;
  }

int main()
{
	 vector<int>arr={3,5,8,30};
	  Node* head= ArrDLL(arr);
	  cout<<"LinkedList before revers"<<endl;
	  print(head);
	  cout<<endl;
	  cout<<"Linked List after reverse"<<endl;
	   head=reverseDLL(head);
	   print(head);
}
