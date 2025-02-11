# MINEA
## Como funciona:
Cadastro de subestação: O usuário informa o nome da subestação e suas coordenadas (latitude e longitude).
Cadastro de equipamentos: Equipamentos podem ser adicionados a qualquer subestação cadastrada.
Listagem: O programa exibe as informações detalhadas de cada subestação e seus equipamentos.

## Compilação e execução:
1.Salve o código em um arquivo, por exemplo, subestacao.cpp.
2.Compile com um compilador C++:

g++ -o subestacao subestacao.cpp

3.Execute o programa:

./subestacao

## Codigo para cadastro de estações, subestações e equipamentos de energia

### Cadastro Geoespacial de Subestações de Energia.
Este repositório contém um programa em C++ que permite o cadastro de subestações de energia e seus equipamentos associados, incluindo a localização geográfica (latitude e longitude) de cada subestação.

### Funcionalidades:

Cadastro de Subestações: Inclua o nome e as coordenadas (latitude e longitude) de cada subestação.
Cadastro de Equipamentos: Registre os equipamentos associados a cada subestação, incluindo nome e tipo.
Listagem de Dados: Visualize as informações detalhadas de cada subestação e seus equipamentos.
Requisitos
Compilador C++ (recomendado: g++ versão 11 ou superior).
Como Usar

### 1. Clonar o Repositório

git clone https://github.com/usuario/nome-do-repositorio.git  
cd nome-do-repositorio

### 2. Compilar o Código
Utilize o comando abaixo para compilar:

g++ -o subestacao subestacao.cpp  

### 3. Executar o Programa
  
./subestacao  

### 4. Navegar no Menu
O programa apresenta as seguintes opções:

Cadastrar nova subestação: Insira o nome, latitude e longitude da subestação.
Adicionar equipamento: Escolha uma subestação e insira os detalhes do equipamento.
Listar subestações: Exibe as subestações cadastradas e seus equipamentos.
Sair: Fecha o programa.

### Exemplo de Uso

Menu:  
1. Cadastrar nova subestação  
2. Adicionar equipamento a uma subestação  
3. Listar subestações  
4. Sair  
Escolha uma opção: 1  

Digite o nome da subestação: Subestação Central  
Digite a latitude: -23.5505  
Digite a longitude: -46.6333  
Subestação cadastrada com sucesso!  

### Estrutura do Código
O programa utiliza as seguintes estruturas:

Coordenada: Representa a latitude e longitude de uma subestação.
Equipamento: Armazena os detalhes dos equipamentos (nome e tipo).
Subestacao: Representa a subestação, com métodos para cadastrar e listar equipamentos.

### Possíveis Melhorias
Persistência de dados (armazenamento em arquivos ou banco de dados).
Integração com bibliotecas GIS para visualização em mapas.
Interface gráfica ou API para acesso remoto.

Licença
Este projeto é licenciado sob a MIT License. Consulte o arquivo LICENSE para mais informações.








