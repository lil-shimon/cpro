//
//  test.c
//  cpro
//
//  Created by Kenta Shimosawa on 2021/05/24.
//

// < # > ******************************************************************
// ==> preprocessor statements/ never change its value
// will utilize the preprocessor to:
// create are own constants and macros with the #defane statement
// build my own library files with the #include statement
// make mare powerful programs with the conditional
// #ifdef, #endif, #else, and #ifndef statements
// ************************************************************************

// < syntax in preprocessor > *********************************************
// using andle brackets #include<~~~.h>
// tells the preprocessor to look for the file in one or more standard
// system directories
//
// using double quotes #include "~~~.h"
// tells the preprocessor to first look in the current directory.
// ************************************************************************

// < stdio.h > ************************************************************
// standard input output
// one of preprocessor
// .h ==> header file. c standard library
// ************************************************************************

// < #include > ***********************************************************
// use~~ in laravel
// import * from "" in React
// from * import * in python
// ************************************************************************

#include <stdio.h>

// function (main should be only one. entry point of c program.)

int main()
{
    // < printf > *********************************************************
    // because of #include stdio.h I can use printf method like this below.
    // without installing, I have to declare printf func.
    //==> extern int printf (const char *__restrict __foramt, ...);
    // ==> console.log();
    // ********************************************************************
    
    printf("Hi My name is lil shimon ");
    
    // return 0 means there is no error.
    // in case return 44, it indicates an error.
    return 0;
}
