// #include<iostream>
// using namespace std;
// int main(){
//      for(int i=0;i<=4;i++){
//       for(int j=0;j<=4-i-1;j++){
//         cout<<j;
//       }
//       cout<<endl;
//      }
// return 0;
// }

//functions
//the block of code used to call again and again .
// return_type function_name(argument){
//   do_somework 
//   return_some_work}
/* functions are decleard as global variable and we call inside in main  */
// #include<iostream>
// using namespace std;
// void sayhello(){
//   cout<<"hello world !";
//  };
// int main(){
     
//      sayhello();
// return 0;
// }
/* with parameter lets see */
// #include<iostream>
// using namespace std;
// int saysum(int a ,int b){
//   int sum = a+b;
//   return sum;
// }
// int main(){
//      cout<<saysum(3,2);
// return 0;
// }
/* 
#include<iostream>
using namespace std;
int reverse(int num){
  int rev=0;
  while(num>0){
    int lastdigit=num%10;
    rev= (rev*10)+lastdigit;
    num=num/10;
    
  }
  return rev;
}
int main(){
     int num = 112;
     int x=num;
   
        cout<<reverse(num);
    
return 0;
} */

#include<iostream>
using namespace std;
int main(){
     int decimalnum;
     int binarynum[32];
     int index=0;
     cout<<"enter a decimal number";
      cin>>decimalnum;
      int tempNum=decimalnum;

      if(decimalnum==0){
        cout<<"binary= 0";
        return 0;
      }
      while(decimalnum>0){
          binarynum[index]=decimalnum%2;
          decimalnum=decimalnum/2;
          index++;
      }
      cout<<"binary of "<<tempNum<<"is :";
       for(int i=index-1; i>=0;i--){
        cout<<binarynum[i];
       }
       cout<<endl;

return 0;
}