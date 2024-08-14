using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace aula04
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Item it01 = new Item();
            it01.Tipo = "Borracha";
            it01.Qty = 10;

            Item it02 = new Item()
            {
                Tipo = "Lápis",
                Qty = 2
            };

            //Item it03 = new()
            //{
            //    Tipo = "Caneta",
            //    Qty = 3
            //};

            Notas NotasAluno = new Notas()
            {
                Nota01 = 10,
                Nota02 = 4
            };

            Aluno aluno01 = new Aluno()
            {
                Nome = "Vinicius",
                Mat = 123,
                NotasDigitadas = NotasAluno,
            };

            // aluno01.Items.Add(it01);
            // aluno01.Items.Add(it02);
            aluno01.AdicionarItem(it01);
            aluno01.AdicionarItem(it02);


            Console.WriteLine($"O aluno {aluno01.Nome} tem nota1 = {aluno01.NotasDigitadas.Nota01}");

            //foreach (Item it in aluno01.Items)
            //{
            //    Console.WriteLine($"Tipo: {it.Tipo} / Qty: {it.Qty}");
            //}

            aluno01.ListarItens();

            aluno01.VerificarTipo("vasco");

            Item itemRec = aluno01.RecuperarItemPeloTipo("Lápis");
            Console.WriteLine($"A quantidade do item recuperado foi {itemRec.Qty}");
        }
    }
}
