#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string onl="";
    cin >> onl;
    int count=0;
    int n = onl.size();
    sort(onl.begin(), onl.end());
    for(int i=0;i<n;i++){
        if(onl[i]!=onl[i+1]){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}

