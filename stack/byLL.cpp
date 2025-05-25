#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
// create class using linked list with using template literals
template<class t>
class stack{
  list <t> ll;
    public:
    void push(t val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    t top(){
        return ll.front();
    }
    bool isempty(){
        return list.size()==0;
    }
};
int main(){
 stack <int> s;
 s.push(3);
 s.push(2);
 while(!s.isempty()){
    cout<<s.top()<<" "<<endl;
 }    
return 0;
}