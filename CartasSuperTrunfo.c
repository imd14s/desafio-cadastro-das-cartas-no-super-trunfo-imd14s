#include <stdio.h>

// struct da cidade.
typedef struct {
    float population;
    float field;
    float pib;  
    int tourist_spot_numbers;
    float population_density;
    float pib_capital;
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
    
    // adicionando o calculo para a struct
    new_card->population_density = new_card->population / new_card->field;
    new_card->pib_capital = new_card->pib / new_card->population;
}

// função responsavel de exibir os atributos.
void viwer(int play, Card *card) {
    printf("carta %d \n \n", play);
    printf("População: %2.f \n", card->population);
    printf("Área : %2.f \n", card->field);
    printf("PIB : %2.f \n", card->pib);
    printf("Pontos turisticos : %d  \n", card->tourist_spot_numbers);
    printf("Densidade populacional: %2.f \n", card->population_density);
    printf("PIB por capital: %2.f \n", card->pib_capital);
}

int main() {

    Card card_one;
    Card card_two;

    // adicionando primeira carta
    add_attributes(&card_one);
    
    printf(" \n \n adicionado carta 2 \n \n ");
    
    // adicionando segunda carta
    add_attributes(&card_two);
    
    printf("\n \n Carta 1 \n \n");
    
    // exibindo primeira carta
    viwer(1, &card_one);
    
    printf("\n \n Carta 2 \n \n");
    
    //exibindo segunda carta
    viwer(2, &card_two);
    
    return 0;
}
