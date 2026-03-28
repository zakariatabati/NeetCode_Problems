class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int>S;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/")
            {
                int x;
                x = stoi(tokens[i]);
                S.push(x);
            }
            else
            {
                if(tokens[i]=="+")
                {
                    int a,b;
                    b = S.top();
                    S.pop();
                    a=S.top();
                    S.pop();
                    S.push(a+b);
                }
                if(tokens[i]=="-")
                {
                  int a,b;
                    b = S.top();
                    S.pop();
                    a=S.top();
                    S.pop();
                    S.push(a-b);  
                }
                if(tokens[i]=="*")
                {
                    int a,b;
                    b = S.top();
                    S.pop();
                    a=S.top();
                    S.pop();
                    S.push(a*b);
                }
                if(tokens[i]=="/")
                {
                    int a,b;
                    b = S.top();
                    S.pop();
                    a=S.top();
                    S.pop();
                    S.push(a/b);
                }
            }
        }
        return S.top();
        
    }
};
