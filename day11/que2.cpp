#include <iostream>
using namespace std;

int find(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
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
    int index=find(arr,a,target);
    cout << index;

return 0;
}