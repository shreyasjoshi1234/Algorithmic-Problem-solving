// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s)
    {
        if(s.size()==1)
            return false;
        stack<char> par;
        int i=0;
        for(;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                par.push(s[i]);
            }

            if(s[i]==')' || s[i]==']' || s[i]=='}')
            {
                if(par.empty()==1)
                    return false;
                char temp=par.top();
                if(temp=='(' && s[i]!=')')
                {
                    return false;
                }
                if(temp=='[' && s[i]!=']')
                {
                    return false;
                }
                if(temp=='{' && s[i]!='}')
                {
                    return false;
                }
                par.pop();
            }
        }
        if(par.empty()==0)
            return false;
        return true;
    }
};