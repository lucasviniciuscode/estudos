Atividade
- Uma empresa precisa criar um relatório que faça um levantamento diário da quantidade de produtos comprados no dia. Para isso, crie um procedure que será usado para agilizar todos os processos.`

```sql
DELIMITER $$
CREATE PROCEDURE cria_relatorio ()
BEGIN
SELECT SUM(quantidade) from venda WHERE dataVenda = CURDATE();
END $$
DELIMITER ;
```