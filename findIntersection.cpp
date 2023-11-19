//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    if(n)
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    else cout<< " ";
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        Node* resultHead = nullptr;
    Node* resultTail = nullptr;

    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data == head2->data) {
            // Add the common element to the new linked list
            Node* newNode = new Node(head1->data);
            if (resultHead == nullptr) {
                resultHead = resultTail = newNode;
            } else {
                resultTail->next = newNode;
                resultTail = newNode;
            }

            // Move both pointers forward
            head1 = head1->next;
            head2 = head2->next;
        } else if (head1->data < head2->data) {
            // Move the pointer of the smaller list forward
            head1 = head1->next;
        } else {
            // Move the pointer of the smaller list forward
            head2 = head2->next;
        }
    }

    return resultHead;

    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Solution ob;
	    Node* result = ob.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends
