using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.Metadata.Ecma335;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio.Aula02
{
    internal class agendaTelefonica
    {
        private Dictionary<string, string> colecao = new Dictionary<string, string>();

        public void inserir(string nome, string numero) => colecao.Add(nome, numero);
        public string buscarNumero(string nome) => colecao[nome];
        public void remover(string nome) => colecao.Remove(nome);
        public int tamanho() => colecao.Count();
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////

using Exercicio.Aula02;

namespace Exercicio
{
    internal class Program
    {
        static void Main(string[] args)
        {
            agendaTelefonica ag = new agendaTelefonica();
            ag.inserir("Pedro", "2312311");
            ag.inserir("Andrei", "2302329");
            ag.inserir("Rosalen", "2032325");

            Console.WriteLine(ag.buscarNumero("Pedro"));
            ag.remover("Andrei");
            Console.WriteLine(ag.tamanho());
        }
    }
}
