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
