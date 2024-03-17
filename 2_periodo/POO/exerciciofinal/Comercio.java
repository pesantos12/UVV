package com.mycompany.exerciciofinal;
import java.util.*;

public class Comercio extends Juridica{
    private String ramoOperacao;
    private List<Venda> lista;
    
    public Comercio (String usuario, String nomeFantasia, String cnpj, String ramoOperacao) {
        super(usuario, nomeFantasia, cnpj);
        this.ramoOperacao = ramoOperacao;
        lista = new ArrayList<>();
    }
    
    public void adicionarVenda (int id, double valor) {
        Venda v = new Venda(id, valor, this);
        lista.add(v);
    }
    
    @Override
    public void imprimir() {
        
    }
}
