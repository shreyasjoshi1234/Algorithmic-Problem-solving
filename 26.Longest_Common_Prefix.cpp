//https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans;
        int noteqf=0;
    for(int j=0;j<strs[0].size();j++)
    {
        for(int i=0;i<strs.size()-1;i++)
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
    if(ans[0]==strs[0][0])
    return ans;
    
    }
};