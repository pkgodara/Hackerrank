#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    string tens[10]  =  {
    "",
    "Ten",
    "Twenty",
    "Thirty",
    "Forty",
    "Fifty",
    "Sixty",
    "Seventy",
    "Eighty",
    "Ninety"
  };
  string nums[20] = {
    "",
    "One",
    "Two",
    "Three",
    "Four",
    "Five",
    "Six",
    "Seven",
    "Eight",
    "Nine",
    "Ten",
    "Eleven",
    "Twelve",
    "Thirteen",
    "Fourteen",
    "Fifteen",
    "Sixteen",
    "Seventeen",
    "Eighteen",
    "Nineteen"
  };
    
    string h = "Hundred" , th = "Thousand" , m = "Million" , b = "Billion" ;
    
    int t ;
    cin>>t;
    
    for(int ti=0;ti<t;ti++)
        {
        long long n ;
        cin>>n;
        string words ="";
        
        int i = n%1000 ;n /= 1000;
        if( i%100 > 0 )
            {
            int j = i%100 ;
            if( j < 20 )
                words = nums[j]+" "+words ;
            else
                {
                if( j%10 != 0 )
                words = tens[j/10]+" "+nums[j%10]+" "+words ;
                else
                    words = tens[j/10]+" "+words ;
            }
        }
        if(i/100 > 0)
            words = nums[i/100]+" "+h+" "+words ;
        
        
        i = n%1000 ; n /= 1000 ;
        if( i%100 > 0 )
            {
            int j = i%100 ;
            if( j < 20 )
                words = nums[j]+" "+th+" "+words ;
            else
                {
                if(j%10 != 0)
                words = tens[j/10]+" "+nums[j%10]+" "+th+" "+words ;
                else
                    words = tens[j/10]+" "+th+" "+words ;
            }
        }
        else if( i > 0)
            words = th+" "+words ;
        if(i/100 > 0)
            words = nums[i/100]+" "+h+" "+words ;
        
        
        i = n%1000 ; n /= 1000 ;
        if( i%100 > 0 )
            {
            int j = i%100 ;
            if( j < 20 )
                words = nums[j]+" "+m+" "+words ;
            else
                {
                if(j%10 != 0 )
                words = tens[j/10]+" "+nums[j%10]+" "+m+" "+words ;
                else
                    words = tens[j/10]+" "+m+" "+words ;
            }
        }
        else if( i > 0)
            words = m+" "+words ;
        if(i/100 > 0)
            words = nums[i/100]+" "+h+" "+words ;
        
        
        i = n%1000 ; n /= 1000 ;
        if( i%100 > 0 )
            {
            int j = i%100 ;
            if( j < 20 )
                words = nums[j]+" "+b+" "+words ;
            else
                {
                if( j%10 != 0 )
                words = tens[j/10]+" "+nums[j%10]+" "+b+" "+words ;
                else
                    words = tens[j/10]+" "+b+" "+words ;
            }
        }
        else if( i > 0)
            words = b+" "+words ;
        if(i/100 > 0)
            words = nums[i/100]+" "+h+" "+words ;
        
        i = n ;
        if( i > 0)
            words = nums[i]+" Trillion "+words;
        //output
        cout<<words<<endl;
    }
    
    return 0;
}
