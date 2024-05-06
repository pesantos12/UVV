homem(ivo).
homem(rai).
homem(noe).
homem(gil).
homem(ary).

mulher(ana).
mulher(eva).
mulher(bia).
mulher(clo).
mulher(lia).
mulher(gal).

pai(ivo, eva).
pai(rai, noe).
pai(gil, rai).
pai(gil, clo).
pai(gil, ary).
pai(ary, gal).

mae(ana, eva).
mae(eva, noe).
mae(bia, rai).
mae(bia, clo).
mae(bia, ary).
mae(lia, gal).

gerou(X, Y) :-
    pai(X, Y);
    mae(X, Y).

filho(Filho, X) :-
    gerou(X, Filho), homem(X).
filha(Filha, X) :-
    gerou(X, Filha), mulher(X).

tio(Tio, Sobrinho) :-
    gerou(Y, Sobrinho),
    gerou(Z, Y),
    gerou(Z, Tio),
    homem(Tio),
    Tio \= Y.

tia(Tia, Sobrinho) :-
    gerou(Y, Sobrinho),
    gerou(Z, Y),
    gerou(Z, Tia),
    mulher(Tia),
    Tia \= Y.

primo(X, Y) :-
    homem(X),
    tio(Z, X),
    gerou(Z, Y);
    homem(X),
    tia(Z, X),
    gerou(Z, Y).

prima(X, Y) :-
    mulher(X),
    tio(Z, X),
    gerou(Z, Y);
    mulher(X),
    tia(Z, X),
    gerou(Z, Y).

avô(Avo, Neto) :-
    pai(Avo, X),
    gerou(X, Neto).

avó(Avo, Neto) :-
    mae(Avo, X),
    gerou(X, Neto).
