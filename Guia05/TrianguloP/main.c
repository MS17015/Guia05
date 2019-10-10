
int main()
{
    int facto(long long int num);
    int i,j=1,k=1,tab,n=10; //i = renglones  j = elementos
    long int elemento;
    for (i = 0; i < n; i++)
    {
        for ( j = 1; j < n-i; j++)
            printf ("   ")  ;
        for (k = 0; k <= i; k++)
            printf ("%6d",(facto(i))/(facto(k)*(facto(i-k))));
        printf ("\n");
    }
}
int facto(long long int num)
{
    int i=num;
    long long fact=1;
    for(i=num;i>1;i--)
    {
        fact*=i;
    }
    return fact;
}