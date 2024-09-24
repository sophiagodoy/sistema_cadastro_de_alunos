// CADASTRO DE ALUNOS 
// DEFININDO BIBLIOTECAS 
#include <iostream>
#include <string>

// DEFININDO UMA STRUCT
struct Alunos {
    std::string nome;
    int matricula;
    float nota;
};

// FUNÇÃO PARA CADASTRAR UM ALUNO
void cadastrarAluno(struct Alunos vetor[], int &contador) { 
    // & - pq precisamos atualizar contador cada vez que um aluno novo é passado, nas outras funções não precisa porque ela apenas lê o valor de contador
    
    // PEDINDO INFORMAÇÕES
    if (contador < 100) {
        std::cout << "Digite o nome do aluno: ";
        std::cin >> vetor[contador].nome; // devo usar contador e nao i para garantir que cada novo aluno seja armazenado na próxima posição dispinivel do vetor

        std::cout << "Digite a matricula do aluno: "; 
        std::cin >> vetor[contador].matricula;

        std::cout << "Digite a nota do aluno: ";
        std::cin >> vetor[contador].nota;

        std::cout << "Aluno cadastrado com sucesso!" << std::endl;
        
        contador++;
    } 
    else {
        std::cout << "Limite de alunos atingido!" << std::endl;
    }
}

// FUNÇÃO PARA MOSTRAR TODOS OS ALUNOS CADASTRADOR 
void mostrarAlunos(struct Alunos vetor[], int contador) {
    // DEFININDO CONDIÇÕES
    std::cout << "Alunos cadastrados:\n";
    for (int i = 0; i < contador; i++) {
        std::cout << "Nome: " << vetor[i].nome 
                  << ", Matricula: " << vetor[i].matricula 
                  << ", Nota: " << vetor[i].nota << std::endl; 
    }
}

// FUNÇÃO PARA BUSCAR POR UM ALUNO
void buscarAluno(struct Alunos vetor[], int contador) {
    // DEFININDO VARIÁVEIS
    std::string nome_busca;

    // PEDINDO INFORMAÇÕES
    std::cout << "Digite o nome do aluno que deseja buscar: ";
    std::cin >> nome_busca;

    // DEFININDO CONDIÇÕES
    bool encontrado = false; // indica que até agora não encontrou aluno
    for (int i = 0; i < contador; i++) {
        if (nome_busca == vetor[i].nome) {
            std::cout << "Aluno encontrado: " 
                      << "Nome: " << vetor[i].nome 
                      << ", Matricula: " << vetor[i].matricula 
                      << ", Nota: " << vetor[i].nota << std::endl; 
            encontrado = true; // indica que encontrou o aluno
            break; 
        }
    }

    if (!encontrado) { // se após o loop continuar falso, significa que não encontrou nenhum aluno
        std::cout << "Aluno nao encontrado!" << std::endl; 
    }
}

int main() {
    // DEFININDO VARIÁVEIS 
    Alunos vetor[100];
    int contador = 0; // contador para rastrear alunos cadastrados
    int opcao;

    do {
        // DEFININDO MENU
        std::cout << "\nMenu de Opcoes\n";
        std::cout << "1. Cadastrar um novo aluno\n";
        std::cout << "2. Mostrar todos os alunos cadastrados\n";
        std::cout << "3. Buscar um aluno pelo nome\n";
        std::cout << "4. Sair\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        // DEFININDO CONDIÇÕES
        switch (opcao) {
            case 1:
                cadastrarAluno(vetor, contador);
                break;

            case 2:
                mostrarAlunos(vetor, contador);
                break;

            case 3: 
                buscarAluno(vetor, contador);
                break; 

            case 4: 
                std::cout << "Saindo do programa..." << std::endl;
                return 0; 

            default: 
                std::cout << "Opcao invalida! Tente novamente!" << std::endl;
        }
    } while (opcao != 4);
    
    return 0;
}
