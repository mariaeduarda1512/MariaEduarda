CREATE TABLE Autores (
    id_autor INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    data_nascimento DATE NOT NULL,
    nacionalidade VARCHAR(50) NOT NULL
);
CREATE TABLE Livros (
    id_livro INT AUTO_INCREMENT PRIMARY KEY,
    titulo VARCHAR(200) NOT NULL,
    id_autor INT,
    data_publicacao DATE NOT NULL,
    preco DECIMAL(10, 2) NOT NULL,
    estoque INT NOT NULL,
    FOREIGN KEY (id_autor) REFERENCES Autores(id_autor)
);
CREATE TABLE Clientes (
    id_cliente INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) NOT NULLCREATE TABLE Clientes (
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

INSERT INTO Autores (nome, data_nascimento, nacionalidade) VALUES
(' Marina Rowling', '1965-07-31', 'Britânica'),
('Octávio Orwell', '1903-06-25', 'Olandes'),
('Jose Tolkien', '1892-01-03', 'Colombiano'),
('Lorena Christie', '1890-09-15', 'Paranaense'),
('Gabriel García Márquez', '1927-03-06', 'Colombiano');

INSERT INTO Livros (titulo, id_autor, data_publicacao, preco, estoque) VALUES
('Harry Potter e a Pedra Filosofal', 1, '1997-06-26', 49.90, 10),
('1984', 2, '1949-06-08', 39.90, 5),
('O Senhor dos Anéis: A Sociedade do Anel', 3, '1954-07-29', 59.90, 7),
('O Assassinato de Roger Ackroyd', 4, '1926-06-01', 29.90, 8),
('Cem Anos de Solidão', 5, '1967-06-05', 49.90, 12);

INSERT INTO Clientes (nome, email, telefone, data_cadastro) VALUES
('Pedro Henrique', 'pedro.henrique@example.com', '1234567890', '2023-02-15'),
('Larissa Alboquerque', 'larissa.alboquerque@example.com', '0987654321', '2023-03-20'),
('Cecília Ramos', 'cecília.ramos@example.com', '1122334455', '2023-04-10'),
('Mateo Laurindo', 'mateo.laurindo@example.com', '2233445566', '2023-05-05'),
('José Marquesin', 'josé.marquesin@example.com', '3344556677', '2023-06-18');

INSERT INTO Vendas (id_cliente, data_venda, valor_total) VALUES
(1, '2024-10-01', 130.90),
(2, '2024-10-03', 50.89),
(3, '2024-10-05', 100.50),
(4, '2024-10-07', 120.90),
(5, '2024-10-09', 100.90);

INSERT INTO Itens_Venda (id_venda, id_livro, quantidade, preco_unitario) VALUES
(1, 1, 2, 49.90),  -- Pedro Henrique comprou 2 livros de Harry Potter e a Pedra Filosofal
(2, 2, 1, 39.90),  -- Larissa Alboquerque comprou 1 livro de 1984
(3, 3, 1, 59.90),  -- Cecília Ramos comprou 1 livro de O Senhor dos Anéis
(4, 4, 2, 29.90),  -- Mateo Laurindo comprou 2 livros de O Assassinato de Roger Ackroyd
(5, 5, 2, 49.90);  -- José Marquesin comprou 2 livros de Cem Anos de Solidão

