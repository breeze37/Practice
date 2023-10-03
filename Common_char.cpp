#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    vector<string> lul;
    while(!cin.fail()){
        string g;
        cin>>g;
        lul.push_back(g);
    }
    lul.pop_back();
    int n=lul.size();
    unordered_map<char,int> mp;
    for(int i=0;i<lul[0].size();i++){
        if(mp.find(lul[0][i])!=mp.end()){
            mp[lul[0][i]]++;
        }
        else{
            mp[lul[0][i]]=1;
        }
    }
    for(int i=1;i<n;i++){
        unordered_map<char,int> mpp;
        for(int j=0;j<lul[i].size();j++){
            if(mpp.find(lul[i][j])!=mpp.end()){
                mpp[lul[i][j]]++;
            }
            else{
                mpp[lul[i][j]]=1;
            }
        }
        vector<char> hum;
        for(auto itr:mp){
            if(mpp.find(itr.first)!=mpp.end()){
                if(mpp[itr.first]!=itr.second){
                    mp.erase(mp.find(itr.first));
                }
            }
            else{
                hum.push_back(itr.first);
            }
        }
        for(int i=0;i<hum.size();i++){
            mp.erase(hum[i]);
        }
    }
    vector<char> gignesh;
    for(auto itr:mp){
        for(int i=0;i<itr.second;i++){
            gignesh.push_back(itr.first);
        }
    }
    n=gignesh.size();
    for(int i=0;i<n;i++){
        cout<<gignesh[i]<<" ";
    }
}