fun divisao (a, b) = a div b;
divisao (6, 2);
val j = (6, 3);
divisao j;
(* div é para divisão de reais, / é para divisão de inteiros *)


(* Faça uma função para calcular o fatorial de um número n; *)
fun fatorial 0 = 1
  | fatorial n = n * fatorial (n-1);
fatorial 5;

val lista = [1, 2, 3, 4];
val lista2 = rev lista;

fun revlista [] = []
  | revlista (h::t) = revlista t @ [h];

revlista [1, 2, 3, 4];
revlista (explode "VASCO");

fun sum [] = 0
  | sum (x::xs) = x + sum xs;
sum [1, 2, 3];

(*somar só os índices par*)
fun sumpar [] = 0
  | sumpar [z] = 0 
  | sumpar (_::x::y) = x + sumpar y;
sumpar [1, 2, 6, 7];
