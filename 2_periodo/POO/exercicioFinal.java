package com.mycompany.aula13112023;

public class Aula13112023 {

    public static void main(String[] args) {
        Fisica f1 = new Fisica ("user1", "nome1", "52998224725");
        
        String A = "22323239127";
        
    }
}

package com.mycompany.aula13112023;

abstract class Cliente {
    public String usuario;
    
    public abstract void imprimir ();
}

package com.mycompany.aula13112023;

public class Fisica extends Cliente{
    private String nome;
    private String cpf;
    
    public Fisica (String usuario, String nome, String cpf) {
        if(validarCPF(cpf) == true) {
            this.usuario = usuario;
            this.nome = nome;
            this.cpf = cpf;
        } else {
            System.out.println("Cpf inválido.");
        }
        
    }
    
    public String getNome () {
        return nome;
    }
    
    public String getCpf () {
        return cpf;
    }
    
    private boolean validarCPF(String cpf) {
        if (cpf.length() == 11) {
            int x = 0;
            for(int i = 0, j = 10; i < 9; i++, j--) {
                x += j*(Integer.valueOf(cpf.substring(i, i+1)));
            }
            int v1 = (x * 10) % 11;
            if (v1 == 10) {
                v1 = 0;
            }
            
            System.out.println(v1);
            if (v1 == Integer.valueOf(cpf.substring(9, 10))) {
                int x2 = 0;
                for(int n = 0, m = 11; n < 10; n++, m--) {
                    x2 += m*(Integer.valueOf(cpf.substring(n, n+1)));
                }
                int v2 = (x2 * 10) / 11;
                
                if (v2 == Integer.valueOf(cpf.substring(10, 11))) {
                    return true;
                } else {
                    return false;
                }
            } else {
                return false;
            }
            
        } else {
            return false;
        }
    }
    
    @Override
    public void imprimir() {
        
    }
}

package com.mycompany.aula13112023;

abstract class Juridica extends Cliente{
    public String nomeFantasia;
    public String cnpj;
    
    @Override
    public void imprimir() {
        
    }
}

