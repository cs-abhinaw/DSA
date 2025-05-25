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
public:
    node *head;
    node *tail;
    // public:
    list()
    {
        head = NULL;
        tail = NULL;
    }
    void pushfront(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void printlist()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "-->";
            temp = temp->next;
           
        }
    }
    bool iscycle(node *head)
    {
        node *slow = head;
        node *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow)
            {
                cout << "cycle detected";
                return true;
            }
        }
        return false;
    }
    bool removecycle(node *head)
    {
        node *slow = head;
        node *fast = head;
        bool iscycle = false;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                cout << "cycle detected";
                iscycle = true;
                break;
            }
        }
        if(!iscycle){
            cout<<"cycle dosen't exist";
           
        }
        slow = head;
        if(slow == fast){
            while(fast->next != slow){
                fast= fast->next;
            }
            fast->next= NULL;
        }
        else{
            node *prev = fast;
            while (slow != fast)
            {
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = NULL; // delete the cycle
            cout<<"cycle deletde";
        }
        return true;
    }
    
};

int main()
{
    list ll;
    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);
    ll.pushfront(4);
    ll.tail->next = ll.head;
    ll.removecycle(ll.head);
        //   ll.iscycle(ll.head);
    ll.printlist();
    return 0;
}
