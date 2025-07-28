#include <iostream>
using namespace std;
int main() {
   float num1,num2,difference,quotient;
   cout<<"Enter the first number:";
   cin>>num1;
   cout<<"Enter the second number:";
   cin>>num2;
   difference=num1-num2;
   if(num2!=0){
       quotient=num1/num2;
       cout<<"difference="<<difference<<endl;
       cout<<"quotient="<<quotient;
   }
   else{
       cout<<"difference="<<difference<<endl;
        cout<<"quotient=undefined";
   }
   return 0;
}
