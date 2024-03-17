package com.mycompany.aula1016;

import java.util.*;

public class Autor {
    private String nome;
    private String abreviatura;
    private List<Contato> contatos;

    public Autor(String nome, String abreviatura) {
        this.nome = nome;
        this.abreviatura = abreviatura;
        this.contatos = new ArrayList<Contato>();
    }

    public void adicionarContato(String t, String c){
        Contato temporario = new Contato(t, c);
        this.contatos.add(temporario);
    }
    
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getAbreviatura() {
        return abreviatura;
    }

    public void setAbreviatura(String abreviatura) {
        this.abreviatura = abreviatura;
    }

    public List<Contato> getContatos() {
        return contatos;
    }
    
    
    
}
