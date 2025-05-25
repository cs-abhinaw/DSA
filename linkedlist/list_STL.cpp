#include<iostream>
#include<list> // for including linkedlist
#include<iterator> // for iterate each node
using namespace std;

void print(list<int> ll){
    list<int>::iterator itr;
    
    for( itr=ll.begin(); itr!=ll.end();itr++){
        cout<<(*itr)<<"-->";
    }
}

int main(){
    list<int> ll;
    ll.push_front(2);
    ll.push_back(12);
    ll.push_front(122);
    print(ll);
    //for size of ll
    cout<<ll.size()<<endl;
    cout<<"head=: "<<ll.front(); //data of head
    cout<<"tail=: "<<ll.back();//data of tail
    //for pop items
    ll.pop_front();
    ll.pop_back();
    print(ll);
    return 0;
}