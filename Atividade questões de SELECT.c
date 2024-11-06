CREATE TABLE Autores (
    id_autor INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    data_nascimento DATE NOT NULL,
    nacionalidade VARCHAR(50) NOT NULL
);

CREATE TABLE Livros (
    id_livro INT AUTO_INCREMENT PRIMARY KEY,
    título VARCHAR(200) NOT NULL,
    id_autor INT,
    data_publicacao DATE NOT NULL,
    preco DECIMAL(10, 2) NOT NULL,
    estoque INT NOT NULL,
    FOREIGN KEY (id_autor) REFERENCES Autores(id_autor)
);

CREATE TABLE Clientes (
    id_cliente INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) NOT NULL UNIQUE,
    telefone VARCHAR(15) NOT NULL,
    data_cadastro DATE NOT NULL
);

CREATE TABLE Vendas (
    id_venda INT AUTO_INCREMENT PRIMARY KEY,
    id_cliente INT,
    data_venda DATE NOT NULL,
    valor_total DECIMAL(10, 2) NOT NULL,
    FOREIGN KEY (id_cliente) REFERENCES Clientes(id_cliente)
);

CREATE TABLE Itens_Venda (
    id_item INT AUTO_INCREMENT PRIMARY KEY,
    id_venda INT,
    id_livro INT,
    quantidade INT NOT NULL,
    preco_unitario DECIMAL(10, 2) NOT NULL,
    FOREIGN KEY (id_venda) REFERENCES Vendas(id_venda),
    FOREIGN KEY (id_livro) REFERENCES Livros(id_livro)
);

INSERT INTO Autores (nome, data_nascimento, nacionalidade) 
VALUES 
    ('Marina Rowling', '1965-07-31', 'Britânica'),
    ('Octávio Orwell', '1903-06-25', 'Olandês'),
    ('José Tolkien', '1892-01-03', 'Colombiano'),
    ('Lorena Christie', '1890-09-15', 'Paranaense'),
    ('Gabriel García Márquez', '1927-03-06', 'Colombiano');

INSERT INTO Livros (título, id_autor, data_publicacao, preco, estoque) 
VALUES 
    ('Harry Potter e a Pedra Filosofal', 1, '1997-06-26', 49.90, 10),
    ('1984', 2, '1949-06-08', 39.90, 5),
    ('O Senhor dos Anéis: A Sociedade do Anel', 3, '1954-07-29', 59.90, 7),
    ('O Assassinato de Roger Ackroyd', 4, '1926-06-01', 29.90, 8),
    ('Cem Anos de Solidão', 5, '1967-06-05', 49.90, 12);

INSERT INTO Clientes (nome, email, telefone, data_cadastro) 
VALUES 
    ('Pedro Henrique', 'pedro.henrique@example.com', '1234567890', '2023-02-15'),
    ('Larissa Alboquerque', 'larissa.alboquerque@example.com', '0987654321', '2023-03-20'),
    ('Cecília Ramos', 'cecília.ramos@example.com', '1122334455', '2023-04-10'),
    ('Mateo Laurindo', 'mateo.laurindo@example.com', '2233445566', '2023-05-05'),
    ('José Marquesin', 'josé.marquesin@example.com', '3344556677', '2023-06-18');

INSERT INTO Vendas (id_cliente, data_venda, valor_total) 
VALUES 
    (1, '2024-10-01', 130.90), 
    (2, '2024-10-03', 50.89), 
    (3, '2024-10-05', 100.50), 
    (4, '2024-10-07', 120.90), 
    (5, '2024-10-09', 100.90);

INSERT INTO Itens_Venda (id_venda, id_livro, quantidade, preco_unitario) 
VALUES 
    (1, 1, 2, 49.90),  
    (2, 2, 1, 39.90),  
    (3, 3, 1, 59.90),  
    (4, 4, 2, 29.90),  
    (5, 5, 2, 49.90);


SELECT 
    A.nome AS autor, 
    L.título 
FROM 
    Livros L
INNER JOIN 
    Autores A ON L.id_autor = A.id_autor;

SELECT 
    C.nome AS cliente, 
    V.data_venda 
FROM 
    Vendas V
INNER JOIN 
    Clientes C ON V.id_cliente = C.id_cliente;

SELECT 
    A.nome AS autor, 
    L.título, 
    L.estoque 
FROM 
    Livros L
INNER JOIN 
    Autores A ON L.id_autor = A.id_autor
WHERE 
    L.estoque > 20;

SELECT 
    L.título, 
    IV.quantidade * IV.preco_unitario AS valor_total
FROM 
    Itens_Venda IV
INNER JOIN 
    Livros L ON IV.id_livro = L.id_livro
WHERE 
    L.preco > 50;

SELECT 
    C.nome AS cliente, 
    L.título 
FROM 
    Vendas V
INNER JOIN 
    Clientes C ON V.id_cliente = C.id_cliente
INNER JOIN 
    Itens_Venda IV ON V.id_venda = IV.id_venda
INNER JOIN 
    Livros L ON IV.id_livro = L.id_livro;


SELECT 
    A.nome AS autor, 
    L.preco 
FROM 
    Livros L
INNER JOIN 
    Autores A ON L.id_autor = A.id_autor
WHERE 
    L.preco BETWEEN 40 AND 70;

SELECT 
    A.nome AS autor, 
    L.data_publicacao
FROM 
    Livros L
INNER JOIN 
    Autores A ON L.id_autor = A.id_autor
WHERE 
    L.data_publicacao > '2000-01-01';

SELECT 
    C.nome AS cliente, 
    V.valor_total
FROM 
    Vendas V
INNER JOIN 
    Clientes C ON V.id_cliente = C.id_cliente
WHERE 
    V.valor_total > 100;

SELECT 
    L.título, 
    IV.quantidade
FROM 
    Itens_Venda IV
INNER JOIN 
    Livros L ON IV.id_livro = L.id_livro
WHERE 
    IV.quantidade > 1;

SELECT 
    C.nome AS cliente, 
    L.título 
FROM 
    Itens_Venda IV
INNER JOIN 
    Vendas V ON IV.id_venda = V.id_venda
INNER JOIN 
    Clientes C ON V.id_cliente = C.id_cliente
INNER JOIN 
    Livros L ON IV.id_livro = L.id_livro
WHERE 
    IV.preco_unitario = 39.90;