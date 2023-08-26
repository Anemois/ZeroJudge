package com.anemois;

import java.text.NumberFormat;
import java.util.ArrayList;
import java.util.Scanner;

import javax.sound.midi.Soundbank;

public class a009{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String str;
        str = scanner.nextLine();
        char[] ans = new char[str.length()];
        for(int i=0; i<str.length(); i++){
            //System.out.print(str.charAt(i)+7);
            ans[i] = str.charAt(i);
            ans[i]-=7;
        }
        System.out.println(ans);

        scanner.close();
    }
}