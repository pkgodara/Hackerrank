#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    long t;
    cin>>t;
    
    long prime[1000000] , len = 0 ;
    
    prime[0] = 2;
    prime[1] = 3;
    
    len = 2;
    
    long num = 5;
    
    while( num < 1000001 )
        {
        bool f = true;
        for(int i=0;i<len;i++)
            {
            if( prime[i] > sqrt(num) )
                break;
            if( num%prime[i] == 0 )
                {
                f = false;
                break;
            }
        }
        if( f )
            {
            prime[len++] = num ;
        }
        
        num++;
    }
    
    for(long ti=0 ; ti<t ;ti++ )
        {
        long n;
        cin>>n;
        
        long long ans = 0;
        
        int i=0;
        while( prime[i] <= n )
            {
            ans += prime[i] ;
            i++ ;
            if( i >= len )
                break;
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
