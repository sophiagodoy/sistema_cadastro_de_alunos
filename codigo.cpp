// SISTEMA DE CADASTRO DE ALUNOS 
// DEFININDO BIBLIOTECAS 
#include <iostream>
#include <string>

// DEFININDO UMA STRUCT
struct Alunos {
    std::string nome;
    int matricula;
    float nota;
};

int main() {
    // DEFININDO VARIÁVEIS
    Alunos vetor[100];
    int opcao;
    std::string nome_busca;
    char continuar;
    int contador = 0; // contador para rastrear alunos cadastrados

    // MENU DE OPÇÕES
    while (true) {
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
                if (contador < 100) {
                    std::cout << "Digite o nome do aluno: ";
                    std::cin >> vetor[contador].nome; // indica a posicao em que o aluno será colocado, por isso "contador"

                    std::cout << "Digite a matricula do aluno: "; 
                    std::cin >> vetor[contador].matricula; 

                    std::cout << "Digite a nota do aluno: ";
                    std::cin >> vetor[contador].nota; 

                    std::cout << "Aluno cadastrado com sucesso!" << std::endl;
                    contador++;

                    std::cout << "Deseja continuar cadastrando outro aluno? (s/n): ";
                    std::cin >> continuar; 

                    if (continuar != 's' && continuar != 'S') {
                        opcao = 4; // mudar para a opção 4
                    }
                } else {
                    std::cout << "Limite de alunos atingido!" << std::endl;
                }
                break; 

            case 2:
                std::cout << "Alunos cadastrados:\n";
                for (int i = 0; i < contador; i++) {
                    std::cout << "Nome: " << vetor[i].nome // percorrendo todas as posições do vetor, por isso "i"
                              << ", Matricula: " << vetor[i].matricula 
                              << ", Nota: " << vetor[i].nota << std::endl; 
                }
                break; 

            case 3: 
                std::cout << "Digite o nome do aluno que deseja buscar: ";
                std::cin >> nome_busca;

                int encontrado = 0; // indica que até agr não encontrou aluno
                for (int i = 0; i < contador; i++) {
                    if (nome_busca == vetor[i].nome) {
                        std::cout << "Aluno encontrado: " 
                                  << "Nome: " << vetor[i].nome 
                                  << ", Matricula: " << vetor[i].matricula 
                                  << ", Nota: " << vetor[i].nota << std::endl; 
                        encontrado = 1; // indica que encontrou o aluno
                        break; 
                    }
                }

                if (encontrado == 0) { // se após o loop continuar 0, significa que não encontrou nenhum aluno
                    std::cout << "Aluno nao encontrado!" << std::endl; 
                }
                break; 

            case 4: 
                std::cout << "Saindo do programa..." << std::endl;
                return 0; 

            default: 
                std::cout << "Opcao invalida! Tente novamente!" << std::endl;
        }
    }
    
    return 0;
}
