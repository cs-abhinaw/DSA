#include <iostream>
#include <vector>// declear vector here 
using namespace std;
class stack // declear clss named as a stack.
{
private:
    vector<int> vec; // in stack we will declear vector of data type int named vec

public:
    void push(int val)// now we have a function as push to our stack in a paramerter
                    // named value as val ok?
    {
        vec.push_back(val); // now we will push the value in stack with given f(x)
        cout << "pushed in the stack : " << val << endl;//here it will show the val
    }
    void pop() // now we will pop the element with it
    {
        if (isempty()) // is empty f(x) is used to check stck is empty or not. right?
        {
            cout << "stack is empty : " << endl;
            return;
        }
        vec.pop_back(); // this f(x will remove the element from stack)
    }
    int top() // this f(x) shows the top elemt of stack right?
    {
        if (isempty()) //this if stateemtn will show the stack is empty and return 
        //nothing.
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        int lastidx = vec.size() - 1;// we need a lastidx val to show the top element
        // and return the last value
        return vec[lastidx];
    }
    bool(isempty()) // here check the is our stck is empty or not 
    {
        return vec.empty(); // if its empty it will tell its empty by vec.empty().
    }
};

int main()
{
    stack s; //decleared stack s to call the class functions 
    s.push(12);// here data are pushed one by one
    s.push(19);
    s.push(12);
    s.push(10);
    s.pop();// pop operations are poped the element 
    s.pop();

    while (!s.isempty()) // while statement is run until the stack is empty 
    {
        cout << s.top() << "  ";// shows the top element s.top( ) 
        s.pop();// now finally we will remove the element.
    }
    return 0;
}

// thx guys abhi..