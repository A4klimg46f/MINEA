#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Estrutura para armazenar as coordenadas geográficas
struct Coordenada {
    double latitude;
    double longitude;
};

// Estrutura para representar um equipamento
struct Equipamento {
    string nome;
    string tipo;
};

// Classe para representar uma subestação
class Subestacao {
public:
    string nome;
    Coordenada coordenada;
    vector<Equipamento> equipamentos;

    // Construtor
    Subestacao(string n, double lat, double lon) {
        nome = n;
        coordenada.latitude = lat;
        coordenada.longitude = lon;
    }

    // Método para adicionar equipamento
    void adicionarEquipamento(const string& nome, const string& tipo) {
        Equipamento equipamento = {nome, tipo};
        equipamentos.push_back(equipamento);
    }

    // Método para exibir informações da subestação
    void exibirDetalhes() const {
        cout << "Subestação: " << nome << endl;
        cout << "Coordenadas: (" << coordenada.latitude << ", " << coordenada.longitude << ")" << endl;
        cout << "Equipamentos cadastrados:" << endl;
        for (const auto& equipamento : equipamentos) {
            cout << "  - Nome: " << equipamento.nome << ", Tipo: " << equipamento.tipo << endl;
        }
        cout << endl;
    }
};

// Função principal
int main() {
    vector<Subestacao> subestacoes;
    int opcao;

    do {
        cout << "Menu:" << endl;
        cout << "1. Cadastrar nova subestação" << endl;
        cout << "2. Adicionar equipamento a uma subestação" << endl;
        cout << "3. Listar subestações" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                string nome;
                double lat, lon;
                cout << "Digite o nome da subestação: ";
                cin.ignore();
                getline(cin, nome);
                cout << "Digite a latitude: ";
                cin >> lat;
                cout << "Digite a longitude: ";
                cin >> lon;
                subestacoes.emplace_back(nome, lat, lon);
                cout << "Subestação cadastrada com sucesso!" << endl;
                break;
            }
            case 2: {
                if (subestacoes.empty()) {
                    cout << "Nenhuma subestação cadastrada!" << endl;
                    break;
                }
                string nomeEquip, tipoEquip;
                int index;
                cout << "Escolha a subestação pelo índice:" << endl;
                for (size_t i = 0; i < subestacoes.size(); i++) {
                    cout << i + 1 << ". " << subestacoes[i].nome << endl;
                }
                cin >> index;
                if (index < 1 || index > static_cast<int>(subestacoes.size())) {
                    cout << "Índice inválido!" << endl;
                    break;
                }
                cout << "Digite o nome do equipamento: ";
                cin.ignore();
                getline(cin, nomeEquip);
                cout << "Digite o tipo do equipamento: ";
                getline(cin, tipoEquip);
                subestacoes[index - 1].adicionarEquipamento(nomeEquip, tipoEquip);
                cout << "Equipamento adicionado com sucesso!" << endl;
                break;
            }
            case 3: {
                if (subestacoes.empty()) {
                    cout << "Nenhuma subestação cadastrada!" << endl;
                    break;
                }
                for (const auto& subestacao : subestacoes) {
                    subestacao.exibirDetalhes();
                }
                break;
            }
            case 4:
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
                break;
        }
    } while (opcao != 4);

    return 0;
}
