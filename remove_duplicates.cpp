string removeDuplicates(string str, int n)
{
    //Write your code here.
    string new_str="";
    new_str+=str[0];
    for(int i=1;i<n;i++){
        if(new_str.find(str[i])>400000) new_str+=str[i];
    }
    return new_str;
}
