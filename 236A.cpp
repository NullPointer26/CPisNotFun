#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int i,x,count=0;
    int a[256]={0};

    cin>>s;

    for ( i = 0; i < s.length(); i++)
    {
        /* code */
        x=(s[i]-'a');

        if (a[x]!=1)
        {
            /* code */
            a[x]++;
            count++;
        }
    }
        
    if (count%2==0)
    {
        /* code */
        cout<<"CHAT WITH HER!"<<endl;
    }
    
    else
    {
        /* code */
        cout<<"IGNORE HIM!"<<endl;
    }
    
    return 0;
}