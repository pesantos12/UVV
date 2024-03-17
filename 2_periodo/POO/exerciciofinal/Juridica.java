package com.mycompany.exerciciofinal;

abstract class Juridica extends Cliente{
    public String nomeFantasia;
    public String cnpj;
    
    public Juridica (String usuario, String nomeFantasia, String cnpj) {
        this.usuario = usuario;
        this.cnpj = cnpj;
        if (validarCNPJ(cnpj) == true) {
            this.nomeFantasia = nomeFantasia;
        }  else {
            this.nomeFantasia = nomeFantasia + " cnpj inválido";
            System.out.println("Cnpj inválido");
        }
    }
    
    private boolean validarCNPJ (String cnpj) {
        int x1 = 0;
        if (cnpj.length() == 14) {
            for (int i = 5, j = 3, n = 0; i >= 2; i--, j--, n++) {
                x1 += i*(Integer.valueOf(cnpj.substring(n, n+1)));
                if (j == 0) {
                    i += 8;
                }
            }
            x1 %= 11;
            int v1 = 0;
            if (x1 == 1 || x1 == 0) {
                v1 = 0;
            } else {
                v1 = 11 - x1;
            }
            
            if (v1 == Integer.valueOf(cnpj.substring(12, 13))) {
                int x2 = 0;
                for (int I = 6, J = 4, m = 0; I >= 2; I--, J--, m++) {
                    x2 += I*(Integer.valueOf(cnpj.substring(m, m+1)));
                    if (J == 0) {
                        I += 8;
                    }
                }
                int v2 = 0;
                x2 %= 11;
                if (x2 == 0 || x2 == 1) {
                    v2 = 0;
                } else {
                    v2 = 11 - x2;
                }
                
                if (v2 == Integer.valueOf(cnpj.substring(13, 14))) {
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
    
}
