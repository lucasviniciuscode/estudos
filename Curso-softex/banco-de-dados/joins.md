CREATE DATABASE empresa;

USE empresa;

CREATE TABLE funcionario(
	id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(30) NOT NULL,
    cargo VARCHAR(30) NOT NULL,
    setor_id INT NOT NULL,
    FOREIGN KEY (setor_id) REFERENCES setor(id)
);

CREATE TABLE setor(
	id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(30) NOT NULL
);

select * from funcionario f
inner join setor s on  f.setor_id = s.id;

select * from funcionario f
right join setor s on  f.setor_id = s.id;

select * from funcionario f
left join setor s on  f.setor_id = s.id;

select * from funcionario f
join setor s on  f.setor_id = s.id;

INSERT INTO setor(nome) values ("Gerencia");
INSERT INTO setor(nome) values ("Desenvolvimento");
INSERT INTO setor(nome) values ("Produtos");
INSERT INTO setor(nome) values ("Juridico");
INSERT INTO funcionario(nome, cargo, setor_id) values ("Lucas", "Dev JR", 2);
INSERT INTO funcionario(nome, cargo, setor_id) values ("Daniel", "Dev SR", 2);
INSERT INTO funcionario(nome, cargo, setor_id) values ("João", "Dev SR", 2);
INSERT INTO funcionario(nome, cargo, setor_id) values ("Pedro", "Analista de produtos", 3);
INSERT INTO funcionario(nome, cargo, setor_id) values ("Paulo", "Gerante de Recursos Humanos", 1);
INSERT INTO funcionario(nome, cargo, setor_id) values ("Márcio", "Gerante de TI", 1);