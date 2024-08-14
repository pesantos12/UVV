using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace aula04
{
    internal class Aluno
    {
        public string Nome { get; set; }
        public int Mat { get; set; }
        
        public Notas NotasDigitadas { get; set; }

        public List<Item> Items { get; set; } = new List<Item>(); // Resume a ideia de um construtor que inicia a lista

        public void AdicionarItem(Item i)
        {
            if(i != null)
                Items.Add(i);
        }

        public void ListarItens()
        {
            foreach (Item it in Items)
            {
                Console.WriteLine($"Tipo: {it.Tipo} / Qty: {it.Qty}");
            }
        }

        private bool VerificarSeExistePeloTipo(string tipo)
        {
            foreach (Item it in Items)
            {
                if (it.Tipo == tipo)
                {
                    return true;
                }
            }
            return false;
        }


        public void VerificarTipo(string tipo)
        {
            bool v = VerificarSeExistePeloTipo(tipo);
            if (v == true)
            {
                Console.WriteLine($"O aluno {Nome} contém o tipo {tipo}");
            } else
            {
                Console.WriteLine($"O aluno {Nome} não contém o tipo {tipo}");
            }
        }
            
        public Item RecuperarItemPeloTipo(string tipo)
        {
            bool v = VerificarSeExistePeloTipo(tipo);
            Item itemRecuperado;
            if(v == true)
            {
                foreach(Item it in Items)
                {
                    if(it.Tipo == tipo)
                    {
                        return itemRecuperado = it;
                    };
                }
            } else
            {
                VerificarTipo(tipo);
            }
            return itemRecuperado = null;
        }
    }
}
