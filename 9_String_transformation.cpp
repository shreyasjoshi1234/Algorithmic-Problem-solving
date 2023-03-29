//https://www.codingninjas.com/codestudio/problems/string-transformation_630421?leftPanelTab=0
#include<bits/stdc++.h>

using namespace std;

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
    answer.push_back(curmin);
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

int main()
{
    string kk="codingninjas";
    kk=getTransformedString(kk,3);
    cout<<kk;
}

/*

priority queue approach with less time complexity

#include<bits/stdc++.h>
string getTransformedString(string str, int k)
{
    //Write your code here
    string ans="";
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=0;i<str.length();i++)
    {
        q.push(str[i]);
       while(q.size()>=k)
       {
        char a=q.top();
        q.pop();
        ans+=a;
       }
    }
    while(!q.empty())
    {
      char a=q.top();
      q.pop();
      ans+=a;   
    }
    return ans;
}
*/