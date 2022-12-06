```sql
DELIMITER $$
CREATE PROCEDURE cria_relatorio ()
BEGIN
SELECT SUM(quantidade) from venda WHERE dataVenda = CURDATE();
END $$
DELIMITER ;
```