#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int checkForUnflippedCard(bool *isFlipped, int length) { //podiva se, jestli je nektera karta neotocena, pokud je, vrati pravdu
    bool unflippedCard = false;
    for (int i = 0; i < length; i++)
        if (!isFlipped[i]) unflippedCard = true;
    return unflippedCard;
}

int main() {
    int difficulty, arrLength, input1, input2, tries = 0;
    srand(time(NULL));
    do {                //vyzve uzivatele k zadani obtiznosti
        system("clear");
        printf("Choose difficulty:\n");
        printf("1) Easy\n");
        printf("2) Medium\n");
        printf("3) Hard\n>> ");
        scanf("%d", &difficulty);
    } while (difficulty < 1 || difficulty > 3);
    system("clear");
    switch(difficulty) {    //zada velikost pole
        case 1 : arrLength = 4; break;
        case 2 : arrLength = 8; break;
        case 3 : arrLength = 12; break;
    }
    
    int nums[arrLength]; //vytvoreni pole s hodnotami
    bool isFlipped[arrLength]; //vytvoreni pole, ktere nese informaci o tom, zda je karta na danem indexu otocena
    for (int i = 0; i < arrLength; i++) { //naplneni poli
        nums[i] = rand() % 9 + 1;
        isFlipped[i] = false; 
    }
    
    for (int i = 0; i < arrLength - 1; i++) //nahodne zprehazeni hodnot pres upraveny sort (podminka k prehozeni hodnot nezavisi na jejich velikosti, ale na nahodne generovanem cisle)
            for (int k = i + 1; k < arrLength; k++)
                if (rand() % 2) {
                    int buffer = nums[i];
                    nums[i] = nums[k];
                    nums[k] = buffer;
                }
    
    for (int i = 0; i < arrLength; i++) //vypsani indexu
        printf("%5d", i);
    printf("\n\n");
    for (int i = 0; i < arrLength; i++) { //vypsani hodnot
        printf("%5d", nums[i]);
    }
    printf("\n\n");
    usleep(5000000); //cekani na uzivatele
    
    do { //hlavni cyklus hry
    tries++;
        do { //vyzve uzivatele k zadani prvniho indexu, karta s danym indexem nesmi uz byt otocena, stejna jako druha karta a musi byt v danem rozmezi
            system("clear");
            printf("Enter index of a card (0-%d):\n>> ", arrLength-1);
            scanf("%d", &input1);
        } while((input1 < 0 || input1 > arrLength - 1) || isFlipped[input1]);
        do { //vyzve uzivatele k zadani hodnoty
            system("clear");
            printf("Enter value of the card:\n>> ");
            scanf("%d", &input2);
        } while((input2 < 0 || input2 > 9));
        system("clear");
        isFlipped[input1] = true; //otoceni karty
        for (int i = 0; i < arrLength; i++) //vypsani indexu
            printf("%5d", i);
        printf("\n\n");
        for (int i = 0; i < arrLength; i++) //vypsani hodnot karet v zavislosti na jejich stavu (otocena/neotocena)
            if (isFlipped[i]) printf("%5d", nums[i]);
            else printf("%5c", 'X');
        if (nums[input1] != input2) { //otoci karty do puvodniho stavu, pokud uzivatel netrefil spravne
            isFlipped[input1] = false;
            printf("\nYou missed!");
        }
        else printf("\nGotcha!");
        printf("\n\n");
        usleep(5000000);
    } while(checkForUnflippedCard(isFlipped, arrLength)); //nezbyva-li dalsi karta k otoceni, vzskakuje se z czklu a program oznamuje uzivateli vyhru
    printf("Congratz, you needed %d tries to acomplish this task!\n", tries);
    
    return 0;
}
