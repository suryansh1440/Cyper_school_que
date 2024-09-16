#include <iostream>
#include <algorithm>
using namespace std;
bool isPalindrome(string str){
    string a=str;
    string c="";
    for(int i=0;i<a.size();i++){
        char b=tolower(a[i]);
        if(b>='a' && b<='z'){
            c+=b;
        }
    }
    reverse(str.begin(),str.end());
    string d="";
    for(int i=0;i<str.size();i++){
        char b=tolower(str[i]);
        if(b>='a' && b<='z'){
            d+=b;
        }
    }
    if(c==d){
        return true;
    }else{
        return false;
    }

}

int main(){
    string str="A man, a plan, a canal, Panama";
    if(isPalindrome(str)==1){
        cout << true;
    }else{
        false;
    }
return 0;
}