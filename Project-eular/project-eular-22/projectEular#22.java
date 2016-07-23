import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt() ;
        String[] names = new String[n] ;
        for(int i=0;i<n;i++)
            names[i] = sc.next() ;
        
        Arrays.sort(names);
        
        int q = sc.nextInt() ;
        for(int i=0;i<q;i++)
            {
            String s = sc.next() ;
            long score = 0 ;
            int num = 0 ;
            for(num = 0;num <n;num++)
                {
                if( names[num].compareTo(s) == 0 )
                    {
                    break;
                }
            }
            for(int l=0 ; l<names[num].length() ; l++ )
                {
                score +=  ( (int)names[num].charAt(l) ) - (int)('A') + 1 ;
            }
            score *= num+1 ;
            
            System.out.println(score);
        }
    }
}
