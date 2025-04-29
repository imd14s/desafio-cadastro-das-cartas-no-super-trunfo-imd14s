#include <stdio.h>

// struct da cidade.
typedef struct {
    float population;
    float field;
    float pib;  
    int tourist_spot_numbers;
} Card;

// função que recebe a struct de carta para interagir com usuario e adicionar a carta.
void add_attributes(Card *new_card) {
    printf("Digite a quantidade de população: \n");
    scanf("%f", &new_card->population);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &new_card->field);

    printf("Digite o PIB: \n");
    scanf("%f", &new_card->pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &new_card->tourist_spot_numbers);
}

void viwer(int play, Card *card) {
    printf("A carta %d tem: \n", play);
    printf("População: %f \n", card->population);
    printf("Área : %f \n", card->field);
    printf("PIB : %f \n", card->pib);
    printf("Pontos turisticos : %d  \n", card->tourist_spot_numbers);
}

int main() {

    Card card_one;
    Card card_two;

    add_attributes(&card_one);
    printf(" \n \n adicionado carta 2 \n \n ");
    add_attributes(&card_two);
    printf("\n \n Carta 1 \n \n");
    viwer(1, &card_one);
    printf("\n \n Carta 2 \n \n");
    viwer(2, &card_two);
    
    return 0;
}
