#include <stdio.h>

// struct da cidade.
typedef struct {
    unsigned long int population;
    float field;
    float pib;  
    int tourist_spot_numbers;
    float population_density;
    float pib_capital;
    float super_power;
} Card;

// função que recebe a struct de carta para interagir com usuario e adicionar a carta.
void add_attributes(Card *new_card) {
    printf("Digite a quantidade de população: \n");
    scanf("%lu", &new_card->population);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &new_card->field);

    printf("Digite o PIB: \n");
    scanf("%f", &new_card->pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &new_card->tourist_spot_numbers);
    
    // adicionando o calculo para a struct
    new_card->population_density = new_card->population / new_card->field;
    new_card->pib_capital = new_card->pib / new_card->population;
    new_card->super_power = 1 / new_card->population_density + new_card->pib_capital + new_card->tourist_spot_numbers;
}

// função responsavel de exibir os atributos.
void viwer(int play, Card *card) {
    printf("carta %d \n \n", play);
    printf("População: %0.2lu \n", card->population);
    printf("Área : %0.2f \n", card->field);
    printf("PIB : %0.2f \n", card->pib);
    printf("Pontos turisticos : %d  \n", card->tourist_spot_numbers);
    printf("Densidade populacional: %0.2f \n", card->population_density);
    printf("PIB por capital: %0.2f \n", card->pib_capital);
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
    

    printf("\nResultado da comparação:\n");
    printf("Atributo\t\tCarta 1\tCarta 2\n");

    // comparação das cartas
    if(card_one.super_power > card_two.super_power){
        printf("1 - A Primeira carta venceu !!!");
    } else {
        printf("0 - A Segunda carta venceu !!!");
    }

    return 0;
}
