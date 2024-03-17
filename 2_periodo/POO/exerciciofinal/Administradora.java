package com.mycompany.exerciciofinal;
import java.util.*;

public class Administradora extends Juridica implements InstituicaoFinanceira{
    private double taxaCorretagem;
    private boolean plataformaOnline;
    private List<Investimento> lista;
    
    public Administradora (String user, String nomeFantasia, String cnpj, double taxaCorretagem, boolean plataformaOnline) {
        super(user, nomeFantasia, cnpj);
        this.taxaCorretagem = taxaCorretagem;
        this.plataformaOnline = plataformaOnline;
        lista = new ArrayList<>();
    }
    
    public void adicionarInvestimento (int id, double valor) {
        Investimento i = new Investimento (id, valor, this);
        
    }
    
    @Override
    public void calcularAtivosFinanceiros () {
        
    }
    
    @Override
    public void imprimir() {
        
    }
}
