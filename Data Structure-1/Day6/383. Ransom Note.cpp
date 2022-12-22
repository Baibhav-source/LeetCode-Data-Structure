class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int len1 = ransomNote.length();
        int len2 = magazine.length();
        unordered_map<char,int> map;
        for(int i = 0;i<len2;i++){
            if(map[magazine[i]]==0)
                map[magazine[i]] = 1;
            else
                map[magazine[i]]++;
        }
        for(int i = 0;i<len1;i++){
            if(map[ransomNote[i]]>0)
                map[ransomNote[i]]--;
            else
                return false;    
        }
        return true;
    }   
};
