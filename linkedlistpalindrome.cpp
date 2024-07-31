#include<bits/stdc++.h>
using namespace std;
// Node class represents a
// node in a linked list
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
   bool  isPalindrome(Node* head)
   {
   	   // Create an empty stack
    // to store values
   	   stack<int>st;
   	   
   	    // Create an empty stack
    // to store values
   	   Node* temp=head;
   	   
   	     // Traverse the linked list and
    // push values onto the stack
   	   while(temp!=NULL)
   	   {
   	   	  // Push the data from the
        // current node onto the stack
   	   	   st.push(temp->data);
   	   	   
         // Move to the next node
   	   	   temp=temp->next;
		  }
		  // Reset the temporary pointer back
    // to the head of the linked list
		  temp=head;
		  
		      // Compare values by popping from the stack
    // and checking against linked list nodes
		  while(temp!=NULL)
		  {
		  	 if(temp->data!=st.top())
		  	 {
		  	 	  // If values don't match,
            // it's not a palindrome
		  	 	 return false;
			   }
			   st.pop();
		  	 	 temp=temp->next;
		  }
		  
     // If all values match,
     // it's a palindrome
		  return true;
   }
   // Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
	Node* head= new Node(2);
	head->next= new Node(3);
	head->next->next=new Node(9);
	head->next->next->next=new Node(3);
		head->next->next->next->next=new Node(2);
		// Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Check if the linked list is a palindrome
    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}

