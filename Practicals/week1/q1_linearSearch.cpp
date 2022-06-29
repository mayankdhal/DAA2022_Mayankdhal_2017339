package com.company;

        import java.util.Arrays;
        import java.util.Scanner;

public class Daalab {
    public static void main(String[] args) {
        System.out.println("Enter the number of elements");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(Arrays.toString(arr));
        System.out.println("Enter the element to search:");
        int num = sc.nextInt();
        int flag=0;
        int i;
        int noComparison=1;
        for ( i = 0; i < n; i++){
            if(arr[i]==num) {
                flag = -1;
                break;
            }
            noComparison++;
        }
        if(flag==0){
            System.out.println("Element not found");
            System.out.println("No of comparisons are: "+ noComparison);

        }
        else{
            System.out.println("Element is found at position "+ ++i);
            System.out.println("No of comparisons are: "+ noComparison);
        }

    }
}
