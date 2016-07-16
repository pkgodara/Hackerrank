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
        
        long long sum=2;
        
        long a = 1 , b = 2;
        
        while(a+b <= n)
            {
            if( (a+b)%2 == 0 )
                {
                sum += a+b;
            }
            long t = b;
            b = a+b;
            a = t;
        }
        
        cout<<sum<<endl;
    }
    return 0;
}
