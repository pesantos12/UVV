using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WpfApp1.persistencia;

namespace WpfApp1.model
{
    internal class Livraria
    {
        public string RazaoSocial { get; set; } = "";
        public string CNPJ { get; set; } = "";

        public Boolean CadastrarLivraria(Livraria livraria)
        {
            BD.SalvarLivraria(livraria);

            return true;
        }
    }
}
