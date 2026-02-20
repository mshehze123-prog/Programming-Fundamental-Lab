#include <stdio.h>
#include <string.h>
int main()
{
    char username[20];
    int pass;
    int otp;
    printf("Enter username: ");
    scanf("%s", username);
    if (strcmp(username, "hello") == 0)
    {
        printf("Enter pass: ");
        scanf("%d", &pass);
        if (pass == 12345)
        {
            printf("Enter OTP: ");
            scanf("%d", &otp);
            if (otp == 7890)
            {
                printf("Login Successful!");
            }
            else
            {
                printf("Invalid OTP!");
            }
        }
        else
        {
            printf("Invalid Password!");
        }
    }
    else
    {
        printf("Invalid Username!");
    }

    return 0;
}
