#include<iostream>
using namespace std;
class node{
public:
int data ;
node* next;
node(int val){
    data= val;
    next=NULL;
}
};
class list{
    private:
    node * head;
    node * tail;
    public:
    list()
    {
        head=NULL;
        tail=NULL;
    }
    void pushfront(int val){
        node *newnode =new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void pushback(int val){
        node * newnode= new node(val);
        if(head==NULL){
            head =tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void reverse(){
        node* curr=head;
        node *prev=NULL;
        while(curr!=NULL){
            node*next=curr->next;
            curr->next=prev;
            //updation for enxt iteration
            prev=curr;
            curr=next;
        }
            head=prev;
    }
    void print(){
        node*temp =head;
        while(head!=NULL){
            cout<<temp->data<<"-->";
            temp=temp->next;
            
        }
       
       
    }
};
int main(){
     list ll;
     ll.pushfront(12);
     ll.pushfront(1);
     ll.pushfront(2);
     ll.pushback(23);
     ll.print();
    ll.print();
return 0;
}