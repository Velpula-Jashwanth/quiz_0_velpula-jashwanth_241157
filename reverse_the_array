#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr , int m) {
    // Write your code here
    int l=arr.size();
    for(int i=m+1;i<(l+m+1)/2;i++){
        int temp=arr[i];
        arr[i]=arr[l-i+m];
        arr[l-i+m]=temp;
    }
    
}
