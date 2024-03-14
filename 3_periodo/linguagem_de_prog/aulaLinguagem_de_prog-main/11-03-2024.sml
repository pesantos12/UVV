4+3;
it;
4 - 3;
4 + ~3;
val x : int = 1 + 2;
(*Comentario*)
val (a, b): int * int = (1,2);
2;
1.0;
true;
"Teste";
"A";
#"A";
10.0 / 2.0; (* / para float*)
10 div 5; (* div para inteiro*)
7 mod 3; (* mod para resto da divisão*)
2; (*int*)
1.0; (*real*)
true; (*bool*)
"Teste"; (*string*)
"A"; (*string*)
#"A"; (*char*)
10.0 / 2.0; (* / para float*)
10 div 5; (* div para inteiro*)
7 mod 3; (* mod para resto da divisão*)
(((~1) + 2) - (((3 * 4) div 5) mod 6));
"Pedro " ^ "Henrique Santos " ^"dos Reis"; (*concatena*)
1 < 2; (*true*)
#"A" > #"B"; (*false*)
"abc"> "abd"; (*false*)
"vasco" > "flamengo"; (*true*)
1 > 1000 orelse 2 > 0; (*true*)
1 > 1000 andalso 2 > 0; (*false*)
1 = 2; (*false*)
1 = 1; (*true*)
"Pedro" = "Pedro"; (*true*)
if 1 < 2 then "Verdade" else "Falso"; (*Verdade*)
if 1 > 2 then "Verdade" else "Falso"; (*Falso*)

1 * 2;
1.0 * 2.0;
(* 1 * 2.0; Erro *)
1 * floor(2.0); (*Resultado em int*)
real(1) * 2.0; (*Resultado em real*)

"a" ^ "b";
(* #"a" ^ "b"; Erro*)
str #"a" ^ "b";

val x = 10;
x + 1; (*11*)
x; (*10*)

val y = 1 + 2 * 3; (*7*)
val a = "abc";
val b = a ^ "def"; (* "abcdef" *)

fun quadrado x = x * x;
quadrado 9;
fun quadrado x: real = x * x;
quadrado 10.8;
quadrado (2.0 + 3.0);
quadrado (quadrado(5.0));

(* Tuplas *)
val tp1 = (1+2, 1.0+3.0, "verde");
val tp2 = (8, tp1);
#1 tp1;
#3 (#2 tp2); (*Verde*)

(* Listas *)
val lst1 = [1, 2, 3] (*listas são homogêneas*)
(*val lst2 = [1, 2, "azul"] Erro*)
val lst2 = [];
nil; (*lista vazia*)
null []; (*true*)
null lst1; (*false*) 
null lst2; (*true*)

fun verificalista l = if null l then "tá vazio" 
else "tem valor";

verificalista lst1; (*"tem valor"*)
verificalista lst2; (*"tá vazio"*)

hd; (*head da lista, primeiro valor*)
tl; (*tail da lista, lista sem o primero valor*)
val valores = [1, 2, 3, 4];
hd valores; (*1*)
tl valores; (*[2, 3, 4]*)

(* List Constructor operator - cons *)
val valores = 0::valores; (*[0, 1, 2, 3, 4]*)

val valores = 0::1::2::3::4::[]; (*[0, 1, 2, 3, 4]*)
val valores = 0::(1::(2::(3::(4::[])))); (*[0, 1, 2, 3, 4]*)

(* List append - inserção ao final da lista*)
val valores = valores @ [5]; (*[0, 1, 2, 3, 4, 5]*)
val valores = valores @ [6, 7, 8]; (*[0, 1, 2, 3, 4, 5, 6, 7, 8]*)

(*Função que retorne o primeiro caracter de uma string*)
val nome = "Pedro";
fun primeiraletra x = hd (explode x);
primeiraletra nome;

(*Função que inverta os valores de uma lista - lista invertida*)
val lst1 = [1, 2, 3];
rev lst1;

(*Função que calcule a soma de valores de uma lista*)

https://smlfamily.github.io/Basis/list.html
