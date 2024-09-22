#include <iostream>
using namespace std;

string add(string a,string b){
    return a+b;
}

int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    string ans=add(a,b);
    cout << ans;


return 0;
}