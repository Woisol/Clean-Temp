#include<stdio.h>
#include<windows.h>
//2022-05-03第一个有实用意义的软件！
//下一步加上窗口，加上保存功能
void cl1(void);
void cl2(void);
void cl3(void);
void cl1()
{
    system("rd/s/q C:\\Users\\Woisol\\Desktop\\temp1");system("md C:\\Users\\Woisol\\Desktop\\temp1");
}
void cl2()
{
    system("rd/s/q C:\\Users\\Woisol\\Desktop\\temp2");system("md C:\\Users\\Woisol\\Desktop\\temp2");
}
void cl3()
{
    system("rd/s/q C:\\Users\\Woisol\\Desktop\\temp3");system("md C:\\Users\\Woisol\\Desktop\\temp3");
}
int main ()
{
    system("mode con cols=40 lines=2");
    int t;
    printf("Please type into the instruction_code:");
    scanf("%d",&t);
    switch (t)
    {
    case 1:cl1();break;
    case 2:cl2();break;
    case 3:cl3();break;
    case 12:cl1();cl2();break;
    case 13:cl1();cl3();break;
    case 23:cl2();cl3();break;
    default:
    case 0:
    case 123:cl1();cl2();cl3();break;
    }
    printf("Roger,moving...");
    Sleep(600);
    return(0);
}
