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
	
	//lenght of linked list
	int lengthofLL(Node* head)
	{
		int cnt=0;
		  Node* temp=head;
       while(temp)
       {
       	 
       	 temp=temp->next;
       	 cnt++;
	   }
	   return cnt;
	}
       // search in linkedlist
 int checkIfPresent(Node* head,int val)
 {
 	  Node* temp=head;
       while(temp)
       {
       	 if(temp->data==val) return 1;
       	 temp=temp->next;
       	 
	   }
	   return 0;
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
   //Remove head
  Node* removeHead(Node* head)
  {
  	if(head==NULL) return head;
  	Node* temp=head;
  	head=head->next;
  	delete temp;
  	return head;
  }
  Node* deleteTail(Node* head)
  {
  	if(head==NULL || head->next==NULL) return NULL;
  	Node* temp=head;
  	while(temp->next->next!=NULL)
  	{
  		 temp=temp->next;
	  }
	  delete temp->next;
	   temp->next=nullptr;
	  return head;
  }
  //delete kth node
	 Node* removeK(Node* head,int k)
	 {
	 	if(head==NULL) return head;
	 	if(k==1)
	 	{
	 		Node* temp=head;
	 		head=head->next;
	 		delete temp;
	 		return head;
		 }
		 int cnt=0;
		 Node* temp=head;
		 Node* pre=NULL;
		 while(temp!=NULL)
		{
			cnt++;
			if(cnt==k)
			{
				pre->next=pre->next->next;
				delete temp;
				break;
			}
			pre=temp;
			temp=temp->next;
		}
		return head;
}


	 // delete postion of element
	  Node* removeEl(Node* head,int el)
	 {
	 	if(head==NULL) return head;
	 	if(head->data==el)
	 	{
	 		Node* temp=head;
	 		head=head->next;
	 		delete temp;
	 		return head;
		 }
		
		 Node* temp=head;
		 Node* pre=NULL;
		 while(temp!=NULL)
		{
			if(temp->data==el)
			{
				pre->next=pre->next->next;
				delete temp;
				break;
			}
			pre=temp;
			temp=temp->next;
		}
		return head;
	 }
int main()
{
	vector<int>arr={29,4,5,6};
       Node* head=convertArr2LL(arr);
       //travesre linked list
//       Node* temp=head;
//       while(temp)
//       {
//       	 cout<<temp->data<<" ";
//       	 temp=temp->next;
//	   }
//	   cout<<endl;
//	   
//	   cout<<lengthofLL(head);
      // cout<<checkIfPresent(head,5);
//       head=removeHead(head);
//        print(head);
//          head=deleteTail(head);
//          print(head);
            head=removeEl(head,4);
            print(head);
}