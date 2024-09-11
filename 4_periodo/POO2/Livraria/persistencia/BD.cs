using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WpfApp1.model;

namespace WpfApp1.persistencia
{
    internal class BD
    {
        public static List<Livraria> livrarias = new();
        public static List<Livro> livros = new();

        public static void SalvarLivro(Livro livro) => livros.Add(livro);
        public static void SalvarLivraria(Livraria livraria) => livrarias.Add(livraria);
    }
}
