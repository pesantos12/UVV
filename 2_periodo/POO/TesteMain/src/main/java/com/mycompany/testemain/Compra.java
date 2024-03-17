package com.mycompany.testemain;

public class Compra {
    private int id;
    private int valor;
    private Cliente cli;
    
    public Compra (int id, int valor, Cliente cliente) {
        this.id = id;
        this.valor = valor;
        this.cli = cliente;
    }
    
    public int getId () {
        return id;
    }
    
    public void setValor (int valor) {
        this.valor = valor;
    }
    
    public int getValor () {
        return valor;
    }
    
    public Cliente getCli () {
        return cli;
    }
}
