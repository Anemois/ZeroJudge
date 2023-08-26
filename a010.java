package com.anemois;

import java.text.NumberFormat;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

import javax.sound.midi.Soundbank;

public class a010{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        Map<Integer, Integer> map = new HashMap<>();
        
        for(int i=2; i<=num;){
            if(num%i==0){
                if(map.containsKey(i))
                    map.put(i, map.get(i)+1);
                else
                    map.put(i, 1);
                num /= i;
            }
            else
                i++;
        }
        TreeMap<Integer, Integer> sorted = new TreeMap<>();
        sorted.putAll(map);
        boolean first = true;
        for(Map.Entry<Integer,Integer> set : sorted.entrySet()){
            if(first){
                first = false;
                if(set.getValue() == 1)
                    System.out.print(set.getKey());
                else
                    System.out.print(set.getKey() + "^" + set.getValue());
            }
            else if(set.getValue() == 1)
                System.out.print(" * " + set.getKey());
            else
                System.out.print(" * " + set.getKey() + "^" + set.getValue());
        }
        
        scanner.close();
    }
}