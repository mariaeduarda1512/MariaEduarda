CREATE TABLE diciplina(
 id_codigo serial PRIMARY KEY,
	nome varchar(20)
);

CREATE TABLE professor(
	
 matricula_professor serial PRIMARY KEY,
 telefone_professor varchar (20);
 cpf_professor bigint;
 nome_professor varchar (20);
 data_nascimento varchar(20);
 endereço_professor varchar (20)
);

SELECT * FROM diciplina ORDER BY diciplina;
SELECT * FROM professor ORDER BY professor;

INSERT INTO diciplina (nome) VALUES ('Memática');
INSERT INTO diciplina (nome) VALUES ('´Ptuguês');
INSERT INTO diciplina (nome) VALUES ('Gografia');
INSERT INTO diciplina (nome) VALUES ('Hstória');
INSERT INTO diciplina (nome) VALUES ('Artes');
 
INSERT INTO professor (nome) VALUES ('júlia');
INSERT INTO professor (nome) VALUES ('Bruno');
INSERT INTO professor (nome) VALUES ('Clara');
INSERT INTO professor (nome) VALUES ('Marcos');
INSERT INTO professor (nome) VALUES ('Amanda');

