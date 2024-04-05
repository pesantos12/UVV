/* Consultas (30 % de 5PTS) */
USE bank;

-- 1. Junções Internas
/*Escreva uma consulta que retorne o nome e sobrenome de todos os administradores (officer) com o nome
da empresa que eles administram (business.name) e cidade onde ela está presente (customer.city).*/
SELECT CONCAT(o.fname, ' ', o.lname) 'Nome completo', b.name 'Nome da empresa', c.city 'Cidade'
FROM officer o, business b, customer c
WHERE b.cust_id = o.cust_id AND c.cust_id = o.cust_id;

-- 2. Junções Internas, União e Seleção
/*Escreva uma consulta que retorne os nome dos clientes (nome das pessoas jurídicas ou nome + sobrenome
das pessoas físicas) que possuem uma conta em uma cidade diferente da cidade de estabelecimento.*/
SELECT DISTINCT CONCAT(i.fname, ' ', i.lname) 'Nome', c.city 'Cidade de estabelecimento', b.city 'Cidade da conta'
FROM individual i, customer c, account a, branch b
WHERE i.cust_id = c.cust_id AND c.cust_id = a.cust_id AND a.open_branch_id = b.branch_id AND
b.city != c.city
UNION
SELECT  i.name, c.city, b.city
FROM business i, customer c, account a, branch b
WHERE i.cust_id = c.cust_id AND c.cust_id = a.cust_id AND a.open_branch_id = b.branch_id
AND c.city != b.city;

-- 3. Junção Externa, Agrupamento, Agregação e Ordenação
/*Escreva uma consulta que retorne os nome de todos os funcionários com, se for o caso, os números de
transações por ano envolvendo as contas que eles abriram (usando open_emp_id). Ordene os resultados
por ordem alfabética, e depois por ano (do mais antigo para o mais recente).*/
SELECT e.fname Nome, 
	CASE 
		WHEN COUNT(t.txn_date) != 0 THEN COUNT(t.txn_date)
        ELSE 'Sem transações'
	END AS transacoes,
    e.start_date 'Data de entrada'
FROM employee e
LEFT JOIN account a ON e.emp_id = a.open_emp_id
LEFT JOIN transaction t ON a.account_id = t.account_id
GROUP BY emp_id
ORDER BY nome, e.start_date;

-- 4. Junções Internas, Agrupamento, Agregação, União e Concatenação incompleto
/*Escreva uma consulta que retorne os identificadores de contas com maior saldo de dinheiro por agência,
juntamente com os nomes dos titulares (nome da empresa ou nome e sobrenome da pessoa física) e os
nomes dessas agências.*/
CREATE OR REPLACE VIEW view_max_balance AS
SELECT b.branch_id, MAX(a.avail_balance) valor_max
FROM branch b, account a
WHERE b.branch_id = a.open_branch_id
GROUP BY b.branch_id;

CREATE OR REPLACE VIEW view_max_balance_2 AS
SELECT a.account_id, b.name, vmb.valor_max
FROM view_max_balance vmb, account a, branch b
WHERE vmb.valor_max = a.avail_balance AND vmb.branch_id = a.open_branch_id AND vmb.branch_id = b.branch_id;

SELECT a.account_id id_conta, vm.name Nome_filial, vm.valor_max saldo, c.cust_id id_cliente, c.cust_type_cd tipo, CONCAT(i.fname, ' ', i.lname) nome
FROM view_max_balance_2 vm, account a, customer c, individual i
WHERE a.account_id = vm.account_id AND a.cust_id = c.cust_id AND c.cust_id = i.cust_id
UNION
SELECT a.account_id id_conta, vm.name, vm.valor_max, c.cust_id id_cliente, c.cust_type_cd tipo, b.name nome
FROM view_max_balance_2 vm, account a, customer c, business b
WHERE a.account_id = vm.account_id AND a.cust_id = c.cust_id AND c.cust_id = b.cust_id;

-- 5. Visualização
/*Escreva de novo e modularize as consultas 2. e 4. utilizando uma visualização (CREATE VIEW).*/
CREATE VIEW view_maiores_saldos AS
SELECT a.account_id id_conta, vm.name Nome_filial, vm.valor_max saldo, c.cust_id id_cliente, c.cust_type_cd tipo, CONCAT(i.fname, ' ', i.lname) nome
FROM view_max_balance_2 vm, account a, customer c, individual i
WHERE a.account_id = vm.account_id AND a.cust_id = c.cust_id AND c.cust_id = i.cust_id
UNION
SELECT a.account_id id_conta, vm.name, vm.valor_max, c.cust_id id_cliente, c.cust_type_cd tipo, b.name nome
FROM view_max_balance_2 vm, account a, customer c, business b
WHERE a.account_id = vm.account_id AND a.cust_id = c.cust_id AND c.cust_id = b.cust_id;

SELECT * FROM view_maiores_saldos;

CREATE VIEW view_conta_cidade_dif AS
SELECT DISTINCT CONCAT(i.fname, ' ', i.lname) 'Nome', c.city 'Cidade de estabelecimento', b.city 'Cidade da conta'
FROM individual i, customer c, account a, branch b
WHERE i.cust_id = c.cust_id AND c.cust_id = a.cust_id AND a.open_branch_id = b.branch_id AND
b.city != c.city
UNION
SELECT  i.name, c.city, b.city
FROM business i, customer c, account a, branch b
WHERE i.cust_id = c.cust_id AND c.cust_id = a.cust_id AND a.open_branch_id = b.branch_id
AND c.city != b.city;

SELECT * FROM view_conta_cidade_dif;
