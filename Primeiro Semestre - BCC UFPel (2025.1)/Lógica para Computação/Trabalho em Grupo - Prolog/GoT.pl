/*
BASE DE DADOS - Game of Thrones

pessoa(Nome, Casa, Idade, Local, Altura, Titulo, Status, Aliancas)
*/

% ===- CASAS -===

%Stark
pessoa(eddard, stark, 35, winterfell, 1.80, lorde, morta, [stark]).
pessoa(robb, stark, 20, winterfell, 1.85, rei, morta, [stark]).
pessoa(sansa, stark, 20, winterfell, 1.70, lady, viva, [stark]).
pessoa(arya, stark, 18, winterfell, 1.55, assassina, viva, [stark]).

%Lannister
pessoa(tywin, lannister, 55, casterly_rock, 1.85, lorde, morta, [lannister]).
pessoa(jaime, lannister, 43, casterly_rock, 1.85, cavaleiro, morta, [lannister]).
pessoa(cersei, lannister, 43, casterly_rock, 1.70, rainha, morta, [lannister]).
pessoa(tyrion, lannister, 39, casterly_rock, 1.35, lorde, viva, [lannister]).

%Targaryen
pessoa(aerys, targaryen, 39, pedra_do_dragao, 1.80, rei, morta, [targaryen]).
pessoa(rhaegar, targaryen, 25, pedra_do_dragao, 1.90, principe, morta, [targaryen]).
pessoa(viserys, targaryen, 22, pedra_do_dragao, 1.80, principe, morta, [targaryen]).
pessoa(daenerys, targaryen, 23, pedra_do_dragao, 1.60, rainha, morta, [targaryen]).


% ===- REGRAS -===

%Verifica se a pessoa é stark ou está viva
stark_ou_vivo(Pessoa) :-
    pessoa(Pessoa, Casa, _, _, _, _, Estado, _),
    (Casa = stark ; Estado = viva).

%Verifica se a pessoa tem menos de 1.75m
menor_altura(Pessoa) :-
    pessoa(Pessoa, _, _, _, Altura, _, _, _),
    Altura < 1.75.

%Verifica se a pessoa tem menos de 1.75m
maior_altura(Pessoa) :-
    pessoa(Pessoa, _, _, _, Altura, _, _, _),
    Altura > 1.75.

%Verifica se duas pessoas são da mesma casa
mesma_casa(P1, P2) :-
    pessoa(P1, Casa, _, _, _, _, _, _),
    pessoa(P2, Casa, _, _, _, _, _, _),
    P1 \= P2.

% ===- PERGUNTAS -===

/*
Quem é stark e tem altura menor que 1.75m?
    pessoa(X, stark, _, _, Altura, _, _, _), Altura < 1.75.

Quem é targaryen e tem altura maior ou igual 1.80m?
    pessoa(X, targaryen, _, _, Altura, _, _, _), Altura >= 1.80.

Quem é rei ou rainha e é targaryen?
    pessoa(X, targaryen, _, _, _, Titulo, _, _), (Titulo = rei ;Titulo = rainha).

Quem é da mesma casa que arya?
    mesma_casa(arya, X).
*/