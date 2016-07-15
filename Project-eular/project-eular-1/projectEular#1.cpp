#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    long t ;
    cin>>t;
    for(long ti=0;ti<t;ti++)
        {
        long n;
        cin>>n;
        long long sum = 0 ;
        
        sum = (3*(n/3)*((n/3)+1))/2 + (5*(n/5)*((n/5)+1))/2 - (15*(n/15)*((n/15)+1))/2 ;
        
        if( (n%3==0 || n%5 == 0) )
            {
            sum -= n;
        }
        
        cout<<sum<<endl;
    }
    return 0;
}
