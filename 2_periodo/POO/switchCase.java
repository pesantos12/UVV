//dia da semana com switch

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		System.out.print("Digite o numero do dia da semana: ");
		int diaSemana = scan.nextInt();
		
		switch (diaSemana) {
		    case 1:
		        System.out.println("Domingo");
		        break;
		    case 2:
		        System.out.println("Segunda");
		        break;
		    case 3:
		        System.out.println("Terça");
		        break;
		    case 4:
		        System.out.println("Quarta");
		        break;
		    case 5:
		        System.out.println("Quinta");
		        break;
		    case 6:
		        System.out.println("Sexta");
		        break;
		    case 7:
		        System.out.println("Sábado");
		        break;
		    default: 
		        System.out.println("Dia inválido");
		        break;
		}
	}
}

//verificador par e ímpar com switch

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		System.out.print("Digite um número ");
		int numero = scan.nextInt();
		switch (numero % 2) {
		    case 0:
		        System.out.printf("O número %d é par", numero);
		        break;
		    case 1:
		        System.out.printf("O número %d é ímpar", numero);
		        break;
		    default:
		        System.out.println("Isso não é válido!!!!");
		        break;
		}
	}
}

//valor e desconto por código

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		System.out.print("Digite o valor do produto: ");
		float valor = scan.nextFloat();
		System.out.print("Agora, digite o código do produto (1 a 3): ");
		int codigo = scan.nextInt();
		double desconto;
		
		switch (codigo) {
		    case 1:
        		
        		if(valor > 20) {
        		    desconto = 0.9;
        		    System.out.printf("O valor do produto (R$ %.2f) com o desconto (%.0f%%) ficou: R$ %.2f", valor ,(1 - desconto)*100, valor*desconto);
        		} else {
        		    System.out.printf("O valor do produto não pode receber o desconto, portanto, continua valendo R$ %.2f", valor);
        		}
        		break;
        	
        	case 2:
        	    desconto = 0.8;
        	    System.out.printf("O valor do produto (R$ %.2f) com o desconto (%.0f%%) ficou: R$ %.2f", valor ,(1 - desconto)*100, valor*desconto);
        	    break;
        	    
        	case 3:
        	    
        	    if(valor > 100) {
        	        desconto = 0.7;
        	        System.out.printf("O valor do produto (R$ %.2f) com o desconto (%.0f%%) ficou: R$ %.2f", valor ,(1 - desconto)*100, valor*desconto);
        	    } else {
        	        desconto = 0.85;
        	        System.out.printf("O valor do produto (R$ %.2f) com o desconto (%.0f%%) ficou: R$ %.2f", valor ,(1 - desconto)*100, valor*desconto);
        	    }
        	    break;
            default:
                System.out.println("Algo está inválido");
		}
	}
}
