package 第一章基础算法;

import java.util.Scanner;

public class mergesort787 {


    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int[] q= new int[n];

        for (int i = 0; i < n; i ++){
            q[i] = in.nextInt();
        }

        mergesort(q,0,n - 1);

        for (int i = 0; i < n; i ++){
            System.out.print(q[i] + " ");
        }


    }

    public static void mergesort(int[] q, int l, int r) {
        if (l >= r) return;

        int mid = (l + r) >> 1;
        int i = l, j = mid + 1;
        int k = 0;
        mergesort(q,l,mid);
        mergesort(q, mid + 1, r);

        int[] temp =new int[r - l +1];
        while ( i <= mid && j <= r){
            if (q[i] < q[j]){
                temp[k ++] = q[i ++];
            }else {
                temp[k ++] = q[ j ++];
            }
        }

        while (i <= mid ) temp[k ++] = q[i ++];
        while (j <= r ) temp[k ++] = q[j ++];

        for ( i = l,k = 0; i <= r;i ++ ,k ++){
            q[i] = temp[k];
        }
    }

}
