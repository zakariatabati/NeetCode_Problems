class Solution {
public:
    bool alphanum_check(char c)
    {
        return (
            (c>='A' && c<='Z')||
            (c>='a' && c<='z')||
            (c>='0' && c<='9')
        );
    }
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while (i<j)
        {
            while(i<j && !alphanum_check(s[i]))
            {
                i++;
            }
            while(j>i && !alphanum_check(s[j]))
            {
                j--;
            }
            if(tolower(s[i])!=tolower(s[j]))
            {
                return false;
            }
            i++;j--;
        }
        return true;
        
    }
};
