//Main

import java.util.HashSet;

public class Main
{
	public static void main(String[] args) {
		Banco b1 = new Banco();
		
	    ContaCorrente cc1 = new ContaCorrente (10, "Pedro", 2000);
	    ContaCorrente cc2 = new ContaCorrente (20, "João", 10000);
	    ContaPoupanca cp1 = new ContaPoupanca (12, "Jorge", 500);
	    ContaPoupanca cp2 = new ContaPoupanca (22, "Maria", 100);
	    
	    b1.addConta(cc1);
	    b1.addConta(cc2);
	    b1.addConta(cp1);
	    b1.addConta(cp2);
	    
	    b1.getContaPorNumero(10);
	    
	    for (Conta i : b1.getContasBancarias()) {
	        System.out.println(i.getTitular());
	    }
	    
	    b1.RemoverConta(10); System.out.println("\n");
	    
	    for (Conta i : b1.getContasBancarias()) {
	        System.out.println(i.getTitular());
	    }
	    
	    b1.getContaPorNumero(20);
	    b1.getContaPorNumero(22);
	    
	    b1.calcularTaxas();
	    
	    b1.getContaPorNumero(20);
	    b1.getContaPorNumero(22);
	    
	}
}

//Conta
public class Conta{
    private int numeroConta;
    private String titular;
    protected double saldo;
    
    public Conta (int numeroConta, String titular, double saldo) {
        this.numeroConta = numeroConta;
        this.titular = titular;
        this.saldo = saldo;
    }
    
    public int getNumeroConta () {
        return numeroConta;
    }
    
    public String getTitular () {
        return titular;
    }
    
    public double getSaldo () {
        return saldo;
    }
}

//ContaCorrente
public class ContaCorrente extends Conta implements Taxa{
    private static final double TAXA_MANUTENCAO = 10;
    
    public ContaCorrente (int numeroConta, String titular, double saldo) {
        super(numeroConta, titular, saldo);
    }
    
    @Override
    public void calcularTaxa () {
        this.saldo -= TAXA_MANUTENCAO;
    }
}

//ContaPoupanca
public class ContaPoupanca extends Conta implements Taxa{
    private static final double TAXA_JUROS = 0.01;
    
    public ContaPoupanca(int numeroConta, String titular, double saldo) {
        super(numeroConta, titular, saldo);
    }
    
    @Override 
    public void calcularTaxa() {
        double juros = this.saldo * TAXA_JUROS;
        this.saldo -= juros;
    }
}

//Banco
import java.util.HashSet;
import java.util.HashMap;

public class Banco {

    private HashSet<Conta> ContasBancarias;
    private HashMap<Integer, Conta> ContaPorNumero;
    
    public Banco () {
        ContasBancarias = new HashSet<>();
        ContaPorNumero = new HashMap<>();
    }
    
    public void addConta (Conta conta) {
        ContasBancarias.add(conta);
        ContaPorNumero.put(conta.getNumeroConta(), conta);
    }
    
    public HashSet<Conta> getContasBancarias () {
        return ContasBancarias;
    }
    
    public void getContaPorNumero (int numeroConta) {
        System.out.println("Numero Conta: " + numeroConta + "\nTitular: " +ContaPorNumero.get(numeroConta).getTitular() + "\nSaldo: " + ContaPorNumero.get(numeroConta).getSaldo());
    }
    
    public void RemoverConta(int numeroConta) {
        ContasBancarias.remove(ContaPorNumero.get(numeroConta));
        ContaPorNumero.remove(numeroConta);
    } 
    
    
    public void calcularTaxas () {
        for (Conta conta : ContasBancarias) {
            if (conta instanceof Taxa) {
                ((Taxa) conta).calcularTaxa();
            }
        }
    }
}

//Taxa
import java.util.HashSet;

public interface Taxa {
    void calcularTaxa ();
}
