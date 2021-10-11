#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pointer.h"

int main(void){
    
    Functionary fun1 = {"Ana Luísa", "25", {"Rua Óscar Monteiro Torres 19", "Lisboa", "2635-385"}, {"Facilities Officer", "FO"}};
    Functionary fun2 = fun1;


    strcpy(fun2.name, "Lunay Simão");
    strcpy(fun2.number, "23");

    strcpy(fun2.locality.adress, "Rua Gil Eanes Nº6 1ºDt");
    strcpy(fun2.locality.City, "Setúbal");
    strcpy(fun2.locality.CP, "2835-437");

    strcpy(fun2.position.acronym, "BDSE");
    strcpy(fun2.position.designation, "Big Data Support Engineer");

    printf("My new employee is my love\n");
    functionaryPrint(fun1);

    //A pointer to modify the name specified in the structure
    //Functionary *ptrFun1 = &fun1;

    //ptrFun1.name = strcpy(ptrFun1->name,"Ana Luísa Eduardo");
    functionaryPrint(fun1);

    functionaryCreate(fun2);

    functionaryPrint(fun2);

    return EXIT_SUCCESS;
}