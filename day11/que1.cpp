#include <iostream>
using namespace std;

bool check(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return 1;
        }
    }
    return 0;
}

int main(){
    int a;
    cin >> a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    if(check(arr,a,target)==1){
        cout << "Yes";
    }else{
        cout << "No";
    }

return 0;
}