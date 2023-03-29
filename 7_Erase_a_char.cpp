
/*
AWS tech round
Programming question (Live coding on Amazon chime code editor) :
	To erase a character from a given string.
	Input S: hsinfsjdksn  Char C : s
	Output: hinfjdkn

*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter string"<<endl;
    string s;
    cin>>s;

    cout<<"Enter char to be removed"<<endl;
    char k;
    cin>>k;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==k)
        {
            s.erase(i,1);
            i--;
        }
    }
    cout<<s;
}