package com.anemois;

import java.text.NumberFormat;
import java.util.Scanner;

import javax.sound.midi.Soundbank;

public class a006{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        double a=scanner.nextDouble();
        double b=scanner.nextDouble();
        double c=scanner.nextDouble();
        double ok = Math.pow(b, 2)-4*a*c;
        if(ok < 0){
            System.out.println("No real root");
        } else if(ok == 0){
            System.out.println("Two same roots x=" + (int)((-b + Math.sqrt(ok))/(2*a)));
        } else{
            System.out.println("Two different roots x1=" + (int)((-b + Math.sqrt(ok))/(2*a)) + " , x2=" + (int)((-b - Math.sqrt(ok))/(2*a)));
        }
        scanner.close();
    }
}