//Verificar par ou ímpar

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int numero;
		System.out.print("Digite um número inteiro: ");
		numero = scan.nextInt();
		
		if (numero % 2 == 0) {
		    System.out.printf("O número %d é par", numero);
		}
		else {
		    System.out.printf("O número %d é ímpar", numero);
		}
	}
}

//Verificador de maior de idade

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int idade;
		System.out.print("Digite sua idade: ");
		idade = scan.nextInt();
	    
	    if (idade >= 18) {
	        System.out.println("Você é maior de idade");
	    }
	    else {
	        System.out.println("Você é menor de idade");
	    }
	}
}

//Cálculo de bônus salarial

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		double salario, bonus;
		System.out.print("Digite seu salário: ");
		salario = scan.nextFloat();
		
		if (salario <= 1000) {
		    bonus = 0.10;
		    System.out.printf("Seu bonus de salário foi de %.2f, portanto, você possui %.2f agora.", salario*bonus, salario+(salario*bonus));
		}
		else {
		    bonus = 0.05;
		    System.out.printf("Seu bonus de salário foi de %.2f, portanto, você possui %.2f agora.", salario*bonus, salario+(salario*bonus));
		}
	}
}

//Encontrar o maior número

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		int a, b, c;
		System.out.print("Digite três números inteiros: \n");
		a = scan.nextInt();
		b = scan.nextInt();
		c = scan.nextInt();
		
		if (a > b && a > c) {
		    System.out.printf("O maior número é o primeiro (%d)", a);
		} else if(b > c && b > a) {
		    System.out.printf("O maior número é o segundo (%d)", b);
		} else {
		    System.out.printf("O maior número é o terceiro (%d)", c);
		}
	}
}
