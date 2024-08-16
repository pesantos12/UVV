namespace Exercicio
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /*Cenário: Gestão de Pessoas no “IBGE” ->
• Escreva um algoritmo que receba a idade de um grupo de pessoas, calcule
e imprima a porcentagem de cada faixa etária em relação ao total de
pessoas.
• As faixas etárias são:
• 01 - 15 anos - A
• 16 - 30 anos - B
• 31 - 45 anos - C
• 46 - 60 anos - D
• >= 61 anos - E
• Para encerrar a entrada de dados, digite uma idade <= 0.*/
            int i, total = 0;
            double A = 0.0, B = 0.0, C = 0.0, D = 0.0, E = 0.0;
            do
            {
                Console.WriteLine("Digite a idade (0 para parar): \n");
                i = Convert.ToInt32(Console.ReadLine());
                if (i >= 1 && i <= 15)
                {
                    A++; total++;
                } else if (i >= 16 && i <= 30)
                {
                    B++; total++;
                } else if (i >=31 && i <= 45)
                {
                    C++; total++;
                } else if (i >=46 && i <= 60)
                {
                    D++; total++;
                } else if (i >=61) {
                    E++; total++;
                }
            } while (i != 0);
            Console.WriteLine($"\nFaixa etária A: {A / total}\nFaixa etária B: {B / total}\nFaixa etária C: {C / total}\nFaixa etária D: {D / total}\nFaixa etária E: {E / total}");

        }
    }
}

/*Cenário: Verão Capixaba 01 ->
• Faça um algoritmo para realizar as conversões de temperatura, de acordo
com as formulas abaixo:*/

namespace Exercicio
{
    internal class Program
    {
        static void Main(string[] args)
        {
            temp t = new temp();
            Console.WriteLine(Math.Round(t.KtoF(10), 2));
            
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio
{
    internal class temp
    {
        public double CtoF(double x)
        {
            return (x * 1.8) + 32;
        }

        public double FtoC(double x)
        {
            return (x - 32) / 1.8;
        }
        public double CtoK(double x)
        {
            return x + 273.15;
        }
        public double KtoC(double x)
        {
            return x - 273.15;
        }
        public double FtoK(double x)
        {
            return (CtoK(FtoC(x)));
        }
        public double KtoF(double x)
        {
            return (CtoF(KtoC(x)));
        }
    }
}

/*Cenário: Verão Capixaba 02 ->
• Os comerciantes das Praias de Vila-Velha querem saber a temperatura média do verão
capixaba.
• Para isso é necessário escrever um algoritmo que leia a temperatura diária no verão,
durante 15 dias, e exiba a temperatura média da estação.
• Deve impedir a entrada de dados de uma temperatura fora da estação.
• Sabe-se que as temperaturas, na estação de verão Capixaba, ficam acima de 28 °C.*/

namespace Exercicio
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double media = 0, total = 0, temp = 0, qtd = 0;
            for (int i = 1; i <= 15; i++)
            {
                Console.WriteLine($"Qual foi a temperatura do dia {i}");
                temp = Convert.ToDouble(Console.ReadLine());
                if (temp < 28)
                {
                    Console.WriteLine("As temperaturas devem ser acima de 28 °C.");
                    i--;
                    continue;
                }
                total += temp;
                qtd++;
            }
            media = total / qtd;
            Console.WriteLine($"Média dos 15 dias: {Math.Round(media, 2)}");
        }
    }
}
