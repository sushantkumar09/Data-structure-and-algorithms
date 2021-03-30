#include <iostream>
#include <string>
using namespace std;
int slength(string s){
    int i;
    for(i=0;s[i]!='\0';i++){}
    return i;
}

void upper_to_lower(string s){
    int i;
    for(i=0;i<slength(s);i++){
        s[i]+=32;
    }
    cout<<s<<endl;;
}

string reverse_string(string s){
    int i,j;
    char t;
    j=slength(s)-1;
    for(i=0;i<j;i++,j--){
        t=s[i];
        s[i]=s[j];
        s[j]=t;
        }
        return s;
}
//without copying into another string
bool is_palindrome(string s){
    int i,j;
    for(i=0,j=slength(s)-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            return false;
        }
        
    }
    return true;
    
}
int main(){
    string s;
    getline(cin,s);
    cout<<slength(s)<<endl;
    upper_to_lower(s);
    cout<<reverse_string(s)<<endl;
    if(is_palindrome(s))
        cout<<"is palindrome"<<endl;
    else
        cout<<" not a palindrome"<<endl;
        
        
}  