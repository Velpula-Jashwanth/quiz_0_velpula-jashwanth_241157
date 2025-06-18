#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> helloWorld(int n) {
    // Write your code here.
    vector<string> arr;
   for(int i=1;i<n+1;i++){
       if(i%15==0) arr.push_back("HelloWorld");
       else if(i%3==0) arr.push_back("Hello");
       else if(i%5==0) arr.push_back("World");
       else arr.push_back(to_string(i));
   }
   return arr;
}
