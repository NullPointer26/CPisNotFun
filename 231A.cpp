#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a,b,c,i,sum=0,count=0;
    
    cin>>n;

    for ( i = 1; i <= n; i++)
    {
        /* code */
        cin>>a>>b>>c;
        count=0;
        
        if (a==1)
        {
            /* code */
            count++;
        }
            if (b==1)
            {
                /* code */
                count++;
            }

                if (c==1)
                {
                    /* code */
                    count++;
                }
            
        if (count>=2)
        {
            /* code */
            sum++;
        }   
    }

    cout<<sum<<endl;

    return 0;
}