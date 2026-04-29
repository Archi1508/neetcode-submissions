class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        int s = strs[0].length();
        string ans = "";

        for(int i = 0; i < s; i++)
        {
            for(int j = 1; j < strs.size(); j++)
            {
                // 🔑 Key condition
                if(i >= strs[j].length() || strs[j][i] != strs[0][i])
                {
                    return ans;
                }
            }

            // ✅ Add only once after all strings matched
            ans.push_back(strs[0][i]);
        }

        return ans;
    }
};