#include <iostream>
#include <cstdlib>

// define o tamanho da lista, mais este tamanho poderia ser passado por par�metro para o m�todo criar lista
#define TAM 10

using namespace std;

struct lista
{
     int ult;        // possui a posi��o do �ltimo elemento da lista
     int valor[TAM]; // cria uma lista de inteiros com o n�mero de elementos definidos com #define TAM
};

// 1 A)primeiro m�todo a ser executado, cria a lista com o valor -1
void criaLista(lista *lis)
{
     lis->ult = -1;
}

// 1 B)verifica se a lista est� vazia
bool listaVazia(lista *lis)
{
     if (lis->ult == -1)
     {
          return true;
     }
     return false;
}

// 1 C)verifica se a lista est� cheia
bool listaCheia(lista *lis)
{
     if (lis->ult == TAM - 1)
     {
          return true;
     }
     return false;
}

// 1 D)insere o elemento passado por par�metro no final da lista
void insereFinal(lista *lis, int valorIns)
{
     if (listaCheia(lis))
     {
          cout << "Nao � possivel inserir no final pois a lista esta cheia." << endl;
          return;
     }
     // incrementa 1 � vari�vel que mant�m o valor do �ltimo elemento
     lis->ult++;
     // insere o elemento no final da lista
     lis->valor[lis->ult] = valorIns;
}

// 1 E)remove um elemento do final
void removeFinal(lista *lis)
{
     if (listaVazia(lis))
     {
          cout << "Nao é possivel remover um elemento do final pois a lista esta vazia." << endl;
          return;
     }

     // apenas decrementando 1 ao �ltimo elemento n�o ser� mais poss�vel acessar esta posi��o
     lis->ult--;
}

// 1 F)consulta todos os elemento da lista, apresentando os valores inseridos
void consultaLista(lista *lis)
{
     if (listaVazia(lis))
     {
          cout << "Nao � possivel consultar pois a lista esta vazia." << endl;
          return;
     }

     // percorre todos os elementos da lista a partir do in�cio apresentando os valores inseridos
     for (int i = 0; i <= lis->ult; i++)
     {
          cout << "Valor [" << i << "]: " << lis->valor[i] << endl;
     }
}

// 1 G)apresenta o n�mero de elementos inseridos na lista
int consultaNumEleLista(lista *lis)
{
     if (listaVazia(lis))
     {
          cout << "A lista est� vazia" << endl;
     }
     else

          return lis->ult;
}

// 1 H)retorna o ultimo elemento inserido na lista
int consultaUltimo(lista *lis)
{

     if (listaVazia(lis))
     {
          cout << "A lista est� vazia" << endl;
     }
     else

          return lis->valor[lis->ult];
}

// 2 A)insere o elemento passado por par�metro no inicio da lista
void insereInicio(lista *lis, int valorIns)
{
     if (listaVazia(lis))
     {
          cout << "A lista est� vazia" << endl;
     }
     else
     {

          for (int i = lis->ult; i <= 0; i--)
          {
               lis->valor[i] = lis->valor[i + 1];
          }
          lis->valor[0] = valorIns;
     }
     return;
}

// 2 B)remove um elemento do in�cio
void removeInicio(lista *lis)
{
     if (listaVazia(lis))
     {
          cout << "A lista est� vazia" << endl;
     }
     else

          for (int i = 0; i < lis->ult; i++)
          {
               lis->valor[i] = lis->valor[i - 1];
          }
     return;
}

// 2 C)remove uma posi��o do vetor
void removePosicao(lista *lis, int pos)
{
     for (int i = pos; i <= lis->ult; i++)
     {
          lis->valor[i] = lis->valor[i + 1];
     }
     lis->ult--;
     return;
}

// 2 D)remove um valor da lista
void removeValor(lista *lis, int valor)
{
     for (int i = 0; i <= lis->ult; i++)
     {

          if (lis->valor[i] == valor)
          {

               for (int j = i; j < lis->ult - 1; j++)
               {

                    lis->valor[j] = lis->valor[j + 1];

                    lis->ult--;
               }
          }
     }
     return;
}

// 2 E)inverte uma lista onde o �ltimo elemento passa a ser o primeiro e o primeiro para a ser o �ltimo
void inverte(lista *lis)
{
     int j = 0, aux;

     for (int i = 0; i < lis->ult; i++)
     {
          j = lis->ult - i - 1;
          aux = lis->valor[i];
          lis->valor[i] = lis->valor[j];
          lis->valor[j] = aux;
     }

     return;
}
// 2 F)faz uma pesquisa sequencial, retornando a posi�a� do elemento. Se o elemento n�o for encontrado, ir� retornar -1
int pesqseq(lista *lis, int valor)
{

     return 0;
}

