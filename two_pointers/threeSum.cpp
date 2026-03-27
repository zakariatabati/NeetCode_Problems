class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j=i+1,k=nums.size()-1;
            int target = -nums[i];
            vector<int> triple(3);
            while(j<k)
            {
                if(nums[j]+nums[k]<target)
                {
                    j++;
                }
                else if (nums[j]+nums[k]>target)
                {
                    k--;
                }
                else
                {
                    triple[0]=nums[i];
                    triple[1]=nums[j];
                    triple[2] = nums[k];
                    ans.push_back(triple);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                }
            }
        }
        return ans;

    }
};
