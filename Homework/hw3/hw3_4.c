#include <stdio.h>
int main()
{
    int  num = 0;
    scanf("%d\n",&num);

    static char name[10000001] = {0};
    static int  price[1000001] = {0};
    static int  type[1000001] = {0};
    int pr = 0;

    for (int i = 0; i < num; i++)
    {
        scanf("%[^,]",name);
        getchar();
        scanf("%d[^,]",&price[i]);
        getchar();
        scanf("%d[^)]",&type[i]);
        getchar();
        pr = pr + price[i];
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = i+1; j < num; j++)
        {
            if (type[i] == type[j])
            {
                price[i] = price[i]+price[j];
            }
        }
        if ((price[i])*2 > pr)
        {
            printf("%d",type[i]);
            break;
        }
        else
        {
            price[i] = price[i];
        }
    }
    return 0;   
}