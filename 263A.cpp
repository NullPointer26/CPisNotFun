#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,j,x,y;
    int mat[5][5];

    for ( i = 0; i < 5; i++)
    {
        /* code */
        for ( j = 0; j < 5; j++)
        {
            /* code */
            cin>>mat[i][j];

            if (mat[i][j]==1)
            {
                /* code */
                x=i;
                y=j;
            }

        }   

    }

    int a,b,ans=0;

    if (x<2)
    {
        a=2-x;
    }
        if (x>2)
        {
            a=x-2;
        }
            if (x==2)
            {
                a=0;
            }
            
    if (y<2)
    {
        b=2-y;
    }
        if (y>2)
        {
            b=y-2;
        }
            if (y==2)
            {
                b=0;
            }

    ans=a+b;
    cout<<ans;

    return 0;
}