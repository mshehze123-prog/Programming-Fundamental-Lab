#include <stdio.h>
int basicAttack(int dmg, int hp);
int powerStrike(int dmg, int hp);
int heal(int dmg, int hp);
int poisonAttack(int dmg, int hp);

int main() {
    int hp = 100;
    int dmg = 25;
    int choice;
    int (*action)(int, int);

    for (int turn = 1; turn <= 3; turn++) {
        printf("\n--- TURN %d (HP: %d) ---\n", turn, hp);
        printf("1. Basic Attack\n2. Power Strike\n3. Heal\n4. Poison Attack\n");
        printf("Select action: ");
        scanf("%d", &choice);

        if (choice == 1) action = basicAttack;
        else if (choice == 2) action = powerStrike;
        else if (choice == 3) action = heal;
        else if (choice == 4) action = poisonAttack;
        else {
            printf("Invalid choice! Skipping turn.\n");
            continue;
        }

        hp = action(dmg, hp);
        
        if (hp <= 0) {
            printf("Target defeated!\n");
            break;
        }
    }

    printf("\nFinal HP: %d\n", hp);
    return 0;
}

int basicAttack(int dmg, int hp) {
    printf("Dealt %d damage.\n", dmg);
    return hp - dmg;
}

int powerStrike(int dmg, int hp) {
    int finalDmg = (int)(dmg * 2.5);
    printf("Power Strike! Dealt %d damage.\n", finalDmg);
    return hp - finalDmg;
}

int heal(int dmg, int hp) {
    printf("Restored 20 HP.\n");
    return hp + 20;
}

int poisonAttack(int dmg, int hp) {
    int finalDmg = dmg / 2;
    printf("Poison Attack! Dealt %d damage. Target is poisoned.\n", finalDmg);
    return hp - finalDmg;
}
