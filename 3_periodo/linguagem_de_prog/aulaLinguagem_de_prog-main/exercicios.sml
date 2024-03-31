(*exercícios do chatgpt*)
(*Escreva uma função em SML que calcule o fatorial de um número.

Implemente uma função que receba uma lista de inteiros e retorne a soma de todos os elementos.

Escreva uma função em SML que receba uma lista de inteiros e retorne uma nova lista contendo apenas os números pares.

Crie uma função que receba uma lista de strings e retorne uma nova lista contendo apenas as strings que têm mais de três caracteres.

Implemente uma função que receba duas listas e retorne uma nova lista que contém os elementos que estão presentes em ambas as listas.

Escreva uma função em SML que receba uma lista de inteiros e retorne o maior elemento da lista.

Crie uma função que receba uma lista de inteiros e retorne uma nova lista contendo os elementos da lista original, mas na ordem inversa.

Implemente uma função que receba uma lista de inteiros e retorne verdadeiro se todos os elementos da lista forem positivos, e falso caso contrário.

Escreva uma função em SML que receba uma lista de inteiros e retorne o produto de todos os elementos da lista.

Crie uma função que receba uma lista de inteiros e retorne uma nova lista onde cada elemento é o dobro do elemento correspondente na lista original.*)

fun fatorial 0 = 1
  | fatorial x = x * fatorial (x - 1);
fatorial 6;

fun somaInteiros [] = 0
  | somaInteiros (x::xs) = x + somaInteiros xs;
somaInteiros [1, 10, 30];

fun Pares [] = []
  | Pares (x::xs) = if x mod 2 = 0 then x::Pares(xs) else Pares(xs);
Pares [1, 2, 3, 4, 5, 6, 8, 10, 12, 14];


fun qtdString [] = 0
  | qtdString (x::xs) = 1 + qtdString xs;

fun listaMais3 []  = []
  | listaMais3 (x::xs) = if qtdString (explode x) > 3 then x::listaMais3(xs) else listaMais3(xs);

listaMais3 ["akdosfjosiakj", "ab", "abc", "abcd", "fjasdokf"];

fun conv2 _ [] = false
  | conv2 y (x::xs) = if y = x then true else conv2 y xs;
conv2 10 [1, 2, 3, 4];

fun convergencia _ [] = []
  | convergencia [] _ = []
  | convergencia (x::xs) y = if conv2 x y then x::convergencia xs y else convergencia xs y;
convergencia [1, 2, 3, 4] [1, 10, 3, 40];

fun maior2 _ [] = true
  | maior2 x (y::ys) = if x < y then false else maior2 x ys;
maior2 10 [1, 2, 30, 4];
fun maior [] = 0
  | maior (x::xs) = if maior2 x xs then x else maior xs;
maior [1, 20, 3, 4, 5];

fun revertedor [] = []
  | revertedor (x::xs) = revertedor xs @ [x];
revertedor [1, 2, 3, 4];

fun positivos [] = true
  | positivos (x::xs) = if x < 0 then false else positivos xs;
positivos [1, 2, ~3, 4];

fun produto [] = 1
  | produto (x::xs) = x * produto xs;
produto [10, 20, 5];

fun dobro [] = []
  | dobro (x::xs) = (x*2)::dobro(xs);
dobro[1, 2, 3, 4, 10];
