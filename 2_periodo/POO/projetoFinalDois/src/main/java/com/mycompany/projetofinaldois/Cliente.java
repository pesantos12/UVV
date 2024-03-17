package com.mycompany.projetofinaldois;
import java.util.*;


public class Cliente {
    private String nome;
    private String cpf;
    private List<Pagamento> lista; 
    
    public Cliente (String nome, String cpf) {
        this.nome = nome;
        this.cpf = cpf;
        lista = new ArrayList<>();
    }
    
    public String getNome () {
        return this.nome;
    }
    
    public String getCpf () {
        return this.cpf;
    }
    
    public void comprar (int tipoPagamento, double valorOriginal) {
        Pagamento p = new Pagamento (this, tipoPagamento, valorOriginal);
        lista.add(p);
    }
    
    public void imprimirCompras() {
        System.out.println("\tLista de compras do " + nome);
        for (Pagamento p : lista) {
            String pag = null;
            switch (p.getTipoPagamento()) {
                case 1:
                    pag = "Avista";
                    break;
                case 2:
                    pag = "Cartão";
                    break;
                case 3: 
                    pag = "Pix";
                    break;
                default:
                    break;
            }
            System.out.println("Id: " + p.getId() + "\nTipo de pagamento: " + pag + "\nValor original: R$ " + p.getValorOriginal()+ "\nValor com desconto: R$" + p.getValorCalculado() + "\n");
        } 
    }
    public void valorGasto () {
        double total = 0;
        for (Pagamento p: lista) {
            total += p.getValorCalculado();
        }
        System.out.println("Valor total gasto (com desconto): R$" + total + "\n");
    }
}
