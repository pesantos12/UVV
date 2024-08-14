using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace aula04
{
    internal class Notas
    {
        public float Nota01 { get; set; }
        public float Nota02 { get; set; }

        public string Status { get; set; } = "AP";

        public float CalcularMedia() => (Nota01 * Nota02) / 2;


    }
}
