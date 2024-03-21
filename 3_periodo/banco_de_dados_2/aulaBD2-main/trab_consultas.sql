/* Consultas (30 % de 5PTS) */

-- 1. Junções Internas
SELECT CONCAT(o.fname, ' ', o.lname) 'Nome completo', b.name 'Nome da empresa', c.city 'Cidade'
FROM officer o, business b, customer c
WHERE b.cust_id = o.cust_id AND c.cust_id = o.cust_id;

-- 2. Junções Internas, União e Seleção
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
SELECT e.fname Nome, COUNT(t.txn_date) AS Transacoes, e.start_date 'Data de entrada'
FROM employee e
LEFT JOIN account a ON e.emp_id = a.open_emp_id
LEFT JOIN transaction t ON a.account_id = t.account_id
GROUP BY emp_id
ORDER BY nome, e.start_date;

-- 4. Junções Internas, Agrupamento, Agregação, União e Concatenação incompleto
CREATE OR REPLACE VIEW view_max_balance AS
SELECT b.branch_id, MAX(a.avail_balance) valor_max
FROM branch b, account a
WHERE b.branch_id = a.open_branch_id
GROUP BY b.branch_id;

SELECT a.account_id, b.name, vmb.valor_max
FROM view_max_balance vmb, account a, branch b
WHERE vmb.valor_max = a.avail_balance AND vmb.branch_id = a.open_branch_id AND vmb.branch_id = b.branch_id;
