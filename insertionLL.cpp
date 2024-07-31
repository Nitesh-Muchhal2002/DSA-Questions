#include<bits/stdc++.h>
using namespace std;
struct Node{
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
//convert array to linked list
	Node* convertArr2LL(vector<int>&arr)
	{
		Node* head=new Node(arr[0]);
		Node* mover=head;
		for(int i=1;i<arr.size();i++)
		{
			Node* temp=new Node(arr[i]);
			mover->next=temp;
			mover=temp;
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
		   cout<<endl;
   }
    //insert head
   Node* insertHead(Node* head,int val)
   {
   	Node* temp=new Node(val,head);
   	return temp;
   }
    //insert tail element
    Node* insertTail(Node* head,int val)
    {
    	if(head==NULL) {
    		return new Node(val);
		}
		Node* temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		Node* newNode=new Node(val);
		temp->next=newNode;
		return head;
	}
	
	  //insert postion 
	  Node* insertPosition(Node* head,int el,int k)
	  {
	  	if(head==NULL)
	  	{
	  		if(k==1)
	  		{
	  			return new Node(el);
			  }
			  else{
			  	return head;
			  }
		  }
		  if(k==1)
		  {
		  	 return new Node(el,head);
		  }
		  int cnt=0;
		  Node* temp=head;
		  while(temp!=NULL)
		  {
		  	cnt++;
		  	if(cnt==(k-1))
		  	{
		  		Node* x=new Node(el,temp->next);
		  		temp->next=x;
		  		break;
		  		
			  }
			  temp=temp->next;
		  }
		  return head;
	  }
	  //insert beforeValue 
	  Node* insertbeforevalue(Node* head,int el,int val)
	  {
	  	if(head==NULL)
	  	{
	  		 return NULL;
		  }
		  if(head->data==val)
		  {
		  	 return new Node(el,head);
		  }
		  Node* temp=head;
		  while(temp->next!=NULL)
		  {
		  	if(temp->next->data==val)
		  	{
		  		Node* x=new Node(el,temp->next);
		  		temp->next=x;
		  		break;
		  		
			  }
			  temp=temp->next;
		  }
		  return head;
	  }
   int main()
{
	vector<int>arr={29,4,5,6};
       Node* head=convertArr2LL(arr);
     //  head=insertTail(head,9);
     
      head=insertbeforevalue(head,120,6);
      
       print(head);
   }
	