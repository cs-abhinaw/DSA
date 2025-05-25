// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // class stack {
// //     private:
// //     vector<int> vec;
// //     public:
// //     void push(int val){
// //         vec.push_back(val);
// //         cout<<"valued psued in the stack"<<val<<endl;

// //     }
// //     void pop(){
// //         if(isempty()){
// //             cout<<"stack is empty";;
// //             return;
// //         }
// //         vec.pop_back();//before it we have to  know elements are rest in the stack or not
// //         cout<<"emlement poped";
// //     }
// //     int top(){
// //         if(isempty()){
// //             cout<<"stack is empty";
// //             return -1;
        
// //         }
// //         int idx=vec.size()-1;
// //         return vec[idx];

// //     }
// //     bool (isempty()){
// //         return vec.empty();
// //     }

// // };

// // int main(){
// //      stack s;
// //      s.push(12);
// //      s.push(12);
// //      s.top();
// //      s.pop();
// // return 0;
// // }
// #include<iostream>
// #include<vector>
// using namespace std;
// class stack {
//     private:
//     vector<int> vec;
//     public:
//     void push_back(int val){
//         vec.push_back(val);
//         cout<<"valued pushed"<<val<<endl;
//     }
//     void pop(){
//         if(isempty()){
//             cout<<"empty stack or underflow";
//             return;
//         }
//         vec.pop_back();
//     }
//     int top(){
//         if(isempty()){
//             return -1;
//         }
//         int idx=vec.size()-1;
//         return vec[idx];
//     }
//     bool isempty(){
//       return  vec.empty();
//         };
// };
// int main(){
//      stack s;
//      s.push_back(12);
//      s.push_back(12);
//      s.push_back(12);
//      s.push_back(12);

//      while(!s.isempty()){
//         cout<<s.top()<<",";
//         s.pop();
//      }
// return 0;
// }

// template calss
// #include<iostream>
// #include<string>
// // #include<stack>
// #include<list>
// using namespace std;
// template <class t>
// class stack{
//     list <t> ll;
//     public:
//     void push(t val){
//         ll.push_back(val);
//     }
//     void pop(){
//         ll.push_front();
//     }
//     t top(){
//         ll.pop_front();
//     }
//     bool isempty(){
//         return list.size()==0;
//     }
// };
// int main(){
//      stack <char> s;
//      s.push('A');
//     //  s.push(2);
//     //  s.push(2);
//     //  s.push(2);
//     //  s.push(2);
//      while(!s.isempty()){
//         cout<<s.top()<<" "<<endl;
//      }
// return 0;
// }

// sum problem 
#