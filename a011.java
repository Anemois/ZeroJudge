package com.anemois;

import java.text.NumberFormat;
import java.util.Scanner;

import javax.sound.midi.Soundbank;

public class a011{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String str;
        int cnt;
        while(scanner.hasNextLine()){
            str = scanner.nextLine().trim();
            cnt = 0;
            boolean yes = true;
            for(int i=0; i<str.length(); i++){
                if(yes && Character.isAlphabetic(str.charAt(i))){
                    yes = false;
                    cnt++;
                }
                else if(!Character.isAlphabetic(str.charAt(i)))
                    yes = true;
            }
            System.out.println(cnt);
        }
        scanner.close();
    }
}