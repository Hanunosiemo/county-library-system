/*
  county library managment
  by 0mieso Hanun
  Feb 2022
  MIT license
  C89 Compiler
*/
#include <stdio.h>
#include <stdlib.h>

int menu(){
    int action;
    printf("select an action!\n");
    printf("1.add new patron!\n");
    printf("2.add view patron!\n");
    printf("3.view book!\n");
    printf("4.add new book!\n");
    printf("your action\n");
    scanf("%d",&action);
    return action;
}

int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("Welcome Mr.Zerry!\n");
    printf ("you selected the action %d",menu());
    menu();
    return 0;
}
