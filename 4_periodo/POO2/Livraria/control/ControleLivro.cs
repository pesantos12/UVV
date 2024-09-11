using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WpfApp1.model;

namespace WpfApp1.control
{
    internal class ControleLivro
    {
        private Livro modeloLivro = new();

        public Boolean ControleCadastroLivro(string titulo, string isbn, string nomeAutor, int idade)
        {
            Livro liv = new()
            {
                titulo = titulo,
                ISBN = isbn,
                nomeAutor = nomeAutor,
                idade = idade
            };

            if(modeloLivro.cadastrarLivro(liv))
            {
                return true;
            } else
            {
                return false;
            }
        }
    }
}
