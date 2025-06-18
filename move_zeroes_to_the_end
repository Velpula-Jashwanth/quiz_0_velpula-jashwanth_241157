#include <iostream>
#include <vector>

using namespace std;

void pushZerosAtEnd(vector<int> &arr) 
{
	// Write your code here.
	vector<int> temp;
	int c=0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]==0) c++;
		else temp.push_back(arr[i]);
	}
	for(int i=0;i<c;i++){
		temp.push_back(0);
	}
	for(int i=0;i<arr.size();i++){
		arr[i]=temp[i];
	}
}
