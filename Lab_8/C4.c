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
    struct Players p[100], temp;
    int n, i, j;

    printf("Enter number of players: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of player %d\n", i + 1);

        printf("Player Name: ");
        scanf("%s", p[i].p_name);

        printf("Team Name: ");
        scanf("%s", p[i].team);

        printf("Score: ");
        scanf("%d", &p[i].score);

        printf("Average: ");
        scanf("%f", &p[i].average);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (p[i].score < p[j].score)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("\nHighest Score: %d\n", p[0].score);

    printf("\nTop 3 Players Based on Score:\n");
    printf("Name\tTeam\tScore\tAverage\n");

    for (i = 0; i < 3 && i < n; i++)
    {
        printf("%s\t%s\t%d\t%.2f\n",
               p[i].p_name,
               p[i].team,
               p[i].score,
               p[i].average);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(p[i].p_name, p[j].p_name) > 0)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("\nPlayers Sorted Alphabetically by Name:\n");
    printf("Name\tTeam\tScore\tAverage\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\t%.2f\n",
               p[i].p_name,
               p[i].team,
               p[i].score,
               p[i].average);
    }
}
