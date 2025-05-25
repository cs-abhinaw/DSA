#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
    class list
    {
    private:
        node *head;
        node *tail;

    public:
        list()
        {
            head = NULL;
            tail = NULL;
        }

        void pushfront(int val){
            node* newnode = new node(val);
            if(head=NULL){
                head=tail=newnode;
            }
            else{
                newnode->next=head;
                head=newnode;
            }
        }
        void pushback(int val){
            node * newnode = new node(val);
            if(head==NULL){
                head= tail= newnode;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
        }
        // void iterative(int x){
        //     node * temp=head;
        //     int idx=0;
        //     while(temp!=NULL){
        //         if(temp->data==x){
        //            return idx;
        //         }
        //         temp=temp->next;
        //         idx++;
        //     }
        //     return -1;
        // }

        int helper( node* temp, int key){
            if(temp==NULL){
                return -1;
            }
            if(temp->data==key){
                return 0;
            }
           int idx= helper(temp->next,key); 
           if(idx==-1){
            return -1;
           }
           return idx+1; 
        }
        int searchrec(int key){
            return helper(head,key);
            cout<<endl;
        }
        void printlist(){
            node* temp =head;
            while(temp!=NULL){
                cout<<temp->data<<"-->";
                temp=temp->next;
            }
            cout<<"NULL";
        }
    };

int main()
{
list ll;
ll.pushfront(12);
ll.pushfront(1);
ll.pushfront(102);
ll.pushback(324);

ll.printlist();
cout<<ll.searchrec(324);
    return 0;
}
