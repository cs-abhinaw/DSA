#include <iostream>
#include <stack>
using namespace std;
int main()
{
     stack<int> s;
     s.push(20);
     s.push(2);
     // s.push(20);
     cout << "top element" << s.top() << endl;
     s.pop();
     cout << "top element after top" << s.top() << endl;
     if (s.empty())
     {
          cout << "stack is empty";
     }
     else
          {
               cout << "stack is not empty";
          }
     cout << "stack elements :";
     while (!s.empty())
     {
          cout << s.top() << " ";
          s.pop();
     }
     return 0;
}