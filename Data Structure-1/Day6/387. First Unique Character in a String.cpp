class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map;
        for(int i = 0;i<s.length();i++){
            if(map.count(s[i])==0)
                map[s[i]] = 1;
            else
            map[s[i]] = map[s[i]] + 1;
        }
        for(int i = 0;i<s.length();i++)
            if(map[s[i]]==1)
                return i;
         return -1;        
    }
    
};
