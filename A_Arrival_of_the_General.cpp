#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=0;
    int min=101;
    int max_index=0;
    int min_index=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            max_index=i;
        }
        else if(arr[i]<=min){
            min=arr[i];
            min_index=i;
        }
    }
        
}