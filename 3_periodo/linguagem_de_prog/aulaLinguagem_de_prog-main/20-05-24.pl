digito(0).
digito(1).

binario([A,B,C]) :- digito(A),digito(B), digito(C).

?- binario(N).
N = [0, 0, 0] ;
N = [0, 0, 1] ;
N = [0, 1, 0] ;
N = [0, 1, 1] ;
N = [1, 0, 0] ;
N = [1, 0, 1] ;
N = [1, 1, 0] ;
N = [1, 1, 1].

------------------------------------------------
digito(0).
digito(1).

binario([A,B,C]) :- digito(A), !,digito(B), digito(C).

?- binario(N).
N = [0, 0, 0] ;
N = [0, 0, 1] ;
N = [0, 1, 0] ;
N = [0, 1, 1].
-------------------------------------------------
% potencia(B, E, R)

potencia(_, 0, 1).
potencia(B, E, R) :-
    E > 0,
    T is E-1,
    potencia(B, T, RT),
    R is B*RT.

?- potencia(5,3, R).
R = 125 .
-------------------------------------------------
% Listas vazia: [] [H|T]

?- [H|T] = [a, b, c].
H = a,
T = [b, c].

-------------------------------------------------
% imprime(Lista)
imprime([]) :- nl.
imprime([H|T]) :- write(H), nl, imprime(T).

?- imprime([lucas, pedro, sophia]).
lucas
pedro
sophia
------------------------------------------------

% possui(L, V)

possui([V|_], V).
possui([_|T], V) :- possui(T, V).

?- possui([a, b, c, d, e], e).
true .

?- possui([a, b, c, d, e], f).
false.

----------------------------------------------

% concatena(A, B, C)

concatena([], B, B).
concatena([HA|TA], B,[HA|C]) :- concatena(TA, B, C).

?- concatena([a, b, c], [d, e, f], R).
R = [a, b, c, d, e, f].

?- concatena([a, b, c], L, [a, b, c, d, i, j]).
L = [d, i, j].

----------------------------------------------

% 1)Crie um predicado fatorial(N, R) que calcule o fatorial do N na
% variavel R.

fatorial(0, 1).
fatorial(1, 1).
fatorial(X, R) :-
    X>1,
    T is X-1,
    fatorial(T, RT),
    R is X*RT.

----------------------------------------------

% 2)Crie um predicado para converter um numero inteiro decimal em
% binario

decbin(0, [0]).
decbin(1, [1]).
decbin(X, L) :-
    X > 1,
    A is X mod 2,
    B is X div 2,
    decbin(B, L1),
    append(L1, [A], L).

?- decbin(10, L).
L = [1, 0, 1, 0] .

------------------------------------------------

% 3)Considere a seguinte base de fatos sobre rodovias, com as distancias
% entre cidades.

rodovia(a, b, 25).
rodovia(a, d, 23).
rodovia(b, e, 32).
rodovia(b, c, 19).
rodovia(c, d, 14).
rodovia(c, f, 28).
rodovia(d, f, 30).
rodovia(e, f, 26).

% Crie o predicado distancia (C1, C2, D), que determina a distancia
% entre as cidades C1 e C2.

dist(C1, C2, D) :-
    rodovia(C1, C2, D).
dist(C1, C2, D) :-
    rodovia(C1, C3, D1),
    dist(C3, C2, D2),
    D is D1+D2.

?- dist(a, f, D).
D = 83 ;
D = 72 ;
D = 88 ;
D = 53 ;
