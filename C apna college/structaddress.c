#include<stdio.h>
#include<string.h>


struct addrss{
    int houseNo;
    int blockNo;
    int city [100];
    int state [100];
};

void printAdd(struct address add);


int main()
{
    struct address adds[2];
printf("enter info for 1st person:");
    scanf("%i",&adds[0].houseNo);
    scanf("%i",&adds[0].blockNo);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);

printf("enter info for 2nd person:");
    scanf("%i",&adds[1].houseNo);
    scanf("%i",&adds[1].blockNo);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);

}

void printAdd(struct address add){
    printf("address is %i,%i,%s,%s\n",add.houseNo,add blockNo,add.city,add.state);
}
