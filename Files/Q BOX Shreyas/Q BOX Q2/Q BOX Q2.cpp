#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int k;
    cin>>k;
    sort(v.begin(),v.end(),greater<int>());
    long long int answer=0;
    int i=0;
    while(k--)
    {
        answer+=v[i];
        i++;
    }
    cout<<answer<<endl;

}