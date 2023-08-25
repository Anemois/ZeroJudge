package com.anemois;

import java.util.Scanner;

public class a004{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int x;
        while(scanner.hasNext()){
            x = scanner.nextInt();
            if((x%4==0 && x%100 != 0) || x%400 == 0)
                System.out.println("閏年");
            else
                System.out.println("平年");
        }
        scanner.close();
    }
}