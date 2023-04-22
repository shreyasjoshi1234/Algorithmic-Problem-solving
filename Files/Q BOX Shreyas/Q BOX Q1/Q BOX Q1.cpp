#include<bits/stdc++.h>

using namespace std;

int main()

{

    //m indicates days
    //n indicates number of people who bought ticket on each day
    //vec[i][j] indicates ticket ID 
    //k indicates key
    int m,n;
    cin>>m;
    cin>>n;
    int k;
    cin>>k;
    vector<vector<long long int>> vec( m , vector<long long int> (n, 0)); 

        //Take input
       for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>vec[i][j];
        }
        
    }
    int newvalue;
    vector<long long int> answer(m,0);
      for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            newvalue=log2(vec[i][j])+1; //This is logic to get nnumber of digits in binary representation in constant time.
            
            if(newvalue == k)
            {
                answer[i]++; //Increment the loss count
            }   
        }
    }

   //To find miximum loss
    int maxi=answer[0];
    int maxind=0;


    for(int i=1;i<m;i++)
    {
        if(answer[i]>maxi)
        {
            maxi=answer[i];
            maxind=i;
        }
    }

    if(maxi==0)
    {
        cout<<"No loss"<<endl;
    }
    else
        cout <<maxind+1;
    return 0;
}