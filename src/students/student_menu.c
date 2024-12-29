#include <stdio.h>
#include "/Users/mac0s/Documents/LearnCWithChien/src/utils/functions.h"

void student_menu() {
    int choice;
    char studentId[10];
    // 1. display all students - 2. add - 3.delete - 4. edit - 5. search for a student - 6. exit
    do {
        printf("\t\tSTUDENT MENU\n");
        printf("--------------------\n");
        printf("--------------------\n");
        printf("[1] Add A New student.\n");
        printf("[2] Show All students.\n");
        printf("[3] Search A student.\n");
        printf("[4] Edit A student.\n");
        printf("[5] Delete A student.\n");
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
                displayAllStudent();
                break;
            }
            case 3: {
                printf("Nhập id của học sinh: ");
                fgets(studentId, 10, stdin);
                searchStudent(studentId);
                break;
            }
            case 4: {
                printf("Nhập id của học sinh: ");
                fgets(studentId, 10, stdin);
                editStudent(studentId);
                break;
            }
            case 5: {
                printf("Nhập id của học sinh: ");
                fgets(studentId, 10, stdin);
                deleteStudent(studentId);
                break;
            }
            case 0: {
                printf("==== Thank you ==== \n");
                printf("==== See u soon ==== \n");
                break;
            }

            default: {
                printf("")
            }

        }
    } while (choice != 0);
}