# SISTEMA DE CADASTRO DE ALUNOS 

Este projeto é um sistema simples de cadastro de alunos em C++, onde é possível cadastrar, exibir e buscar alunos pelo nome.

## Funcionalidades

1. **Cadastrar Aluno**: Adiciona um novo aluno ao sistema, solicitando informações como nome, matrícula e nota.
2. **Mostrar Alunos**: Exibe todos os alunos cadastrados no sistema.
3. **Buscar Aluno**: Permite buscar um aluno pelo nome e exibir suas informações.
4. **Sair**: Encerra o programa.

## Estrutura de Dados

O sistema utiliza uma `struct` chamada `Alunos` para armazenar as seguintes informações de cada aluno:
- **nome**: Nome do aluno (string).
- **matricula**: Número de matrícula do aluno (inteiro).
- **nota**: Nota do aluno (float).

## Limitações

- O sistema suporta até **100 alunos**.
- O nome do aluno é armazenado como uma string simples.
