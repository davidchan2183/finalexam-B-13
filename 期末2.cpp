void choiceseat(int a,int b,int c,int m[8][6])
{
    int n2;
    int n3;

    for(int i=1; i<=a; i++)
    {
        do
        {

            printf("FC i j:");
            scanf("%d %d",&n2,&n3);
            while(m[n2][n3]==1)
            {
                printf("this seat have be select\n");
                printf("FC i j:");
                scanf("%d %d",&n2,&n3);
            }
            if(n2>1)
            {
                printf("your choice wrong seat\nplease enter again\n");
            }

        }
        while( n2>1);
        m[n2][n3]=1;
    }
    for(int i=1; i<=b; i++)
    {

        do
        {
            printf("BC i j:");
            scanf("%d %d",&n2,&n3);
            while(m[n2][n3]==1)
            {
                printf("this seat have be select\n");
                printf("BC i j:");
                scanf("%d %d",&n2,&n3);
            }
            if(n2<2 || n2>4)
            {
                printf("your choice wrong seat\nplease enter again\n");
            }
        }
        while(n2<2 || n2>4);
        m[n2][n3]=1;
    }
    for(int i=1; i<=c; i++)
    {

        do
        {
            printf("EC i j:");
            scanf("%d %d",&n2,&n3);
            while(m[n2][n3]==1)
            {
                printf("this seat have be select\n");
                printf("EC i j:");
                scanf("%d %d",&n2,&n3);
            }
            if(n2<4 || n2>7)
            {
                printf("your choice wrong seat\nplease enter again\n");
            }
        }
        while(n2<4 || n2>7);
        m[n2][n3]=1;
    }



}
