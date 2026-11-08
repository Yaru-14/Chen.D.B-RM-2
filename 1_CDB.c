//202610116105
//陈达彬


#include <stdio.h>

struct Player
{
    char name[16];
    int score;
};

void sort_players(struct Player arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j].score < arr[j+1].score)
            {
                struct Player temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("输入:\r\n");
    scanf("%d",&n);

    struct Player Players[10];

    for(int i = 0; i < n; i++)
    {
        scanf("%s %d",Players[i].name, & Players[i].score);
    }

    sort_players(Players,n);

    printf("输出：\r\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d %s %d\r\n", i + 1, Players[i].name, Players[i].score);
    }

    return 0;
}