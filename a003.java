package com.anemois;

import java.util.Scanner;

public class a003{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int M = scanner.nextInt();
        int D = scanner.nextInt();
        scanner.close();
        int ans = (M*2+D)%3;
        switch(ans){
            case 0:
                System.out.println("普通");
                break;
            case 1:
                System.out.println("吉");
                break;
            case 2:
                System.out.println("大吉");
                break;
        }
    }
}