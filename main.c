#include <stdio.h>

int main()
{
    char card;
    int number, pin, a, b, balance;

    printf("Welcome to the ATM\n\n");

    printf("Please Insert your card (k,s,l,i)\n\n");
    scanf("%c", &card);
    printf("\n");

    if (card == 'k')
    {
        printf("Hello Kelly Knight\n\n");

        printf(">> Press 1 to withdrawal the money from your account\n\n");
        printf(">> Press 2 to check the balance\n\n");

        b = 50000;

        scanf("%d", &number);
        printf("\n");

        if (number == 1)
        {
            printf("Please enter your 4-digit pin: \n");
            scanf("%d", &pin);

            if (pin == 1234)
            {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);

                if (a > b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("Collect the money\n\n");

                    balance = b - a;

                    printf("Now,your bank balance is %d", balance);
                }
            }
            else
            {
                printf("incorrect pin\n\n");
                printf("please try again\n\n");
                scanf("%d", &pin);

                if (pin == 1234)
                {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);

                    if (a > b)
                    {
                        printf("insufficient");
                    }
                    else
                    {
                        printf("Collect the money\n\n");

                        balance = b - a;

                        printf("Now,your bank balance is %d", balance);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("So, please try agin");
                }
            }
        }
        else if (number == 2)
        {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &pin);

            if (pin != 1234)
            {
                printf("Please try again\n\n");
                scanf("%d", &pin);

                if (pin != 1234)
                {
                    printf("Your request has been blocked\n");
                    printf("So, please try agin");
                }
                else
                {
                    printf("Your bank balance is %d", b);
                }
            }
            else
            {
                printf("Your bank balance is %d", b);
            }
        }
    }
    else if (card == 's')
    {
        printf("Hello Susan Sanders\n\n");

        printf(">> Press 1 to withdrawal the money from your account\n\n");
        printf(">> Press 2 to check the balance\n\n");

        b = 100000;

        scanf("%d", &number);
        printf("\n");

        if (number == 1)
        {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &pin);

            if (pin == 5678)
            {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);

                if (a > b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("Collect the money\n\n");

                    balance = b - a;

                    printf("Now,your bank balance is %d", balance);
                }
            }
            else
            {
                printf("incorrect pin\n\n");
                printf("please try again\n\n");
                scanf("%d", &pin);

                if (pin == 5678)
                {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);

                    if (a > b)
                    {
                        printf("Insufficient");
                    }
                    else
                    {
                        printf("Collect the money\n\n");

                        balance = b - a;

                        printf("Now,your bank balance is %d", balance);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("So, please try agin");
                }
            }
        }
        else if (number == 2)
        {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &pin);

            if (pin != 5678)
            {
                printf("Please try again\n\n");
                scanf("%d", &pin);

                if (pin != 5678)
                {
                    printf("Your request has been blocked\n");
                    printf("So, please try agin");
                }
                else
                {
                    printf("Your bank balance is %d", b);
                }
            }
            else
            {
                printf("Your bank balance is %d", b);
            }
        }
    }
    else if (card == 'i')
    {
        printf("Hello Isabel Ivy\n\n");

        printf(">> Press 1 to withdrawal the money from your account\n\n");
        printf(">> Press 2 to check the balance\n\n");

        b = 600000;

        scanf("%d", &number);
        printf("\n");

        if (number == 1)
        {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &pin);

            if (pin == 9123)
            {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);

                if (a > b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("Collect the money\n\n");

                    balance = b - a;

                    printf("Now,your bank balance is %d", balance);
                }
            }
            else
            {
                printf("incorrect pin\n\n");
                printf("please try again\n\n");
                scanf("%d", &pin);

                if (pin == 9123)
                {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);

                    if (a > b)
                    {
                        printf("Insufficient");
                    }
                    else
                    {
                        printf("Collect the money\n\n");

                        balance = b - a;

                        printf("Now,your bank balance is %d", balance);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("So, please try agin");
                }
            }
        }
        else if (number == 2)
        {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &pin);

            if (pin != 9123)
            {
                printf("Please try again\n\n");
                scanf("%d", &pin);

                if (pin != 9123)
                {
                    printf("Your request has been blocked\n");
                    printf("So, please try agin");
                }
                else
                {
                    printf("Your bank balance is %d", b);
                }
            }
            else
            {
                printf("Your bank balance is %d", b);
            }
        }
    }
    else if (card == 'l')
    {
        printf("Hello Lilly Lawrance\n\n");

        printf(">> Press 1 to withdrawal the money from your account\n\n");
        printf(">> Press 2 to check the balance\n\n");

        b = 40000;

        scanf("%d", &number);
        printf("\n");

        if (number == 1)
        {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &pin);

            if (pin == 8123)
            {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);

                if (a > b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("Collect the money\n\n");

                    balance = b - a;

                    printf("Now,your bank balance is %d", balance);
                }
            }
            else
            {
                printf("incorrect pin\n\n");
                printf("please try again\n\n");
                scanf("%d", &pin);

                if (pin == 8123)
                {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);

                    if (a > b)
                    {
                        printf("Insufficient");
                    }
                    else
                    {
                        printf("Collect the money\n\n");

                        balance = b - a;

                        printf("Now,your bank balance is %d", balance);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("So, please try agin");
                }
            }
        }
        else if (number == 2)
        {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &pin);

            if (pin != 8123)
            {
                printf("Please try again\n\n");
                scanf("%d", &pin);

                if (pin != 8123)
                {
                    printf("Your request has been blocked\n");
                    printf("So, please try agin");
                }
                else
                {
                    printf("Your bank balance is %d", b);
                }
            }
            else
            {
                printf("Your bank balance is %d", b);
            }
        }
    }
}