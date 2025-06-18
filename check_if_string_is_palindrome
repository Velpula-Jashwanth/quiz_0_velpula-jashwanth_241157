#include <bits/stdc++.h> 
#include <iostream>
#include <string>

bool checkPalindrome(string s)
{
    // Write your code here.
    string output="";
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90) s[i]+=32;
        if(isalnum(s[i])){
            output+=s[i];
        }
        
    }
    int l=output.length();
    int c=0;
    for(int i=0;i<l/2;i++){
        if(output[i]==output[l-i-1]) c++;
    }
    return c==l/2;
}
