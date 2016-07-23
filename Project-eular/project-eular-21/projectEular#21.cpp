#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    
    long *d = new long[636721] ;
    d[1] = 1;
    //long m = 0 ;
    for(int i=2 ; i<=636720 ; i++)
        {
        long sum = 1 ;
        for(int k=2 ; k <= sqrt(i) ; k++)
            {
            if( i%k == 0 )
                {
                sum += k ;
                
                if( k != i/k )
                    sum += i/k ;
            }
        }
        
        d[i] = sum ;
        //m = (m > sum) ? m : sum ;
    }
    
    long num[26] ;
    int l = 0 ;
    
    for(int i=1;i<=100000;i++)
        {
            if(d[i] > i )
                {
                if(d[d[i]] == i)
                    {
                    num[l++] = d[i];
                    num[l++] = d[d[i]];
                    //cout<<d[i]<<" "<<d[d[i]]<<endl;
                }
            }
    }
    
    //cout<<m<<endl;
    for(int ti=0 ; ti<t ;ti++ )
        {
        int n;
        cin>>n;
        long long ans = 0 ;
        
        for(int i=0 ; i<26 ; i++)
            {
            if( num[i] < n )
                {
                ans += num[i];
            }
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
