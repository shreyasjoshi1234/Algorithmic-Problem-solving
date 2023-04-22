#include<bits/stdc++.h>

using namespace std;


class move_neg
{

public:
    void Move_neg_to_begining_Approach2(vector<int> &v)
    {
        int i=0; //left pointer
    int j=v.size()-1;//right pointer

    while(i<=j)
    {
        while(i<=v.size()-1 && v[i]<=0)
        {
            i++;
        }

        while(j>=0 && v[j]>0)
        {
            j--;
        }

        if(i!=j && i<j) // Remember this condtion(you seldom remember this)
        swap(v[i],v[j]);
        i++;
        j--;
    }

    }

    void Move_neg_to_begining_Approach3(vector<int> &v)
    {
        int i=0;
        int j=v.size()-1;
        while(i<=j)
        {
            if(v[i]<0)
                i++;
                else if(v[j]>0)
                        j--;
                        else
                        {
                            swap(v[i],v[j]);
                            i++;
                            j--;
                        }

        }
    }

    void  Move_neg_to_begining_Approach4(vector<int> &v)
    {
        int i=0;
        int j=0;

        for(int i=0;i<v.size();i++)
        {
            if(v[i]<0)
            {
                if(i!=j)
                {
                    swap(v[i],v[j]);
                    j++;
                }
            }
        }
    }



};

int main()

{


    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    //Approach 1

    //Sort using any sorting algorithm
    // O(nlogn)
    //O(1)

    //Approach 2
    //Two pointer approach
     // O(n)
    //O(1)
    // move_neg obj1;
    // obj1.Move_neg_to_begining_Approach2(v);

    //Approach 3
    //DNF for two colours
     // O(n)
    //O(1)
    // move_neg obj2;
    // obj2.Move_neg_to_begining_Approach3(v);

    //Approach 4
    //Quick sort 
     // O(n)
    //O(1)
    move_neg obj3;
    obj3.Move_neg_to_begining_Approach4(v);




    //print array after operation
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}