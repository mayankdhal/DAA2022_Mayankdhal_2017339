package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class Daalab {
    static void binarySearch(int[] arr, int first, int last, int key ){
        int mid;
        int comp=1;
        while(first<=last)
        {
            mid =(first+last)/2;
            comp++;
            if(key>arr[mid]){
                first=mid+1;
            }
            else if(key==arr[mid] )
            {
                System.out.println("Element is found at "+ (++mid));
                System.out.println("No of comparisons are: "+comp);
                break;
            }
            else
            {
                last=mid-1;

            }

        }
        if(first>last)
        {
            System.out.println("Element not found!");
            System.out.println("No of comparisons are: "+comp);
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements:");
        int n=sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();                              //scan the elements of array
        }
        Arrays.sort(arr);                          // sort the array
        System.out.println(Arrays.toString(arr));                   // print the array in line
        System.out.println("Enter the element to search:");
        int num = sc.nextInt();
        binarySearch(arr,0,n,num);
    }
}
