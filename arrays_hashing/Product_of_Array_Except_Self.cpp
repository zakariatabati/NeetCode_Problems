class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        vector<int>p(nums.size()+2,1);
        vector<int>s(nums.size()+2,1);
        for(int i=1;i<=nums.size();i++)
        {
            p[i] = p[i-1]*nums[i-1];
           // cout<<p[i]<<" ";

        }
        cout<<endl;
        
        for(int i=1;i<=nums.size();i++)
        {
            s[i] = s[i-1]*nums[nums.size()-i];
            //cout<<s[i]<<" ";
        }
    for(int i=1;i<=nums.size();i++)
        ans.push_back(p[i-1]*s[nums.size()-i]);
    
    return ans;
        
    }
    
};
