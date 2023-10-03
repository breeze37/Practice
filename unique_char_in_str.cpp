class Solution {
public:
    int firstUniqChar(string s) {
      unordered_map<string, int> mp; 
      int n = s.length();
      for(int i=0; i<n; i++){
        if(mp.find(s[i])!=mp.end()){
          mp[s[i]]++;
        }
        else{
          mp[s[i]]=1;
        }
      }
      for(auto it:mp){
        if(mp[s[i]]==1){
          return i;
        }
      }
      return -1;


    }
};