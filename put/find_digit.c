   #include<stdio.h>
int main()
{
    int n;
    printf("enter digit=");
    scanf("%i",&n);
    int count=0;
    int digit;

    while(n>0)
    {
    digit=n%10;
    count++;
    n=n/10;

    }
        printf("digit=%i",count);

    return 0;
}