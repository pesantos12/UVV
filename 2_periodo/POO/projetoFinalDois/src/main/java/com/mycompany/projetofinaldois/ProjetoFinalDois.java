package com.mycompany.projetofinaldois;

public class ProjetoFinalDois {

    public static void main(String[] args) {
        Cliente c1 = new Cliente ("Pedro", "123");
        c1.comprar(1, 1200);
        c1.comprar(1, 2200);
        c1.comprar(2, 3000);
        c1.imprimirCompras();
        c1.valorGasto();
        
        Cliente c2 = new Cliente ("João", "122");
        c2.comprar(3, 500);
        c2.comprar(2, 800);
        c2.comprar(3, 400);
        c2.imprimirCompras();
        c2.valorGasto();
    }
}
