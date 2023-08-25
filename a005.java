package com.anemois;

import java.text.NumberFormat;
import java.util.Scanner;

public class a005{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for(int i=0; i<n; i++){
            int[] nums = new int[4];
            for(int j=0; j<4; j++){
                nums[j] = scanner.nextInt();
                System.out.print(nums[j] + " ");
            }
            //System.out.println(nums[0] + " " + nums[1] + " " + nums[2] + " " + nums[3]);
            if(nums[1]-nums[0] == nums[2]-nums[1]){
                System.out.println((nums[3] + nums[3]-nums[2]));
            } else{
                System.out.println(nums[3] * (nums[3]/nums[2]));
            }
        }
        scanner.close();
    }
}