#include<stdio.h>
main()
{
char op;
float fno,sno;

printf("Enter an operator (+, -, *, /): \n");
scanf("%c", &op);
printf("Enter two operands: \n");
scanf("%f %f", &fno, &sno);

switch(op)
{
case '+':
printf("%f", fno + sno);
break;

case '-':
printf("%f", fno - sno);
break;

case '*':
printf("%f", fno * sno);
break;

case '/':
printf("%f", fno / sno);
break;
}
}

