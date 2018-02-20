
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char rua[30];
    int numero;
    char bairro[50];
    char cidade[20];
    char sigla_estado[4];
    char cep[10];
}endereco;

typedef struct {
    char nome[50];
    char telefone[20];
    endereco end;
}ficha;

ficha cad;

void preenche(ficha *cad){
    getchar();
    printf("Digite seu nome: ");
    fgets(cad->nome, 50, stdin);
    printf("Digite seu telefone: ");
    fgets(cad->telefone, 20, stdin);
    printf("Digite sua rua: ");
    fgets(cad->end.rua, 50, stdin);
    printf("Digite o numero: ");
    scanf("%d", &cad->end.numero);
    getchar();
    printf("Digite o bairo: ");
    fgets(cad->end.bairro, 50, stdin);
    printf("Digite a cidade: ");
    fgets(cad->end.cidade, 20, stdin);
    printf("Estado (Sigla): ");
    fgets(cad->end.sigla_estado, 4, stdin);
    printf("CEP: ");
    fgets(cad->end.cep, 10, stdin);
}

void exibe(ficha cad){
    getchar();
    printf("\n");
    printf("Nome: %s", cad.nome);
    printf("Telefone: %s", cad.telefone);
    printf("Rua: %s", cad.end.rua);
    printf("Numero: %d\n", cad.end.numero);
    printf("Bairro: %s", cad.end.bairro);
    printf("Cidade: %s", cad.end.cidade);
    printf("Estado: %s", cad.end.sigla_estado);
    printf("CEP: %s", cad.end.cep);
    printf("\n\n");
}

int main(int argc, char** argv) {
    ficha cad;
    
    int opcao;
    
    do{
        printf("Menu\n");
        printf("1 - Cadastra\n");
        printf("2 - Exibe\n");
        printf("0 - Sair");
        printf("\n\n");
        printf("--> ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                preenche(&cad);
                break;
            case 2: 
                exibe(cad);
                break;
            case 0: 
                break;
            default: 
                printf("Opção Inválida\n\n");
                break;
        }
    } while(opcao != 0);
    
    
    return 0;
}
