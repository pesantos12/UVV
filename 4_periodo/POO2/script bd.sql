create table [dbo].[Livro]
(
[Id] int primary key identity,
[Titulo] varchar(255) null
)

create table [dbo].[Autor]
(
[Id] int primary key identity,
[Nome] varchar(255) null,
[Livro_idLivro] int null,
)

alter table [dbo].[Autor]
add constraint FK_Autor_Livro 
foreign key ([Livro_idLivro]) 
references [dbo].[Livro] ([Id])