// 1.Exercício de Cálculo de Média: Crie um programa que solicite ao usuário três notas (números de ponto flutuante) e calcule a média aritmética das notas. Em seguida, exiba a média na tela.

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		
		float numero1 , numero2 , numero3 ;
		
		System.out.print("digite o 1 número: ");
		numero1 = scan.nextFloat();
		System.out.print("digite o 2 número: ");
		numero2 = scan.nextFloat();
		System.out.print("digite o 3 número: ");
		numero3 = scan.nextFloat();
		
		float media = (numero1 + numero2 + numero3)/3;
		
		System.out.printf("A média das 3 notas é: %.2f", media);
	}
}

// 2.Exercício de Conversão de Temperatura: Crie um programa que peça ao usuário para digitar uma temperatura em graus Celsius e converta-a para Fahrenheit. Em seguida, exiba o resultado na tela.

import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner scan = new Scanner (System.in);
	    float tempC , tempF ;
	    
		System.out.print("Digite a temperatura em graus celsius: ");
		tempC = scan.nextFloat();
		tempF = (tempC*9)/5 + 32;
		System.out.printf("Essa temperatura em Fahrenheit é: %.2f", tempF);
	}
}

// 3.Exercício de Concatenação de Strings: Peça ao usuário que digite seu nome e sobrenome separadamente (duas strings). Em seguida, concatene os dois valores para formar o nome completo e exiba-o na tela.

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		String nome , sobrenome;
		
		System.out.print("Digite seu nome: ");
		nome = scan.nextLine();
		System.out.print("Digite seu sobrenome: ");
		sobrenome = scan.nextLine();
		
		String nomeCompleto = nome + " " + sobrenome;
		System.out.println("Seu nome completo é " + nomeCompleto);
	}
}

// 4.Exercício de Contagem de Caracteres: Crie um programa que solicite ao usuário que digite uma frase (uma string). Em seguida, conte o número de caracteres (incluindo espaços) na frase e exiba o resultado na tela.

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.print("Digite um texto que irei informar quantos caracteres existem nele: ");
		String texto = scan.nextLine();
		int quantidadeC = texto.length();
		System.out.println("Este texto contém "+ quantidadeC+ " caracteres");
	}
}

// 5.Exercício de Cálculo de Área de um Círculo: Peça ao usuário que digite o raio de um círculo (número de ponto flutuante). Em seguida, calcule a área do círculo usando a fórmula A = p * r^2, onde p (pi) é uma constante aproximada de 3.14159. Exiba a área na tela.

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		double raio , pi , area;
		System.out.print("Digite o raio do circulo: ");
		raio = scan.nextFloat();
		pi = Math.PI;
		area = pi * (raio * raio);
		System.out.printf("A área do circulo é: %.2f", area);
		
	}
}
