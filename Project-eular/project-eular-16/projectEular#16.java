import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in) ;
        int t = sc.nextInt() ;
        
        for(int ti=0;ti<t;ti++)
            {
            int n = sc.nextInt() ;
            
            BigInteger val = BigInteger.valueOf(2) ;
            val = val.pow(n) ;
            
            String str = val.toString(10) ;
            
            long sum = 0 ;
            for(int i=0;i< str.length() ; i++)
                {
                sum += Integer.parseInt(str.substring(i,i+1));
            }
            
            System.out.println(sum);
        }
    }
}
