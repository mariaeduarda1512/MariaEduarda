CREATE TABLE chat (
	id_chat serial PRIMARY KEY,
	nome varchar(20),
	msg varchar(280)
);
DROP TABLE chat;
 
SELECT * FROM chat ORDER BY chat;

INSERT INTO chat (nome, msg) VALUES ('Maria Eduarda','ola me chamo Maria Edurada');
INSERT INTO chat (nome, msg) VALUES ('Duda', 'Boa noite') ; 
INSERT INTO chat (nome, msg) VALUES ('Vagner','olá me chamo Vagner');
INSERT INTO chat (nome, msg) VALUES ('Gabriel','olá me chamo gabriel');
INSERT INTO chat (nome, msg) VALUES ('Larissa','olá me chamo larissa');
INSERT INTO chat (nome, msg) VALUES ('Evelyn','olá me chamo Evelyn');
INSERT INTO chat (nome, msg) VALUES ('Siega' , 'olá me chamo Siega');
INSERT INTO chat (nome, msg) VALUES ('Domini' , 'olá me chamo Domini');
INSERT INTO chat (nome, msg) VALUES ('Gustavo' , 'olá me chamo Gustavo');
INSERT INTO chat (nome, msg) VALUES ('Arthur' , 'olá me chamo Arthur');
INSERT INTO chat (nome, msg) VALUES ('Willian' , 'olá me chamo Willian');
INSERT INTO chat (nome, msg) VALUES ('Agatha' , 'olá me chamo Agatha');

UPDATE chat SET nome = 'Maria', msg = 'teste' WHERE id_chat = 1;

DELETE FROM chat WHERE id_chat = 1;

