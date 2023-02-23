//09-02-22
#include<bits/stdc++.h>
using namespace std;


void fill_LCS(vector<vector<int>> &LCS, string s1, string s2, int len1, int len2)
{
     for(int i=1;i<=len1;i++)
    {
        for(int j=1;j<=len2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                LCS[i][j]=LCS[i-1][j-1] + 1;
            }
            else
            {
                LCS[i][j]=max(LCS[i][j-1],LCS[i-1][j]);
            }
        }
    }

}


int main()
{
    string s1;
    string s2;
    //Taking input from user
    cout<<"Enter string 1: ";
    cin>>s1;
    cout<<endl;
    cout<<"Enter string 2: ";
    cin>>s2;
    cout<<endl;
    int len1=s1.size();
    int len2=s2.size();
    
    //Create LCS 2D vector to store lengths of longest subsequence
    vector<vector<int>> LCS(len1+1,vector<int>(len2+1));    

    //Function to fill LCS table with length of longest subsequence
    fill_LCS(LCS,s1,s2,len1,len2);

    for(int i=0;i<=len1;i++)
    {
        for(int j=0;j<=len2;j++)
        {
            cout<<LCS[i][j]<<" ";
        }
        cout<<endl;
    }
}