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
			next=next1;
		}
		public:
			Node(int data1)
			{
				data=data1;
				next=nullptr;
			}
};
//Function to reverse linked list
Node* reverseLinkedList(Node* head)
{
	Node* temp=head;
	Node* prev=NULL;
	while(temp!=NULL)
	{
		 // Store the next node in
       // 'front' to preserve the reference
		Node* front=temp->next;
		
		 // Reverse the direction of the
       // current node's 'next' pointer
       // to point to 'prev'
		temp->next=prev;
		
		// Move 'prev' to the current
        // node for the next iteration
       prev = temp;  
       
        // Move 'temp' to the 'front' node
        // advancing the traversal
       temp = front; 
		
	}
	return prev;
}
// Function to get the Kth node from
// a given position in the linked list
  Node* getKthNode(Node* temp,int k)
  {
  	k-=1;
  	while(temp!=NULL && k>0)
  	{
  		k--;
  		temp=temp->next;
	  }
	  return temp;
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
  Node* kReverse(Node* head,int k)
  {
  	 Node* temp=head;
  	 Node* prevLast=NULL;
  	 while(temp!=NULL)
  	 {
  	 	 Node* kThNode=getKthNode(temp, k);
  	 	 
  	 	 //if the kth node is null
  	 	 if(kThNode==NULL)
  	 	 {
  	 	 	 if(prevLast)
  	 	 	 {
  	 	 	 	 prevLast->next=temp;
				 }
				 break;
			}
			Node* nextNode=kThNode->next;
			kThNode->next=NULL;
			 reverseLinkedList(temp);
			 
			 if(temp==head)
			 {
			 	head=kThNode;
			 }
			else{
				prevLast->next=kThNode;
			}
			prevLast=temp;
			temp=nextNode;
	   }
	   return head;
  }
int main()
{
	Node* head=new Node(1);
	head->next=new Node(3);
	 head->next->next = new Node(3);
    head->next->next->next = new Node(7);
    head->next->next->next->next = new Node(9);
    head->next->next->next->next->next = new Node(2);
    
    //print the original list
    cout<<"Original Linked List:";
    printList(head);
    int k=2;
   head= kReverse( head,k);
   //print the reversed linked list
   cout<<"After K reverse linked list:";
   printList(head);
   return 0;
    
}