class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>S;
        for(auto i:nums)
        {
            S.insert(i);
        }

        if(S.size() == nums.size())
            return 0;
        return 1;
       
    }
};
