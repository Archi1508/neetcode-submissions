class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        unordered_map<char,int>mp1,mp2;
        // for(int i=0;i<s.size();i++)
        // {
        //     char c=s[i];
        //     mp1[c]++;
        // }  // this is how range based loop works
        for(char c:s)
        {
            mp1[c]++;
        }
        for(char c:t)
        {
            mp2[c]++;
        }
        return mp1==mp2;
    }
};
