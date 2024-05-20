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

