CREATE DATABASE biblioteca;

USE biblioteca;

CREATE TABLE aluno(
    id INT PRIMARY KEY,
    nome VARCHAR(30) NOT NULL,
    email VARCHAR(30) NOT NULL,
    endereco VARCHAR(30) NOT NULL,
    telefone VARCHAR(15) NOT NULL
    );

CREATE TABLE emprestimo(
    codigo INT PRIMARY KEY,
    data_hora VARCHAR(30) NOT NULL,
    matric_aluno VARCHAR(30) NOT NULL,
    data_devolucao VARCHAR(30) NOT NULL
    );

CREATE TABLE livro_emprestimo(
    cod_livro INT NOT NULL,
    cod_emprestimo INT NOT NULL
    );

CREATE TABLE livro(
    cod_livro INT NOT NULL,
    titulo VARCHAR(30) NOT NULL,
    autor VARCHAR(30) NOT NULL,
    cod_sessao INT NOT NULL
    );

CREATE TABLE sessao(
    codigo INT NOT NULL,
    descricao VARCHAR(30) NOT NULL,
    localizacao VARCHAR(30) NOT NULL
    );
