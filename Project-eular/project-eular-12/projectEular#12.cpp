#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    int N = 1000000 , M = 41050 ;
    
    vector<bool> mark(N+10,false) ;
    vector<long> prime , ans(M+10) ;
    
    for(int i=2 ; i<=N ; i++)
        {
        if( ! mark[i] )
            {
            long b = i+i;
            while( b <= N )
                {
                mark[b] = true ;
                b += i ;
            }
        }
    }
    
    for(long i=2 ; i<= N ; i++ )
        {
        if( !mark[i] )
            prime.push_back(i) ;
    }
    
    for(long i=1 ; i<=M ; i++ )
        {
        long long num = (i*(i+1))/2 ;
        int d = 1;
        
        long to = ceil( sqrt(num) ) ;
        
        for(long j=0 ; prime[j] <= to ; j++ )
            {
            int y=0 ; 
            while( num%prime[j] == 0 )
                {
                num /= prime[j] ;
                y++;
            }
            
            if( y != 0 )
                d *= (y+1) ;
        }
        if(num != 1)
            d *= 2 ;
        
        ans[i] = d;
    }
    
    
    int t ;
    cin>>t;
    
    for(int i=1 ; i<=t ; i++)
        {
        int n;
        cin>>n;
        for(int j = 1 ; j<=M ; j++)
            {
            if( ans[j] > n )
                {
                cout<<(j*(j+1))/2<<endl;
                break;
            }
        }
    }
    
    return 0;
}
