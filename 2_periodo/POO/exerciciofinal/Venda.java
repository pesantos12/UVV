package com.mycompany.exerciciofinal;

public class Venda {
    private int id;
    private double valor;
    private Comercio comercio;
    
    public Venda (int id, double valor, Comercio comercio) {
        this.id = id;
        this.valor = valor;
        this.comercio = comercio;
    }
    
    public Comercio getComercio () {
        return this.comercio;
    }
    
    public int getId () {
        return id;
    }
    
    public double getValor () {
        return valor;
    }
}
