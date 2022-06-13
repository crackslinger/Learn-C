* return multiple values using struct */

#include<stdio.h>
#include<stdlib.h>

// struct to store info
typedef struct UserInfo
{
    int age;
    float height;
    char name[24];
} s_Userinfo;

// function to get user info
s_Userinfo Getinfo(void)
{
    s_Userinfo info = {0};      // create struct array

    printf("\n\n Enter User age = ");
    scanf("%d", &info.age);

    printf("\n\n Enter User height = ");
    scanf("%f", &info.height);
    fgetc(stdin);

    printf("\n\n Enter User name = ");
    fgets(info.name, 24, stdin);

    return info;

}

int main()
{
    s_Userinfo info = {0};
    
    info = Getinfo();
    
    printf("\n User age = %d", info.age);
    printf("\n User height = %f", info.height);
    printf("\n User name = %s", info.name);

    return 0;
}
