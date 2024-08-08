namespace descobrirNumeroSecreto
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Random rand = new Random();
            int numSecreto = rand.Next(1, 1001);
            var v1 = numSecreto / 100;
            var v2 = numSecreto / 10;

            Console.WriteLine("\nBem-vindo ao jogo de adivinhar o número inteiro positivo secreto!");

            for(int i = 1; i <= 16; i++)
            {
                Console.WriteLine("\nChute um número: ");
                int escolha = int.Parse(Console.ReadLine());
                if (escolha == numSecreto)
                {
                    Console.WriteLine("\nParabéns! Você acertou.");
                    break;
                } 

                if (i == 4)
                {
                    Console.WriteLine("\nDica 1: chuta um número entre 1 e 1000");
                } else if (i == 9)
                {
                    Console.WriteLine($"\nDica 2: chuta um número entre { (v1 == 0 ? 1 : (v1*100)+1)} e {(v1 == 0 ? 100 : (v1*100) + 100)}");
                } else if (i == 13)
                {
                    Console.WriteLine($"\nDica 3: chuta um número entre {(v2 == 0 ? 1 : (v2*10)+1)} e {(v1 == 0 ? 10 : (v2*10) + 10)}");
                }
                
                
                
                Console.WriteLine("\nPelo visto você errou... Tente novamente.");
                
            }

            Console.WriteLine($"\nResultado: {numSecreto}");

        }
    }
}
