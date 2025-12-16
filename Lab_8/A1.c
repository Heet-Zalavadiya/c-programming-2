#include <stdio.h>
#include <string.h>

struct Players {
    char p_name[50];
    char team[50];
    int score;
    float average;
};

void main() {
    struct Players P[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("\nEnter details of player %d:\n", i + 1);

        printf("Player Name: ");
        scanf("%s",P[i].p_name);

        printf("Team: ");
        scanf("%s",P[i].team);

        printf("Score: ");
        scanf("%d", &P[i].score);

        printf("Average: ");
        scanf("%f", &P[i].average);
    }

    printf("\nPlayer Details:\n");
    for(i = 0; i < 3; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: %s\n", P[i].p_name);
        printf("Team: %s\n", P[i].team);
        printf("Score: %d\n", P[i].score);
        printf("Average: %.2f\n", P[i].average);
    }

}

