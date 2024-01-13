//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    
    Node* reverse(Node* head) {
        if(!head || !head->next)
            return head;
        Node* prev = NULL;
        Node* ptr = head;
        
        while(ptr) {
            Node* temp = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = temp;
        }
        return prev;
    }
    
    Node* insertionSort(Node* head) {
        
        //Sort in descending order
        Node*newHead = new Node(INT_MAX);
        Node*ptr = head;
        
        while(ptr) {
            
            Node* ptr2 = newHead;
            Node* prev = NULL;
            
            while(ptr2 and ptr2->data >= ptr->data) {
                prev = ptr2;
                ptr2 = ptr2->next;
            }
            
            Node* after = ptr2;
            prev->next = ptr;
            ptr = ptr->next;
            prev = prev->next;
            prev->next = ptr2;
        }
    
        //Reverse and Return
        return reverse(newHead->next);
    }
};




//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends