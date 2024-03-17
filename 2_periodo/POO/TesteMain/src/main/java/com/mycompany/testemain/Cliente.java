package com.mycompany.testemain;
import java.util.List;
import java.util.ArrayList;

public class Cliente extends Usuario{
    public String nome;
    public String cpf;
    public List<Compra> minhasCompras = new ArrayList<>();
    
    public Cliente(String nome, String cpf, String user, int senha) {
        super(user, senha);
        this.nome = nome;
        this.cpf = cpf;
    }
    
    public void adicionarCompra(int id, int valor) {
        Compra c = new Compra(id, valor, this);
        minhasCompras.add(c);
    }
    
    @Override
    public void imprimir() {
        System.out.println("Cliente: "+ this.nome);
        System.out.println("cpf: " + this.cpf);
        if(this.minhasCompras.isEmpty()) {
            System.out.println("Sem registros.");
        } else {
            for(Compra c: this.minhasCompras) {
                System.out.println("---Compra: "+ c.getValor() +" ("+ c.getId() +")");
            }
        }
    }
}
