/*Crie e implemente uma classe PopulacaoBaratas que simule o
crescimento de uma população de baratas.
◦ A quantidade inicial da população de baratas é definido de forma Randômica.
(pesquise o objeto Random...)
◦ O método aumentaBaratas, simula a proporção que a população de baratas vai
se multiplicar.
◦ O método spray pulveriza as baratas com um inseticida e reduz a população em
10%.
◦ O método getQtdBaratas devolve o número atual de baratas.
◦ Implemente também uma classe que simule uma cozinha que tenha uma
população de baratas
◦ Utilize a aumentaBaratas, utilize o spray, e imprima a contagem de baratas.*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PopulacaoDeBaratas
{
    internal class PopBaratas
    {
        private int qtdBaratas;

        public PopBaratas()
        {
            Random rand = new Random();
            qtdBaratas = rand.Next(1, 10000);
        }

        public void aumentaBaratas()
        {
            Random rand = new Random();
            int porcentagem = rand.Next(1, 100);
            int aumento = (qtdBaratas * porcentagem)/100;
            Console.WriteLine($"A população de baratas vai aumentar em {porcentagem}%. Indo de {qtdBaratas} para {qtdBaratas + aumento}\n");
            qtdBaratas += aumento;
        }

        public int getQtdBaratas()
        {
            return qtdBaratas;
        }

        public void spray()
        {
            Console.WriteLine($"O spray está sendo ativado. Reduzinho a população em 10%, de {qtdBaratas} para {(int) (qtdBaratas*0.9)}\n");
            qtdBaratas = (int)(qtdBaratas * 0.9);
        }

    }
}
//----------------------------------------------------------------------------------------
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PopulacaoDeBaratas
{
    internal class Cozinha
    {
        PopBaratas pb;

        public Cozinha()
        {
            pb = new PopBaratas();
        }

        public void simular()
        {
            pb.aumentaBaratas();
            pb.spray();
            int numeroDeBaratas = pb.getQtdBaratas();
            Console.WriteLine($"Número de baratas: {numeroDeBaratas}\n");
        }
    }
}
//----------------------------------------------------------------------------------------
namespace PopulacaoDeBaratas
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Cozinha cozinha = new Cozinha();
            cozinha.simular();
        }
    }
}
