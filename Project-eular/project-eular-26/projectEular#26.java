import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
        public static final int LIMIT = 10000;
    public static int[] a = new int[LIMIT];
 
    public static void main(String[] args) {
        int max = 0;
        int temp;
        int i;
        for (i = 2; i < LIMIT; i++) {
            temp = div(1, i);
            if (max < temp) {
                max = i;
            }
            a[i] = max;
        }
        Scanner input = new Scanner(System.in);
        int T = input.nextInt();
        int N;
        while (T > 0) {
            N = input.nextInt();
            System.out.println(a[N - 1]);
            T--;
        }
        input.close();
    }
 
    public static int div(int src, int deno) {
        int[] quots = new int[LIMIT + 1];
        boolean[] remainsExist = new boolean[LIMIT + 1];
        int[] remainsIndex = new int[LIMIT + 1];
        for (int i = 0; i < LIMIT + 1; i++) {
            quots[i] = -1;
            remainsExist[i] = false;
            remainsIndex[i] = -1;
        }
        int quotsNum = 0;
        return div(src, deno, quots, quotsNum, remainsExist, remainsIndex, true);
    }
 
    private static int div(int src, int deno, int[] quots, int quotsNum, boolean[] remainsExist, int[] remainsIndex,
                           boolean isFirstTime) {
        if (isFirstTime && src < deno) {
            remainsExist[src] = true;
            remainsIndex[src] = quotsNum;
        } else {
            // do nothing
        }
 
        int quot = 0;
        int remain = src;
        while (remain < deno) {
            remain = remain * 10;
            quots[quotsNum] = 0;
            quotsNum = quotsNum + 1;
        }
        quot = remain / deno;
        remain = remain - quot * deno;
        if (remain == 0) {
            return 0;
        } else if (remainsExist[remain]) {
            return quotsNum - remainsIndex[remain];
        } else {
            remainsExist[remain] = true;
            remainsIndex[remain] = quotsNum;
            quotsNum = quotsNum + 1;
            return div(remain * 10, deno, quots, quotsNum, remainsExist, remainsIndex, false);
        }
    }
}
