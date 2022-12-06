- Crie uma função que some todos os clientes cadastrados em uma loja durante um dia.


```sql
CREATE FUNCTION CLIENTES_POR_DIA(dia INT)
RETURNS INT
RETURN (SELECT COUNT(id) FROM cliente WHERE data_cadastro = dia);
```