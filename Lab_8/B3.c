#include <stdio.h>
#include <string.h>

struct Players
{
    char p_name[50];
    char team[50];
    int score;
    float average;
};

void main()
{
    int i, j, n;

    printf("Enter the number of players: ");
    scanf("%d", &n);

    struct Players players[n];
    struct Players temp;

    printf("Enter data for %d players:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("\nPlayer %d:\n", i + 1);
        printf("Enter player name: ");
        scanf("%s", players[i].p_name);
        printf("Enter team name: ");
        scanf("%s", players[i].team);
        printf("Enter score: ");
        scanf("%d", &players[i].score);
        printf("Enter average: ");
        scanf("%f", &players[i].average);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(players[i].p_name, players[j].p_name) > 0)
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\t%.2f\n", players[i].p_name, players[i].team, players[i].score, players[i].average);
    }
}
