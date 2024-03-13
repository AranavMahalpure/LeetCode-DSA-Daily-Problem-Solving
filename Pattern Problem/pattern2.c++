#include<iostream>
using namespace std;
int main(){ 
  int n=5;
for (int i=0;i<n;i++){
     for (int j=5;j>i;j--){
         cout<<"*";
     }
      cout<<endl;
}
return 0;
}




// output 
// *****
// ****
// ***
// **
// *