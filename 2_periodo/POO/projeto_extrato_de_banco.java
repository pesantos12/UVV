import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		float saldo = 2500;
		System.out.printf("*********************** \nDados iniciais do cliente: \n \nNome: Jacqueline Oliveira \nTipo de conta: Corrente \nSaldo inicial: R$ %.2f \n***********************", saldo);
	    
	    boolean sair = false;
	    
	    while (sair == false) {
	        System.out.println("\n\n\nOperações\n\n1- Consultar saldos \n2- Receber valor \n3- Transferir valor \n4- Sair\n\nDigite a opção desejada:");
	        int operacao = scan.nextInt();
	        if (operacao == 1) {
	            System.out.printf("\nSaldo: R$ %.2f \n", saldo);
	        } else if (operacao == 2) {
	            System.out.print("\nInforme o valor a receber:\n");
	            float receber = scan.nextFloat();
	            saldo += receber;
	            System.out.printf("\nSalto atualizado R$ %.2f", saldo);
	        } else if (operacao == 3) {
	            System.out.print("\nInforme o valor que deseja transferir:\n");
	            float transferir = scan.nextFloat();
	            if (transferir > saldo) {
	                System.out.println("\nNão há saldo suficiente para fazer essa transferência.");
	            } else {
	                saldo -= transferir;
	                System.out.printf("\nSaldo atualizado R$ %.2f", saldo);
	            }
	        }
	        else if (operacao == 4) {
	            sair = true;
	        } else {
	            System.out.println("\nDigite um número válido!");
	        }
	    }
	}
}
