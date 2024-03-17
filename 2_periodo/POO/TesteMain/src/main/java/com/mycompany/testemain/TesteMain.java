package com.mycompany.testemain;
import java.util.List;
import java.util.ArrayList;

public class TesteMain {

    public static void main(String[] args) {
        Cliente cA = new Cliente("AAA", "146653634", "clienteCA", 1234);
        Cliente cB = new Cliente("BBB", "141241244", "clienteCB", 4321);
        
        Funcionario fA = new Funcionario("001", "Assistente", "FuncionarioFA", 7894);
        Funcionario fB = new Funcionario("002", "Vendedor", "FuncionarioFB", 4567);
        
        cA.adicionarCompra(10, 100);
        cA.adicionarCompra(20, 150);
        
        cB.adicionarCompra(30, 200);
        cB.adicionarCompra(40, 250);
        
        List<Usuario> usuarioGeral = new ArrayList<>();
        usuarioGeral.add(cA);
        usuarioGeral.add(cB);
        usuarioGeral.add(fA);
        usuarioGeral.add(fB);
        
        for(Usuario u: usuarioGeral) {
            u.imprimir();
        }
    }
}
