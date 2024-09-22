#include <iostream>
using namespace std;

int getlen(string a){
    return a.size();
}
int main(){
    string a;
    getline(cin,a);
    int length=getlen(a);
    cout << length;

return 0;
}