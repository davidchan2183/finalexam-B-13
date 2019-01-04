void lottoseat(int a,int b,int c,int m[8][6])
{
    int n;
    int n1;
    for(int i=1; i<=a; i++)
    {
        do
        {
            n=rand()%2;
            n1=rand()%6;

        }
        while(m[n][n1]==1);
        m[n][n1]=1;
    }
    for(int i=1; i<=b; i++)
    {
        do
        {
            n=rand()%2+2;
            n1=rand()%6;

        }
        while(m[n][n1]==1);
        m[n][n1]=1;
    }
    for(int i=1; i<=c; i++)
    {
        do
        {
            n=rand()%4+4;
            n1=rand()%6;

        }
        while(m[n][n1]==1);
        m[n][n1]=1;
    }



}
