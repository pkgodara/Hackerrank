#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    
    long long prime[10001] ;
    prime[0] = 1; //
    prime[1] = 2;
    prime[2] = 3;
    
    int len = 3 , num = 5 ;
    
    while( len < 10001 )
    {
        bool f = true;
        
        for(int i = 1;i <= len-1 ; i++)
            {
            if( num%prime[i] == 0 )
                {
                f = false ;
                break;
            }
        }
        if( f )
            {
            prime[len] = num ;
            len++;
        }
        
        num++;
    }
    
    for(int ti=0 ; ti<t ; ti++ )
        {
        int n;
        cin>>n;
        
        cout<<prime[n]<<endl;
    }
    
    return 0;
}
