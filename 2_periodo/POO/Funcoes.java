//Estamos usando o Apache NetBeans IDE 14 agora

//Primeiros testes mexendo com funções:

package com.mycompany.mavenproject1;

public class Mavenproject1 {
    
    public static int somar(int a, int b) {
        int s = a + b;
        return s;
    }
    

    public static void main(String[] args) {
        System.out.printf("\nComeçou!\n");
        int x = 5;
        int y = 3;
        int resultado = 0;
        resultado = somar(x, y);
        System.out.printf("\nResultado:\n" + resultado);
    }
} //vai retornar o valor 8

//quando a função encontra com o return, ela deixa de executar o resto, portanto, se colocar algo depois, vai ser ignorado.

package com.mycompany.mavenproject1;
import java.util.*;

public class Mavenproject1 {
    
    public static int somar(int a, int b) {
        int r = a + b;
        return r;
    }
    

    public static void main(String[] args) {
        Scanner scan = new Scanner (System.in);
        int x, y, resultado;
        System.out.printf("\n\tCalculadora:\n\n\t1\t2\t3\n\t4\t5\t6\n\t7\t8\t9\n\t\t0\n\n");
        
        x = scan.nextInt();
        y = scan.nextInt();
        resultado = somar(x, y);
        System.out.printf("\nResultado: "+ resultado);
    }
    
}

//finalizado:

import java.util.*;
public class Main
{
    public static int somar(int a, int b) {
        int r = a + b;
        return r;
    }
    public static int sub(int a, int b) {
        int r = a - b;
        return r;
    }
    public static int multi(int a, int b) {
        int r = a * b;
        return r;
    }
    public static float div(float a, float b) {
        float r = a / b;
        return r;
    }
    
    
	public static void main(String[] args) {
	    Scanner scan = new Scanner (System.in);
        System.out.printf("\n\tCalculadora:\n\n\t7\t8\t9\tx\n\t4\t5\t6\t-\n\t1\t2\t3\t+\n\t0\t.\t=\t/\n\n");
        System.out.println("\n\tSomar: 1\n\tSubtrair: 2\n\tMultiplicar: 3\n\tDividir: 4\n");
        int opcao = scan.nextInt();
        int x, y, resultado;
        switch (opcao){
            case 1:
                System.out.println("Digite os dois valores:");
                x = scan.nextInt();
                y = scan.nextInt();
                resultado = somar(x, y);
                System.out.printf("\nResultado da soma: "+ resultado);
                break;
            case 2: 
                System.out.println("Digite os dois valores:");
                x = scan.nextInt();
                y = scan.nextInt();
                resultado = sub(x, y);
                System.out.printf("\nResultado da subtração: "+ resultado);
                break;
            case 3:
                System.out.println("Digite os dois valores:");
                x = scan.nextInt();
                y = scan.nextInt();
                resultado = multi(x, y);
                System.out.printf("\nResultado da multiplicação: "+ resultado);
                break;
            case 4:
                System.out.println("Digite os dois valores:");
                float a = scan.nextFloat();
                float b = scan.nextFloat();
                float resultado1 = div(a, b);
                System.out.printf("\nResultado da divisão: %.2f", resultado1);
                break;
            default:
                System.out.println("\nIsso é inválido!");
	    }
       
	}
}
