#include <iostream>
using namespace std;

int findcount(string a,char b){
    int count=0;
    for(int i=0;i<a.size();i++){
        if(tolower(a[i])==tolower(b)){
            count++;
        }
    }
    return count;
}

int main(){
    string a;
    getline(cin,a);
    char b;
    cin >> b;
    int count=findcount(a,b);
    cout << count;

return 0;
}