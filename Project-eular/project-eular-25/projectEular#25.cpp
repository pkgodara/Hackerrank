#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long num[5001] ;
    int l = 2 ;
    
    for(int n = 7 ; l <= 5000 ; n++ )
        {
        int val = ceil(n*log10((1+sqrt(5))/2) - 0.5*log10(5)) ;
        if( val == l )
            {
            num[l++] = n ;
        }
    }
    //cout<<(7*log10((1+sqrt(5))/2) - 0.5*log10(5))<<endl;
    int t;
    cin>>t;
    
    for(int ti=0 ; ti<t ; ti++ )
        {
        int n ;
        cin>>n;
        
        cout<<num[n]<<endl;
    }
    
    return 0;
}
