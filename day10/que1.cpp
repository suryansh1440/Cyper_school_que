#include <iostream>
using namespace std;
int findMax(const int arr[], int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={1,2,3,4,6,9,8,8};
    cout << findMax(arr,8);
    return 0;
}