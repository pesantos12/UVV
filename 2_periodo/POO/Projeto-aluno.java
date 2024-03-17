import java.util.*;

public class Main
{
	public static void main(String[] args) {
        Aluno a1 = new Aluno("Ped", "CC", 'D', 2);
        a1.imprimirFicha();
        Aluno a2 = new Aluno();
        a2.imprimirFicha();
        Aluno.totalAlunos();
        
        a1.setNome("Pedro");
        System.out.printf("\n\nCorreção do nome do Aluno: "+a1.getNome());
        
	}
}



import java.util.*;


public class Aluno 
{
    Scanner scan = new Scanner (System.in);
    private String matricula;
    private String nome;
    private String curso;
    private char turma;
    private int periodo;
    private double nota_1B;
    private double nota_2B;
    private double nota_final;
    private static int quantidade_aluno = 0;
    
    private String gerarMatricula() {
        Random rand = new Random();
        String ano = "2023";
        int matricula = rand.nextInt(10000);
        return ano + matricula;
    }
    
    public Aluno (String nome, String curso, char turma, int periodo) {
        this.matricula = gerarMatricula();
        this.nome = nome;
        this.curso = curso;
        this.turma = turma;
        this.periodo = periodo;
        quantidade_aluno++;
    }
    
    public Aluno () {
        this.matricula = gerarMatricula();
        System.out.printf("\n\n\tNovo Aluno");
        System.out.printf("\nNome: ");
        this.nome = scan.nextLine();
        System.out.printf("Curso: ");
        this.curso = scan.nextLine();
        System.out.printf("Turma: ");
        this.turma = scan.next().charAt(0);
        System.out.printf("Período: ");
        this.periodo = scan.nextInt();
        quantidade_aluno++;
    }
      
    public void imprimirFicha() {
        System.out.printf("\n\tFicha do Aluno\nMatrícula: %S\nNome: %S\nCurso: %S\nTurma: %c\nPeriodo: %d",matricula, nome, curso, turma, periodo);
    }
    
    public static void totalAlunos() {
        System.out.printf("\n\nTotal de Alunos: %d", quantidade_aluno);
    }
    
    public String getNome() {
        return this.nome;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public double calcularFinal(double nota_1B, double nota_2B) {
        if (nota_1B + nota_2B >= 14) {
            System.out.printf("\nO aluno passou.");
        } else {
            System.out.printf("\nDigite a nota final: ");
            this.nota_final = nextDouble();
        }
    }
    
    
}
