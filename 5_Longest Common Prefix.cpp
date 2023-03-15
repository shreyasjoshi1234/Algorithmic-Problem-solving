//https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
            return strs[0];
        string ans;
        int noteqf=0;
    for(int j=0;j<strs[0].size();j++)
    {
        int i=0;
        for(;i<strs.size()-1;i++)
        {
            string temp;
            if(strs[i][j]!=strs[i+1][j])
            {
                noteqf=1;
                break;
            }
        }
        if(noteqf==0)
        {
            ans.push_back(strs[i-1][j]);
        }
        
    }
       return ans;
    
    }
   
     
    
};