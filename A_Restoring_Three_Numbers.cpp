#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    int nums[4] = {x1, x2, x3, x4};
    sort(nums, nums+4);
    int a = nums[3] - nums[0];
    int b = nums[3] - nums[1];
    int c = nums[3] - nums[2];
    cout<<a<<" "<<b<<" "<<c<<endl;    
}