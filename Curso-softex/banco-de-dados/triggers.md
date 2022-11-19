CREATE DATABASE empresa;

USE empresa;

CREATE TABLE funcionario(
	id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(30) NOT NULL,
    cargo VARCHAR(30) NOT NULL
);

DELIMITER $$
CREATE TRIGGER 	blockdelete BEFORE DELETE
ON funcionario
FOR EACH ROW
BEGIN
	DECLARE ACHOU integer;
    DECLARE msg varchar(130);
	SELECT funcionario
	FROM funcionario
	WHERE nome = 'Lucas' INTO ACHOU;
    if(ACHOU is not null) then
		set msg = concat('MyTriggerError: blocked delete');
        signal sqlstate '45000' set message_text = msg;
    end if;
END$$
DELIMITER ;

DELETE FROM funcionario where nome = 'Lucas';
