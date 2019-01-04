void printseat(int howmanyseat,int m[8][6])
{
    printf("\n0=have a seat\n1=this seat had been selected\n");

    printf("   0    1          2    3          4    5\n");
    for(int i=0; i<8; i++)
    {
        if(i==2 || i==4){
            printf("-----------------------------------------------\n");
        }
        printf("%d", i);

        for(int j=0; j<6; j++)
        {
            if(j==2 || j==4)
            {
                printf("      ");

            }
            printf("| %d",m[i][j]);
            printf(" |");

        }
        if(i<=1)
        {
            printf("<--first class");
        }
        else if(i>1 && i<4)
        {
            printf("<--business class");
        }
        else
        {
            printf("<--economic class");
        }
        printf("\n");
    }
    printf("\n%d seats you can select\n",howmanyseat);
}
