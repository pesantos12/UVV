/*§Crie e implemente uma classe PopulacaoBaratas que simule o crescimento de uma população de baratas.
§O tamanho inicial da população de baratas é definido de forma Randômica. (pesquise o objeto Random...)
§O método aumentaBaratas, simula a proporção que a população de baratas vai se multiplicar.
§O método spray pulveriza as baratas com um inseticida e reduz a população em 10%.
§Implemente também uma classe que simule uma cozinha que tenha uma população de baratas
§Utilize a aumentaBaratas, utilize o spray, e imprima a contagem de baratas.*/
//main:
public class Main
{
	public static void main(String[] args) {
	    //declaração de objeto da classe PopulacaoBaratas
	    PopulacaoBaratas b = new PopulacaoBaratas();
		b.populacao = b.tamanhoInicial();
        
        System.out.printf("\tPopulação de Baratas\nPopulação inicial: %.0f\n", b.populacao);
        b.aumentaBaratas();
        System.out.printf("População depois de aumentar: %.0f\n", b.populacao);
        b.spray();
        System.out.printf("População depois do spray: %.0f", b.populacao);
        
        Cozinha cz = new Cozinha();
        cz.bC.populacao = cz.bC.tamanhoInicial();
        cz.populacaoCozinha();
	}
}

//População de baratas:

import java.util.*;

public class PopulacaoBaratas {
    //atributos
    double populacao;
    
    //métodos
    int tamanhoInicial() {
        Random rand = new Random ();
        return rand.nextInt(1000) + 1;
    }
    
    
    void aumentaBaratas () {
        populacao *= 1.15;
    }
    
    void spray () {
        populacao *= 0.9;
    }
}

//cozinha:

public class Cozinha {
    int cozinheiros = 10;
    PopulacaoBaratas bC = new PopulacaoBaratas();
    
    void populacaoCozinha() {
        System.out.printf("\n\n\tCozinha\nCozinheiros: %d\nBaratas: %.0f", this.cozinheiros, bC.populacao);
    }
}
