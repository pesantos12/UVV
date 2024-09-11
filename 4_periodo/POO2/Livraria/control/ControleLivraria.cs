using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WpfApp1.model;

namespace WpfApp1.control
{
    internal class ControleLivraria
    {
        private Livraria modelo = new();

        public Boolean controleCadastrarLivrariaNova(string razaoSocial, string cnpj)
        {
            Livraria liv = new()
            {
                RazaoSocial = razaoSocial,
                CNPJ = cnpj
            };

            if (modelo.CadastrarLivraria(liv))
            {
                return true;
            } else {
                return false;
            };
        }
    }
}
