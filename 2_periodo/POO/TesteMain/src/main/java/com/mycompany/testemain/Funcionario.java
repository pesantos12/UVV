package com.mycompany.testemain;

public class Funcionario extends Usuario{
    public String matricula;
    public String funcao;
    
    public Funcionario (String matricula, String funcao, String user, int senha) {
        super(user, senha);
        this.matricula = matricula;
        this.funcao = funcao;
    }
    
    @Override
    public void imprimir() {
        System.out.println("Funcionário: " + this.matricula + " ("+this.funcao +")");
    }
    
}
