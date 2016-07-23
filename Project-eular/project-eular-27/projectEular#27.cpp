#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    bool *prime = new bool[8002001];
    prime[0] = true;
    prime[1] = true;
    prime[2] = false;
    prime[3] = false;
    
    long limit = 2*n*n + n ;
    
    for(long i = 2 ; i<= sqrt(limit) ; i++ )
        {
        if(!prime[i])
            {
            //cout<<i<<" ";
            for(int j = 2*i ; j<= limit ; j += i)
                {
                prime[j] = true ;
            }
        }
    }
    
    int ma , mb ;
    int pcnt = 0 ;
    
    for(int a= -n ; a<= n ; a++ )
        {
        for(int b= 2 ; b <= n ; b++ )
            {
            if(! prime[b] )
                {
                int count = 0 ;
                for(int k = 0 ; ; k++)
                    {
                    long val = k*k+k*a+b;
                    if( val > 0 && !prime[val] )
                        {
                        count++;
                    }else if( val < 0 || prime[val] )
                        {
                        break;
                    }
                }
                if( count > pcnt )
                    {
                    pcnt = count;
                    ma = a ;
                    mb = b;
                }
            }
        }
    }
    
    cout<<ma<<" "<<mb<<endl;
    return 0;
}
