public class Main {
    public static void main(String[] args) {
       
        DDD ddd = new DDD("123", "Sao Paulo");
        Telefone telefone1 = new Telefone("123456789");
        telefone1.associarPessoa(new Pessoa("João", 123456789));
        telefone1.associarChip(new Chip("987654", "Vivo"));

        
        DDD ddd2 = new DDD("456", "Rio de Janeiro");
        Telefone telefone2 = new Telefone("987654321");
        telefone2.associarPessoa(new Pessoa("Maria", 987654321));

       
        DDD ddd3 = new DDD("789", "Minas Gerais");
        Telefone telefone3 = new Telefone("111223344");
        telefone3.associarPessoa(new Pessoa("Carlos", 111223344));

      
        System.out.println("Exemplo 1:");
        System.out.println("DDD: " + ddd.getNumero() + " - " + ddd.getEstado());
        System.out.println("Telefone: " + telefone1.getNumero());
        System.out.println("Nome: " + telefone1.getPessoa().getNome());
        System.out.println("RG: " + telefone1.getPessoa().getRg());
        System.out.println("ID Chip: " + telefone1.getChip().getId());
        System.out.println("Operadora: " + telefone1.getChip().getOperadora());
        System.out.println();

        System.out.println("Exemplo 2:");
        System.out.println("DDD: " + ddd2.getNumero() + " - " + ddd2.getEstado());
        System.out.println("Telefone: " + telefone2.getNumero());
        System.out.println("Nome: " + telefone2.getPessoa().getNome());
        System.out.println("RG: " + telefone2.getPessoa().getRg());
        System.out.println();

        System.out.println("Exemplo 3:");
        System.out.println("DDD: " + ddd3.getNumero() + " - " + ddd3.getEstado());
        System.out.println("Telefone: " + telefone3.getNumero());
        System.out.println("Nome: " + telefone3.getPessoa().getNome());
        System.out.println("RG: " + telefone3.getPessoa().getRg());
    }
}




class DDD {
    private String numero;
    private String estado;

    DDD(String numero, String estado) {
        this.numero = numero;
        this.estado = estado;
    }
    
    public String getNumero() {
        return numero;
    }
    
    public String getEstado() {
        return estado;
    }
}





class Telefone {
    private String numero;
    private Pessoa pessoa; 
    private Chip chip; 

    Telefone(String numero) {
        this.numero = numero;
    }

    void associarPessoa(Pessoa pessoa) {
        this.pessoa = pessoa;
    }

    void associarChip(Chip chip) {
        this.chip = chip;
    }
    
    public String getNumero() {
        return numero;
    }
    
    public Pessoa getPessoa () {
        return pessoa;
    }
    
    public Chip getChip () {
        return chip;
    }
}






class Pessoa {
    private String nome;
    private int rg;
    private Telefone telefone; 

    Pessoa(String nome, int rg) {
        this.nome = nome;
        this.rg = rg;
    }

    void associarTelefone(Telefone telefone) {
        this.telefone = telefone;
    }
    
    public String getNome() {
        return nome;
    }
    
    public int getRg () {
        return rg;
    }
    
    public Telefone getTelefone() {
        return telefone;
    }
}





class Chip {
    private String id;
    private String operadora;

    Chip(String id, String operadora) {
        this.id = id;
        this.operadora = operadora;
    }
    
    public String getId() {
        return id;
    }
    
    public String getOperadora() {
        return operadora;
    }
}
