//EXERCÍCIOS WHILE

/*1.Contagem Crescente: Escreva um programa em Java que solicita ao usuário um número inteiro positivo. 
Em seguida, utilize uma estrutura de repetição while para exibir uma contagem crescente a partir de 1 até o número informado pelo usuário.*/

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		System.out.println("Digite um número qualquer e inteiro: ");
		int num = scan.nextInt();
		int contagem = 1;
		while (contagem <= num) {
		    System.out.printf("%d ", contagem);
		    contagem++;
		} 
	}
}

/*2.Soma de Números Inteiros: Escreva um programa em Java que solicita ao usuário que digite uma sequência de números inteiros. 
Utilize uma estrutura de repetição while para ler os números até que seja digitado um número negativo. Em seguida, exiba a soma dos números inteiros digitados (não incluindo o número negativo).*/

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		System.out.println("Digite números inteiros positivos que vou soma-los (digite um negativo para parar): ");
		int numeros = 0;
		int novoNumero = 0;
		while (novoNumero >= 0) {
		    numeros += novoNumero;
		    novoNumero = scan.nextInt();
		} 
		System.out.printf("A soma de todos os números digitados é: %d", numeros);
	}
}

/*3.Adivinhe o Número: Escreva um programa em Java que gera um número aleatório entre 1 e 100 (inclusive) e solicita ao usuário que tente adivinhar o número. 
Utilize uma estrutura de repetição while para permitir várias tentativas até que o usuário acerte o número. Forneça dicas ao usuário se o número digitado é maior ou menor que o número aleatório.*/

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		Random ran = new Random();
		int aleatorio = ran.nextInt(100) + 1;
		System.out.printf("Tente acertar o número aleatório: \n");
		int chute = 0;
		while (chute != aleatorio) {
		    chute = scan.nextInt();
		    if (chute < aleatorio) {
		        System.out.println("O número que você chutou é menor que o número aleatório.\n");
		    } else if (chute > aleatorio) {
		        System.out.println("O número que você chutou é maior que o número aleatório.\n");
		    } else {
		        System.out.println("Você acertou!");
		    }
		}
	}
}


//EXERCÍCIOS DO-WHILE

/*1.Contagem Regressiva: Escreva um programa em Java que solicita ao usuário um número inteiro positivo. 
  Utilize uma estrutura de repetição do-while para exibir uma contagem regressiva a partir do número informado pelo usuário até 1.*/

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Digite um número inteiro: ");
		int num = scan.nextInt();
		int r = 0;
		do {
		    System.out.printf("%d ", num - r);
		    r++;
		} while (r < num);
	}
}

/*2.Validação de Senha: Escreva um programa em Java que solicita ao usuário que digite uma senha. 
Utilize uma estrutura de repetição do-while para repetir a solicitação até que o usuário digite a senha correta (por exemplo, "senha123"). 
Se a senha estiver incorreta, o programa deve exibir uma mensagem de erro e solicitar novamente a senha.*/

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		String senha = "VASCO";
		int correto = 0;
		
		do {
		    System.out.println("Digite sua senha: ");
		    String confirmacao = scan.nextLine();
		    if(confirmacao.equals(senha)) {
		        correto = 1;
		        System.out.println("\nSenha correta!\n");
		    } else {
		        System.out.println("\nSenha incorreta\n");
		    }
		    } while (correto == 0);
		}
	}

/*3.Jogo da Adivinhação: Escreva um programa em Java que gera um número aleatório entre 1 e 100 (inclusive) e solicita ao usuário que tente adivinhar o número. 
Utilize uma estrutura de repetição do-while para permitir várias tentativas até que o usuário acerte o número. 
Forneça dicas ao usuário se o número digitado é maior ou menor que o número aleatório.*/

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		Random ran = new Random();
		int aleatorio = ran.nextInt(100) + 1;
		System.out.printf("Tente acertar o número aleatório: \n");
		int chute = 0;
		do {
		    chute = scan.nextInt();
		    if (chute < aleatorio) {
		        System.out.println("O número que você chutou é menor que o número aleatório.\n");
		    } else if (chute > aleatorio) {
		        System.out.println("O número que você chutou é maior que o número aleatório.\n");
		    } else {
		        System.out.println("Você acertou!");
		    }
		} while (chute != aleatorio);
	}
}

//EXERCÍCIOS DE FOR

/*1.Tabuada de Multiplicação: Escreva um programa em Java que solicita ao usuário um número inteiro. 
Utilize uma estrutura de repetição for para exibir a tabuada de multiplicação desse número, de 1 a 10.*/

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Digite um número inteiro: ");
		int num = scan.nextInt();
		for(int i = 0; i <= 10; i++) {
		    System.out.printf("%d x %d = %d\n",num, i, num*i);
		}
	}
}


/*2.Contagem Regressiva de Ano Novo: Escreva um programa em Java que exibe uma contagem regressiva de 10 segundos para o Ano Novo. 
Utilize uma estrutura de repetição for para fazer a contagem e inclua um pequeno atraso entre cada segundo para que a contagem seja visível. */

import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    int millisecondsToWait = 1000;
		for (int i = 10; i >= 1; i--) {
		    System.out.printf("%d ", i);
		    
		    try {
            Thread.sleep(millisecondsToWait);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
		}
		System.out.println("\nFeliz ano novo!");
	}
}

/*3.Soma de Números Pares: Escreva um programa em Java que utiliza uma estrutura de repetição for para somar todos os números pares de 1 a 100. Em seguida, exiba o resultado da soma.*/

import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner scan = new Scanner(System.in);
	    
	    System.out.printf("Somar todos os números pares de 1 até: ");
	    int total = scan.nextInt();
	    int soma = 0;
	    for(int i = 2; i <= total ; i += 2) {
	        soma += i;
	    }
	    System.out.printf("O resultado da soma de todos os números pares de 1 até %d é: %d", total,soma);
	}
}





