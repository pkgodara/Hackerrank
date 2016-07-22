#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    //int cnt[5000001] ;
    int * cnt = new int[5000001];
    int N[5000001] ;
    cnt[0] = 0 ;
    N[0] = 0;
    cnt[1] = 1 ;
    N[1] = 1 ;
    
    int mv = 1 ;
    
    for(long n = 2 ; n <= 5000000 ; n++ )
        {
        long m = n ;
        int count = 0 ;
        while( m > 1 )
            {
            if( m < n )
                {
                count += cnt[m] ;
                break;
            }
            if( m%2 == 0 )
                {
                m /= 2 ;
            }
            else
                {
                m = 3*m + 1 ;
            }
            count++ ;
        }
        cnt[n] = count ;
        
        if(count >= cnt[mv] )
            mv = n ;
        N[n] = mv ;
        
        
    }
    
    free(cnt) ;
    
    int t ;
    cin>>t;
    
    for(int ti=0;ti<t;ti++)
        {
        int n ;
        cin>>n;
        
        cout<<N[n]<<endl ;
    }
    
    return 0;
}
