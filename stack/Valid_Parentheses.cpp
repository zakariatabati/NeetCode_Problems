class Solution {
public:
    bool isValid(string s) {
        stack<char>S;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=')' && s[i]!=']' && s[i]!='}')
            {
                S.push(s[i]);
            }
            else
            {
                if(s[i]==')')
                {
                    if(S.empty()==0 && S.top() == '(')
                    {
                        S.pop();
                    }
                    else
                        return false;
                }
                if(s[i]==']')
                {
                    if(S.empty()==0 && S.top() == '[')
                    {
                        S.pop();
                    }
                    else
                        return false;
                }
                if(s[i]=='}')
                {
                    if(S.empty()==0 && S.top() == '{')
                    {
                        S.pop();
                    }
                    else
                        return false;
                }
            }
        }
        return S.empty();
    }

};
