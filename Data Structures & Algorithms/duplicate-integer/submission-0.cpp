class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int a:nums)
        {
            mpp[a]++;
            if(mpp[a]>=2)
            {
                return true;
            }
        }
        return false;        
    }
};