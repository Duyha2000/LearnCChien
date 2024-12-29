#include<stdio.h>
#include "/Users/mac0s/Documents/LearnCWithChien/src/utils/functions.h"

void teacher_menu() {
    int choice;
    char teacherId[10];
    do {
        printf("\t\tTEACHER MENU\n");
        printf("--------------------\n");
        printf("--------------------\n");
        printf("[1] Add A New teacher.\n");
        printf("[2] Show All teacher.\n");
        printf("[3] Search A teacher.\n");
        printf("[4] Edit A teacher.\n");
        printf("[5] Delete A teacher.\n");
        printf("[0] Exit the program.\n");
        printf("--------------------\n");
        printf("--------------------\n");
        printf("Enter The Choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                break;
                displayAllTeacher();
            }
            case 3: {
                break;
            }
            case 4: {
                break;
            }
            case 5: {
                break;
            }
            case 0: {
                printf("==== Thank you ==== \n");
                printf("==== See u soon ==== \n");
                break;
            }
            default: {
            }
        }
    } while (choice != 0);
}