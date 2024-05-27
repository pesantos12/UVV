% Representação do Grafo
% Definição das arestas: aresta(Origem, Destino, Custo).
aresta(rj, pp, 20).
aresta(pp, bn, 350).
aresta(rj, sp, 60).
aresta(sp, op, 50).
aresta(rp, op, 10).
aresta(sp, rp, 50).
aresta(rj, rp, 160).
aresta(rp, bn, 40).

% Grafo bidirecional
aresta_bidirecional(X, Y, C) :- aresta(X, Y, C); aresta(Y, X, C).

% Algoritmo de Dijkstra
dijkstra(Origem, Destino, Caminho, Custo) :-
    % Inicializa a lista de caminhos com o ponto de origem
    dijkstra_aux([caminho(0, [Origem])], Destino, caminho(Custo, CaminhoInvertido)),
    reverse(CaminhoInvertido, Caminho).

dijkstra_aux([caminho(Custo, [Destino|Caminho])|_], Destino, caminho(Custo, [Destino|Caminho])) :- !.
dijkstra_aux([caminho(Parcial, [Atual|Resto])|Outros], Destino, CaminhoFinal) :-
    findall(caminho(NovoCusto, [Proximo, Atual|Resto]),
            (aresta(Atual, Proximo, CustoAresta),
             \+ member(Proximo, [Atual|Resto]), % Evitar ciclos
             NovoCusto is Parcial + CustoAresta),
            NovosCaminhos),
    append(Outros, NovosCaminhos, TodosCaminhos),
    sort(1, @=<, TodosCaminhos, TodosCaminhosOrdenados), % Ordena pela estimativa de custo
    dijkstra_aux(TodosCaminhosOrdenados, Destino, CaminhoFinal).

% Interface de Usuário
consulta_caminho(Origem, Destino, Caminho, Custo) :-
    dijkstra(Origem, Destino, Caminho, Custo).

% Adicionar arestas dinamicamente
adiciona_aresta(Origem, Destino, Custo) :-
    assertz(aresta(Origem, Destino, Custo)).

% Remover arestas dinamicamente
remove_aresta(Origem, Destino) :-
    retract(aresta(Origem, Destino, _)).
