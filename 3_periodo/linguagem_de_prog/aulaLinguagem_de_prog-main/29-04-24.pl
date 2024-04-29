progenitor(maria, jose).
progenitor(joao, jose).
progenitor(joao, ana).
progenitor(jose, julia).
progenitor(jose, iris).
progenitor(iris, jorge).

masculino(jose).
masculino(joao).
masculino(jorge).
feminino(maria).
feminino(julia).
feminino(ana).
feminino(iris).

filho(X, Y) :-
    progenitor(Y, X).

mae(X, Y) :-
    feminino(X),
    progenitor(X, Y).

pai(X, Y) :-
    masculino(X),
    progenitor(X, Y).

avo(X, Y) :-
    masculino(X),
    progenitor(X, Z),
    progenitor(Z, Y).

av�(X, Y) :-
    feminino(X),
    progenitor(X, Z),
    progenitor(Z, Y).

irm�o(X, Y) :-
    masculino(X),
    progenitor(Z, X),
    progenitor(Z, Y).

irm�(X, Y) :-
    feminino(X),
    progenitor(Z, X),
    progenitor(Z, Y).
