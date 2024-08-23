/*Exercício
• Cenário: UVV Acadêmico -> Implemente a hierarquia abaixo... E depois crie uma
simples aplicação para testar a implementação.*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace aula240823
{
    internal abstract class Professor
    { //prop + tab
        private String _nome;
        public string Nome { get => _nome; set => _nome = value; }
        private int _matricula;
        public int Matricula { get => _matricula; set => _matricula = value; }
        private int _cargaHoraria;
        public int CargaHoraria { get => _cargaHoraria; set => _cargaHoraria = value; }
        private double _beneficio;
        public double Beneficio { set => _beneficio = value; }



        public abstract void calcularBeneficio();
        public double getBeneficio() { return _beneficio; }
    }
}

//

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace aula240823
{
    internal class ProfHorista : Professor
    {
        private double valorHora;

        public ProfHorista(String nome, int matricula, int cargaHoraria, double beneficio, double valorHora)
        {
            this.Nome = nome;
            this.Matricula = matricula;
            this.CargaHoraria = cargaHoraria;
            this.Beneficio = beneficio;
            this.valorHora = valorHora;
        }
        public override void calcularBeneficio()
        {
            Console.WriteLine(valorHora*CargaHoraria*getBeneficio());
        }
    }
}

//

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace aula240823
{
    internal class ProfDE : Professor
    {
        public ProfDE(String nome, int matricula, int cargaHoraria, double beneficio)
        {
            this.Nome = nome;
            this.Matricula = matricula;
            this.CargaHoraria = cargaHoraria;
            this.Beneficio = beneficio;
        }

        public override void calcularBeneficio()
        {
            Console.WriteLine(getBeneficio()*CargaHoraria);
        }
    }
}


//

namespace aula240823
{

    internal class Program
    {
        static void Main(string[] args)
        {
            ProfHorista ph = new ProfHorista("alvaro", 123, 30, 1.1, 5);
            ph.calcularBeneficio();

            ProfDE pde = new ProfDE("Rosalen", 124, 40, 1.2);
            pde.calcularBeneficio();
        }
    }
}

/*Exercício
• Cenário: Aeroporto Moderno->
Implemente a hierarquia abaixo... E
depois crie uma simples aplicação para
testar a implementação.*/