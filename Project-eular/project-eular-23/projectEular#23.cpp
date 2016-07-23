#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    
    long *ab = new long[100000] ;
    long l = 0 ;
    
    for(long i = 1 ;i <= 28123 ; i++ )
        {
        long sum = 1 ;
        for(long k=2 ; k<= sqrt(i) ; k++)
            {
            if( i%k == 0 )
                {
                sum += k ;
                if( k != i/k )
                    sum += i/k;
            }
        }
        if( sum > i )
            {
            ab[l++] = i ;
            //cout<<i<<" "<<sum<<endl;
        }
    }
    
    for(int ti=0 ; ti<t; ti++ )
        {
        int n;
        cin>>n;
        if( n > 28123 )
            {
            cout<<"YES"<<endl;
        }
        else
            {
        bool f = false ;
        for(int i=0 ; i < l ; i++)
            {
            if( ab[i] > n/2 )
                break;
            
            if(n%ab[i] == 0 )
                {
                f = true;
                break;
            }
        }
            if( !f )
                {
                for(int i=0 ; ab[i]< n ;i++)
                    {
                    for(int j=i+1; ab[j]<n ; j++)
                        {
                        if( ab[i]+ab[j] == n)
                            {
                            f = true;
                            break;
                        }
                    }
                }
            }
        
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
