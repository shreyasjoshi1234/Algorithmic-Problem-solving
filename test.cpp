#include<bits/stdc++.h>


void find_min_remove(string &str,string &answer,int k)
{
    char curmin=str[0];
    int curind=0;
    for(int i=0;i<k;i++)
    {
        if(str[i]<curmin)
        {
            curind=i;
            curmin=str[i];
        }
    }
    answer.push_back(str[curmin]);
    str.erase(curind,1);

}
string getTransformedString(string str, int k)
{
    string answer;
    //Write your code here
    while(str.size()>=k)
    {
        find_min_remove(str,answer,k);
    }    
    if(str.size()>0)
    sort(str.begin(),str.end());
    answer.append(str);
    return answer;

}
