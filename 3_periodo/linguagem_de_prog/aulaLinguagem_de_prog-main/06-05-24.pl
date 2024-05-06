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