// 2 G) faz uma busca bin�ria a procura do valor, retornando a posi��o do valor localizado no vetor
int pesqbin(lista *lis, int valorProcurado)
{

     return 0;
}

void iniciodalistateste(lista *listateste)
{
     criaLista(listateste);
     insereFinal(listateste, 1);
     insereFinal(listateste, 12);
     insereFinal(listateste, 14);
     insereFinal(listateste, 16);
     insereFinal(listateste, 18);
     insereFinal(listateste, 21);
     insereFinal(listateste, 30);
}

// utiliza um menu para comunica��o com o usu�rio com o pro�sito de validar a utiliza��o das fun��es acima declaradas
void iniciarMenu()
{
     // Teste listas Lineares
     lista lis;
     int valor, pos;
     iniciodalistateste(&lis);

     int codigo = -1;

     while (codigo != 0)
     {
          system("cls");

          cout << "--- INFORME UMA DAS OPCOES ABAIXO ---" << endl;
          cout << "1  - Criar" << endl;
          cout << "2  - Inserir pelo final" << endl;
          cout << "3  - Remover pelo final" << endl;
          cout << "4  - Consultar todos" << endl;
          // criar a consi��o a partir daqui
          cout << "5  - Consultar numero de elementos inseridos" << endl;
          cout << "6  - Consultar ultimo elemento" << endl;
          cout << "7  - Inserir no inicio" << endl;
          cout << "8  - Remover do inicio" << endl;
          cout << "9  - Remover posicao" << endl;
          cout << "10 - Remover valor" << endl;
          cout << "11 - Inverter lista" << endl;
          cout << "12 - Pesquisar valor (sequencial)" << endl;
          cout << "13 - Pesquisar valor (binaria)" << endl;
          cout << "14 - Ordenar lista (ASC)" << endl;
          cout << "15 - Ordenar lista (DESC)" << endl;

          cout << "0 - Sair" << endl;

          cout << "Informe a opcao: ";
          cin >> codigo;
          switch (codigo)
          {
          case 0:
               exit(0);
          case 1:
               criaLista(&lis);
               break;
          case 2:

               cout << "Informe o valor a ser inserido: ";
               cin >> valor;
               insereFinal(&lis, valor);
               break;
          case 3:

               removeFinal(&lis);
               break;
          case 4:

               consultaLista(&lis);
               break;

          case 5:

               valor = consultaNumEleLista(&lis);
               cout << "Numero de elementos inseridos: " << valor << endl;
               break;
          case 6:

               valor = consultaUltimo(&lis);
               cout << "O ultimo elemento inserido na lista e: " << valor << endl;
               break;
          case 7:

               cout << "Informe o valor a ser inserido: ";
               cin >> valor;
               insereInicio(&lis, valor);
               break;
          case 8:

               removeInicio(&lis);
               break;
          case 9:

               cout << "Informe a posicao a ser removida: ";
               cin >> valor;
               removePosicao(&lis, valor);
               break;
          case 10:

               cout << "Informe o valor a ser removido: ";
               cin >> valor;
               removeValor(&lis, valor);
               break;
          case 11:

               inverte(&lis);
               break;
          case 12:

               cout << "Informe o valor a ser pesquisado: ";
               cin >> valor;
               pos = pesqseq(&lis, valor);

               // garante que o valor foi encontrado
               if (pos == -1)
               {
                    cout << "O valor " << valor << " nao esta na lista" << endl;
               }
               else
               {
                    cout << "O valor " << valor << " esta na posicao " << pos << endl;
               }
               break;
          case 13:

               cout << "Informe o valor a ser pesquisado: ";
               cin >> valor;
               pos = pesqbin(&lis, valor);

               // garante que o valor foi encontrado
               if (pos == -1)
               {
                    cout << "O valor " << valor << " nao esta na lista" << endl;
               }
               else
               {
                    cout << "O valor " << valor << " esta na posicao " << pos << endl;
               }
               break;

               break;
          case 14:

               //   ordenaAsc(&lis);
               break;
          case 15:

               //  ordenaDesc(&lis);
               break;

          default:
               cout << "A opcao escolhida e invalida" << endl;
          }
          system("pause");
     } // end while

     system("pause");
}

int main()
{

     // testa as fun��es sem a utiliza��o do menu
     // testeFuncoes();

     // inicia o menu de op��es para comunica��o com o usu�rio
     iniciarMenu();

     return 0;
}
