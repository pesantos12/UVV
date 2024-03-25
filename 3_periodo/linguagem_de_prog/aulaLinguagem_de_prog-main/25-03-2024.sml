(* 1) crie uma função 'menorDeDois' que recebe dois valores e retorna o menor deles*)
fun menorDeDois (a, b) = if a > b then b else a;
menorDeDois(10, 5);

(* 2) Crie uma função 'pertence' recebe um valor e uma lista e verifica se o elemento pertence à lista.
  ex.: pertence 1 [3, 7, 4, 2] = false *)
fun pertence x [] = false
  | pertence x (y::ys) = if x = y then true else pertence x ys; 
pertence 1 [3, 7, 4, 2];

(* 3) Crie uma função chamada 'conta0correncias' que recebe um numero e uma lista e retorna o numero de ocorrências do elemento na lista*)
fun conta0correncias x [] = 0
  | conta0correncias x (y::ys) = if x = y then 1 + conta0correncias x ys else conta0correncias x ys;
conta0correncias 1 [1, 2, 1, 4, 5, 6, 7, 1];

(* 4) Crie uma função chamada 'unica0correncia' que recebe um elemento e uma lista e verifica se existe uma única ocorrência do elemento na lista
ex.:
unica0correncia 2 [1,2,3,2] = false
unica0correncia 2 [3,1] = false
unica0correncia 2 [1,2,3] = true*)
fun unica0correncia _ [] = false
  | unica0correncia x y = 
  if conta0correncias x y = 1
  then true
  else false;

unica0correncia 2 [1, 2, 3, 2];
unica0correncia 2 [3,1];
unica0correncia 2 [1,2,3];
