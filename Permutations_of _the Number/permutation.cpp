#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>a={4,1,2,3};
    next_permutation(a.begin(),a.end());
    int i=0,r=a.size()-1;
    int temp;
    while(i<r){
        temp=a[r];
        a[r]=a[i];
        a[i]=temp;
        i++;r--;
    }
    for(int i:a){
        cout<<i;
    }
    
    return 0;
}


//recursive Approach for find the permutation 

void permute(std::vector<int> &arr, int start, int end, std::vector<std::vector<int>> &result) {
    if (start == end) {
        result.push_back(arr);
    } else {
        for (int i = start; i <= end; ++i) {
            std::swap(arr[start], arr[i]);
            permute(arr, start + 1, end, result);
            std::swap(arr[start], arr[i]); // backtrack
        }
    }
}



/// leetcode 51 Next permutation without function 

