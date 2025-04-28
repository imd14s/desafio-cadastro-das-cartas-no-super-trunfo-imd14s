#include <stdio.h>
#include <string.h>

// struct da cidade.
typedef struct {
    char state[50]; 
    char id_card[50];
    char city[50];
    float population;
    float field;
    float pib;  
    int tourist_spot_numbers;
} Card;

// função que recebe a struct de carta para interagir com usuario e adicionar a carta.
void add_attributes(Card *new_card) {
    printf("Digite o nome da cidade: \n");
    scanf("%s", &new_card->city);

    printf("Digite o nome do estado: \n");
    scanf("%s", &new_card->state);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &new_card->id_card);

    printf("Digite a quantidade de pupolação: \n");
    scanf("%f", &new_card->population);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &new_card->field);

    printf("Digite o PIB: \n");
    scanf("%f", &new_card->pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &new_card->tourist_spot_numbers);
};


int main() {

    Card card_one;
    Card card_two;

    add_attributes(&card_one);
    printf(" \n \n adicionado carta 2 \n \n ");
    add_attributes(&card_two);

    
    return 0;
}
