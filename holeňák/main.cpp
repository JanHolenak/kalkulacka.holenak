#include <stdio.h>  // Knihovna pro vstup a výstup (např. printf, scanf)
#include <math.h>   // Knihovna pro matematické funkce (např. pow, fmod)

int main() {
    // Deklarace proměnných pro dvě čísla a volbu operace
    double first, second; // Proměnné pro dvě desetinná čísla
    int choice;           // Proměnná pro volbu operace

    // Vítání uživatele
    printf("Vitejte v kalkulacce!\n");

    // Zadání prvního čísla
    printf("Zadejte prvni cislo: ");
    scanf("%lf", &first);  // Čte desetinné číslo a ukládá ho do proměnné first

    // Zadání druhého čísla
    printf("Zadejte druhe cislo: ");
    scanf("%lf", &second); // Čte druhé desetinné číslo a ukládá ho do proměnné second

    // Výběr operace
    printf("\nJakou operaci chcete provest?\n");
    printf("1. Soucet\n");  // Nabídka pro součet
    printf("2. Rozdil\n");  // Nabídka pro rozdíl
    printf("3. Soucin\n");  // Nabídka pro součin
    printf("4. Podil\n");   // Nabídka pro podíl
    printf("5. Umocneni prvniho cisla druhym\n");  // Nabídka pro umocnění
    printf("6. Zbytek pri deleni (modulo)\n");    // Nabídka pro modulo
    printf("Zadejte cislo odpovidajici operaci (1-6): ");
    scanf("%d", &choice);  // Čte volbu operace (1-6) a ukládá ji do proměnné choice

    // Výběr operace podle volby uživatele
    switch (choice) {
        case 1:  // Součet
            printf("\nVysledek: %.2lf + %.2lf = %.2lf\n", first, second, first + second);
            break;  // Ukončení případu a návrat do hlavní funkce
        case 2:  // Rozdíl
            printf("\nVysledek: %.2lf - %.2lf = %.2lf\n", first, second, first - second);
            break;  // Ukončení případu a návrat do hlavní funkce
        case 3:  // Součin
            printf("\nVysledek: %.2lf * %.2lf = %.2lf\n", first, second, first * second);
            break;  // Ukončení případu a návrat do hlavní funkce
        case 4:  // Podíl
            if (second != 0) {  // Kontrola, zda není dělitel nula
                printf("\nVysledek: %.2lf / %.2lf = %.2lf\n", first, second, first / second);
            } else {  // Pokud je dělitel nula
                printf("\nChyba: Deleni nulou neni povoleno.\n");
            }
            break;  // Ukončení případu a návrat do hlavní funkce
        case 5:  // Umocnění
            printf("\nVysledek: %.2lf ^ %.2lf = %.2lf\n", first, second, pow(first, second));  // Používá se funkce pow z knihovny math.h
            break;  // Ukončení případu a návrat do hlavní funkce
        case 6:  // Modulo (zbytek při dělení)
            if ((int)second != 0) {  // Kontrola, zda není dělitel nula
                printf("\nVysledek: %.0lf %% %.0lf = %.0lf\n", first, second, fmod(first, second));  // Používá se funkce fmod pro modulo
            } else {  // Pokud je dělitel nula
                printf("\nChyba: Modulo nulou neni povoleno.\n");
            }
            break;  // Ukončení případu a návrat do hlavní funkce
        default:  // Pokud uživatel zadal neplatnou volbu
            printf("\nNeplatna volba. Zkuste to znovu.\n");
    }

    return 0;  // Ukončení programu s návratem 0 (úspěch)
}
