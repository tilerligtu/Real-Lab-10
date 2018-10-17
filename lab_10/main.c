//
//  main.c
//  lab_10
//
//  Created by kimo on 10/16/18.
//  Copyright © 2018 CS1. All rights reserved.
//

//
//  main.c
//  Lab10_ToManyFunctions
//
//  Created by Lugtu, Jihan Tyler on 10/15/18.
//  Copyright © 2018 Lugtu, Jihan Tyler. All rights reserved.
//

#include <stdio.h>

//State a Prototype
float get_input(char[]);
float num(float);
float ad(float);
float sub(float);

//Use what we normally use
int main()
{
    //User Input
    float Fahrenheit1, Faen2, Faen3, Faen4;
    float FtoFreeze1, Fto2, Fto3, Fto4;
    float CtoFreeze1, Cto2, Cto3, Cto4;
    float Celsius1, Cel2, Cel3, Cel4;
    
    //User input temp
    Fahrenheit1 = get_input("first");
    Faen2 = get_input("second");
    Faen3 = get_input("third");
    Faen4 = get_input("forth");
    
    //Calculations
    Celsius1 = (5.0/Fahrenheit1);
    Cel2 = (5.0/Faen2);
    Cel3 = (5.0/Faen3);
    Cel4 = (5.0/Faen4);
    CtoFreeze1 = Celsius1 - 0;
    Cto2 = Cel2 - 0;
    Cto3 = Cel3 - 0;
    Cto4 = Cel4 - 0;
    FtoFreeze1 = Fahrenheit1 - 32;
    Fto2 = Faen2 - 32;
    Fto3 = Faen3 - 32;
    Fto4 = Faen4 - 32;
    //Print out table
    printf("Data:\n");
    printf("%15s %15s %15s %15s\n", "Fahrenheit", "Celcuis", "FtoFreeze", "CtoFreeze");
    printf("%15.2f %15.2f %15.2f %15.2f\n", Fahrenheit1, Celsius1, FtoFreeze1, CtoFreeze1 );
    printf("%15.2f %15.2f %15.2f %15.2f\n", Faen2, Cel2, Fto2, Cto2 );
    printf("%15.2f %15.2f %15.2f %15.2f\n", Faen3, Cel3, Fto3, Cto3);
    printf("%15.2f %15.2f %15.2f %15.2f\n", Faen4, Cel4, Fto4, Cto4 );
    return 0;
}

//Use Function to print out Question
float get_input(char want[9])
{
    float inp;
    printf("Enter the %s value for Fahrenheit: ", want);
    scanf("%f", &inp);
    return inp;
}

//Use Function to fine Fto
float num(float cel)
{
    return (5.0/9) * (cel - 32);
}

//Use Function to find Cel
float ad(float cto)
{
    return cto - 32;
}

//Use Function to find Cto
float sub(float fto)
{
    return fto - 0;
}













