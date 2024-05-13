X is 2+3.
X = 5

X is 2*3.
X = 6

X is 2/3.
0.66666666

X is 2//3.
0

format("~2f", 2/3).
0.67

X is 3 mod 2.
1

X is 3^2.
9

% comentário

pais(brasil, Area, Populacao), Densidade is Populacao/Area.
Area = 8.51,
Populacao = 215.3,
Densidade = 25.29964747356052.

?- pais(india, AI, _), pais(china, AC, _), Dif is AC - AI.
AI = 3.287,
AC = 9.597,
Dif = 6.31.

maior ou igual >=
menor ou igual =<
diferente =\=

?- pais(eua, _, P), pib(eua, PI), RendaPerCapita is (PI * (10^6)) / P.
P = 300,
PI = 25.44,
RendaPerCapita = 84800.0.


% funcionario(Codigo, Nome, Salario)
funcionario(1, denis, 7000).
funcionario(2, leopardo, 4000).
funcionario(3, sophia, 11000).
funcionario(4, joao, 2000).
funcionario(5, julio, 3200).

% dependentes(Codigo_f, Nome)
dep(1, carlinhos).
dep(2, madona).
dep(2, cristiano).
dep(2, livia).
dep(4, maria).
dep(4, felipe).

% Quais são os dependentes de funcionarios que ganham menos de 5 mil?
?- funcionario(Cod, _, S), S < 5000, dep(Cod, Dependente).
Cod = 2,
S = 4000,
Dependente = madona ;
Cod = 2,
S = 4000,
Dependente = cristiano ;
Cod = 2,
S = 4000,
Dependente = livia ;
Cod = 4,
S = 2000,
Dependente = maria ;
Cod = 4,
S = 2000,
Dependente = felipe ;

% Quais são os funcionários que não possuem dependentes?
?- funcionario(Cod, Nome, _), not(dep(Cod, _)).
Cod = 5,
Nome = julio.


filme('Uma linda mulher', romance, 1998, 119).
filme('Sexto sentido', suspense, 2001, 108).
filme('A cor púrpura', drama, 1985, 152).
filme('Copacabana', comedia, 2001, 92).
filme('E o vento levou', drama, 1939, 233).
filme('Carrington', romance, 1995, 130).
filme('O Senhor dos Anéis: O retorno do Reis (Estendido)', fantasia, 2003, 251).

classico(T, G, A, D) :-
    filme(T, G, A, D), A =< 1990.

classico(T, G) :-
    filme(T, G, A, _), A =< 1990.


% Codifique uma base contendo as informações abaixo:

/*
 *
 * candidatos
 * Nome | Sexo | Idade | Altura | Peso
 * Ana  | fem  | 23    | 1.55   | 56.0
 * Bia  | fem  | 19    | 1.71   | 61.3
 * Ivo  | masc | 22    | 1.80   | 70.5
 * Lia  | fem  | 17    | 1.85   | 57.3
 * Eva  | fem  | 28    | 1.75   | 68.7
 * Ary  | masc | 25    | 1.72   | 68.9
 */

candidatos(ana, fem, 23, 1.55, 56.0).
candidatos(bia, fem, 19, 1.71, 61.3).
candidatos(ivo, masc, 22, 1.80, 70.5).
candidatos(lia, fem, 17, 1.85, 57.3).
candidatos(rva, fem, 28, 1.75, 68.7).
candidatos(ary, masc, 25, 1.72, 68.9).

% Quais são as mulheres com mais de 20 anos?
% Quem tem pelo menos 1.70 de altura e menos de 65 kg?
% Quais são os possíveis casais onde o homem é mais alto que a mulher?

/*
 * abendo que o peso ideal de uma modelo é no máximo 62.1*Altura-44.7.
 * Além disso, para ser modelo, uma mulher precisa ter pelo menos 1.70m
 * de altura e menos de 25 anos.
 *
 * Defina um predicado capaz de recuperar apenas os nomes das mulheres
 * que podem ser modelos.
 */

 ?- candidatos(Nome, fem, Idade, _, _), Idade > 20.
Nome = ana,
Idade = 23 ;
Nome = rva,
Idade = 28.

?- candidatos(Nome, _, _, Altura, Peso), Altura >= 1.70, Peso < 65.
Nome = bia,
Altura = 1.71,
Peso = 61.3 ;
Nome = lia,
Altura = 1.85,
Peso = 57.3 ;

?- candidatos(H, masc, _, AH, _), candidatos(M, fem, _, AM, _), AH > AM.
H = ivo,
AH = 1.8,
M = ana,
AM = 1.55 ;
H = ivo,
AH = 1.8,
M = bia,
AM = 1.71 ;
H = ivo,
AH = 1.8,
M = rva,
AM = 1.75 ;
H = ary,
AH = 1.72,
M = ana,
AM = 1.55 ;
H = ary,
AH = 1.72,
M = bia,
AM = 1.71 ;

?- candidatos(Nome, fem, Idade, Altura, Peso), Peso =< (62.1*Altura-44.7), Altura >= 1.70, Idade < 25.
Nome = bia,
Idade = 19,
Altura = 1.71,
Peso = 61.3 ;
Nome = lia,
Idade = 17,
Altura = 1.85,
Peso = 57.3 ;
