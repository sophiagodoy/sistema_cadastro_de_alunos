# Student Registration System

## Description
This project is a C++ program that allows the registration, listing, and search of students. It uses a `struct` to store student information, such as name, ID, and grade. The system includes an interactive menu where the user can choose between registering new students, viewing the list of registered students, and searching for students by name.

## Features
- **Student Registration**: Allows entering a student's name, ID, and grade and stores the information in an array;
- **List Students**: Displays a list of all registered students with their information;
- **Search for a Student**: Allows searching for a specific student by name and displays their information if found;
- **Interactive Menu**: Console interface with clear options for navigating between features.

## Code Structure
The code uses a `struct` called `Alunos` to store student information. The main functions include:
- `void cadastrarAluno(struct Alunos vetor[], int &contador)`;
- `void mostrarAlunos(struct Alunos vetor[], int contador)`;
- `void buscarAluno(struct Alunos vetor[], int contador)`.

## Prerequisites
- A C++ compiler; 
- C++ development environment (e.g., Visual Studio Code, Code::Blocks).
