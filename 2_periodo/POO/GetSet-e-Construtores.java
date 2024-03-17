//utilizando Get Set

public class Main
{
	public static void main(String[] args) {
		Cliente c = new Cliente();
		c.saldo = 1000;
		c.setNome("Cassio");
		
		System.out.println("O valor do saldo é: "+ c.saldo);
		System.out.println("O nome é: " + c.getNome());
	}
}


public class Cliente {
    public double saldo;
    private String nome;
    
    public boolean sacar (double valor) {
        this.saldo -= valor;
        return true;
    }
    
    public String getNome() {
        return this.nome;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }
}

//utilizando construtores

public class Main
{
	public static void main(String[] args) {
		Aleatorio alet = new Aleatorio();
		Aleatorio alet2 = new Aleatorio(5);
		
		
		System.out.println(alet.numero);
		System.out.println(alet2.numero);
	}
}


import java.util.*;

public class Aleatorio 
{
    public int numero;
    
    public Aleatorio () {
        Random rand = new Random ();
        numero = rand.nextInt(10);
    }
    
    public Aleatorio (int max) {
        Random rand = new Random ();
        numero = rand.nextInt(max);
    }
}
