package com.mycompany.projetofinaldois;
import java.util.*;

public class Pagamento implements Avista, Cartao, Pix {
    Random rand = new Random ();
    
    private int id;
    private Cliente cli;
    private double valorOriginal;
    private double valorCalculado;
    private int tipoPagamento;
    
    public Pagamento (Cliente cli, int tipoPagamento, double valorOriginal) {
        this.id = gerarId();
        this.cli = cli;
        this.tipoPagamento = tipoPagamento;
        this.valorOriginal = valorOriginal;
        calcularPagamento();
    }
    
    private int gerarId() {
        int id1 = rand.nextInt() %1000;
        if (id1 < 0) {
            id1 *= -1;
        }
        return id1;
    }
    
    public Cliente getCli () {
        return this.cli;
    }
    
    public int getId () {
        return this.id;
    }
    
    public double getValorOriginal () {
        return this.valorOriginal;
    }
    
    public double getValorCalculado () {
        return this.valorCalculado;
    }
    
    public int getTipoPagamento () {
        return this.tipoPagamento;
    }
    
    public void calcularPagamento() {
        switch (tipoPagamento) {
            case 1:
                calcularAVista();
                break;
            case 2:
                calcularCartao();
                break;
            default:
                calcularPix();
                break;
        }
    }
    
    @Override
    public void calcularAVista () {
        valorCalculado = (valorOriginal*0.9);
    }
    
    @Override
    public void calcularCartao() {
        valorCalculado = (valorOriginal*1.05);
    }
    
    @Override
    public void calcularPix() {
        valorCalculado = (valorOriginal*0.95);
    }

    private int rand() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
}
