package com.mycompany.vasco;
import java.util.ArrayList;
import java.util.Collections;

public class Vasco {

    public static void main(String[] args) {
        ArrayList<String> carros = new ArrayList<String>();
        
        carros.add("Mercedes");
        carros.add("BMW");
        System.out.println(carros.get(0));
        carros.set(0, "Vasco");
        System.out.println(carros.get(0));
        carros.remove(0);
        System.out.println(carros.get(0));
        carros.clear();
        carros.add("Santos");
        carros.add("Fusca");
        System.out.println(carros.size());
        for(String i : carros) {
            System.out.println(i);
        }
        carros.add("Mercedes");
        carros.add("BMW");
        System.out.println(".");
        for(String i : carros) {
            System.out.println(i);
        }
        System.out.println(".");
        System.out.println(carros.get(0));
        Collections.sort(carros);
        System.out.println(carros.get(0));
        System.out.println(".");
        for(String i : carros) {
            System.out.println(i);
        }
    }   
}
