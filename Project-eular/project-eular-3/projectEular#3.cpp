#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long t;
    cin>>t;
    
    for(long ti=0;ti<t;ti++)
        {
        long n;
        cin>>n;
        
        long max = 0;
        
        long m = n ;
        long d = 2;
        
        while( m > 1 )
            {
            while( m%d == 0 )
                {
                max = (max > d) ? max : d ;
                m /= d;
            }
            d++;
            
            if( d*d > m )
                {
                if( m> 1 )
                    {
                    max = (max > m) ? max : m ;
                    break;
                }
            }
        }
        
        cout<<max<<endl;
    }
    return 0;
}
