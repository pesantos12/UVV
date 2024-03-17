package com.mycompany.exerciciofinal;

public class Investimento {
    private int id;
    private double valor;
    private Administradora a;
    
    public Investimento (int id, double valor, Administradora a) {
        this.id = id;
        this.valor = valor;
        this.a = a;
    }
    
    public Administradora getAdministradora () {
        return a;
    }
    
    public int getId () {
        return id;
    }
    
    public double getValor () {
        return valor;
    }
}
