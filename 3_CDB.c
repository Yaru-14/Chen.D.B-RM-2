//202610116105
//陈达彬


#include <stdio.h>

struct Window
{
    int buffer [3];
    int count;
};

struct Window push_data(struct Window win, int val)
{
    win.buffer[win.count % 3] = val;
    win.count = win.count + 1;

    return win;
}

int get_average(struct Window win)
{   
    int i;

    if(win.count == 1)
    {
        i= win.buffer[0] / win.count;
    }

    else if(win.count == 2)
    {
        i=(win.buffer[0] + win.buffer[1]) / win.count;
    }

    else
    {
        i=(win.buffer[0] + win.buffer[1] + win.buffer[2]) / 3;
    }

    return i;
}

int main ()
{
    int m;
    struct Window w = {0};

    printf("输入：\r\n");
    scanf("%d",&m);

    for(int i = 0; i < m ; i++)
    {
        int r;
        int s;
        scanf("%d",&r);
        w = push_data(w, r);
        s = get_average(w);

        if(i == m - 1)
        {
            printf("%d\r\n",s);
        }
        else
        {
            printf("%d ",s);
        }
    }

    return 0;
}