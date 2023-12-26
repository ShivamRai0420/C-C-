
#include<stdio.h>
#include<math.h>
int main()
{  
int a,b;

char opt;
printf("enter two number:");
scanf("%i%i",&a,&b);

printf("enter operator:");
scanf("%c",&opt);

switch(opt)

{
    case '+':
    printf("%i",a+b);
    break;

     case '-':
    printf("%i",a-b);
    break;

     case '*':
    printf("%i",a*b);
    break;

      case '%':
    printf("%i",a%b);
    break;

    case '/':
    printf("%i",a/b);
    break;


    default:
    printf("sorry");
    break;
}

    return 0;
}