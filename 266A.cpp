/// MY 1ST EVER FASTEST CODE SOVLE IS THIS ONE.......

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;

    cin>>n;
    cin>>s;

    int count=0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (s[i]==s[i+1])
        {
            /* code */
            count++;
        }
        
    }
    cout<<count;
    
    return 0;
}