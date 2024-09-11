using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WpfApp1.persistencia;

namespace WpfApp1.model
{
    internal class Livro
    {
        public string titulo {  get; set; }
        public string ISBN { get; set; }
        public int idade { get; set; }
        public string nomeAutor {  get; set; }

        public Boolean cadastrarLivro(Livro livro)
        {
            BD.SalvarLivro(livro);
            return true;
        }
    }
}
