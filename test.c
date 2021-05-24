//
//  test.c
//  cpro
//
//  Created by Kenta Shimosawa on 2021/05/24.
//

// The header file stdio. h stands for standard input output.
// It has the infomation related to input/output funcitons.
// ==> extern int printf (const char *__restrict __foramt, ...);
// this is like use~~ in laravel.. also like import * from "" in React..
#include <stdio.h>

int main()
{
    // because of #include stdio.h I can use printf method like this below.
    // without installing, I have to declare printf func.
    printf("Hi My name is lil shimon ");
    return 0;
}
