class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        set<char> my_set;
        int l=0;
        for(int r=0;r<s.size();r++)
        {
            while (my_set.count(s[r])==1)
            {
                my_set.erase(s[l]);
                l++;
            }
            ans = max(ans,(r-l)+1);
            my_set.insert(s[r]);
        }
        return ans;
        
    }
};
