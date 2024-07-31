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
 int  detectCycle(Node* head)
 {
 	 Node* slow=head;
 	 Node* fast=head;
 	 while(fast!=nullptr && fast->next!=nullptr)
 	 {
 	 	 slow=slow->next;
 	 	 fast=fast->next->next;
 	 	 if(slow==fast)
 	 	 {
 	 	 	 int cnt=1;
 	 	 	 fast=fast->next;
 	 	 	 while(slow!=fast)
 	 	 	 {
 	 	 	 	   cnt++;
 	 	 	 	   fast=fast->next;
				}
				return cnt;
		   }
	  }
	  return 0 ;
 }
    // find beginning node of loop 
    //linked list
//    Node* getStartingNode(Node* head)
//    {
//    	 if(head==NULL)
//    	 {
//    	 	return NULL;
//		 }
//		// Node*  intersection=detectCycle( head);
//		 Node* slow=head;
//		 while(slow!=intersection)
//		 {
//		 	 slow=slow->next;
//		 	 intersection=intersection->next;
//		 }
//		 return slow;
//	}
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

    // Check if there is a loop 
    // n the linked list
//    if (detectCycle(head)) {
//        cout << "Loop detected in the linked list." << endl;
//    } else {
//        cout << "No loop detected in the linked list." << endl;
//    }
 
//     Node* loop=getStartingNode(head);
//     cout<<"loop start at:"<<loop->data<<endl;

      int looplength= detectCycle(head);
       if(looplength>0)
       {
       	  cout<<"length of loop cycle is:"<<looplength<<endl;
	   }
	   else{
	   	     cout<<"length of loop"<<looplength<<endl;
	   }
    // Clean up memory (free the allocated nodes)
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}