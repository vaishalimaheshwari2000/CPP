#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};

class Solution{
    public:
       Node* insert(Node* &head,int data)
      {  Node* val = new Node(data);
          if(head==NULL)
             { head = val;
              return head;}
          Node* v = head;
          while(v->next!=NULL)
            { v = v->next; } 
          
          v->next = val;
        return v;
     }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}
