#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

static int ans = 0 ;
static int n ;

void recur(int ar[][15] , int i , int j , int sum)
    {
    if( i == n )
        {
        //cout<<"**"<<sum<<endl;
        ans = (ans > sum)? ans : sum ;
        return;
    }
    //cout<<i<<" "<<j<<" "<<ar[i][j]<<endl;
    if( i == 0 )
        {
        recur(ar,i+1,0,sum+ar[i][0]);
    }
    else
    {
    for(int k=j;k<=j+1;k++)
        {
        recur(ar,i+1,k,sum+ar[i][k]);
    }
    }
}


int main() {
    int t ;
    cin>>t;
    
    for(int ti=0 ; ti<t ; ti++ )
        {
        cin>>n;
        
        ans = 0 ;
        
        int ar[15][15] ;
        for(int i=1;i<=n;i++)
            {
            for(int j=0;j<i;j++)
                cin>>ar[i-1][j];
        }
        
        recur(ar,0,0,0) ;
        
        cout<<ans<<endl;
    }
    
    return 0;
}
