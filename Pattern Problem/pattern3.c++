#include<iostream>
using namespace std;
int main(){ 
  int n=5;
  for ( int i=1;i<n;i++){ 
    for ( int j=5;j>i;j--){
         cout<<" ";
    }
    for (int m=0;m<i;m++){
        cout<<"*";
    }

    for ( int k=5;k>i;k--){
         cout<<" ";
    }
    cout<<endl;
  }
  return 0; 
} 
