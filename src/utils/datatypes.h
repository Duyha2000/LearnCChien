// Lưu trữ Struct và array:
#include <stdbool.h>

struct Date {
    int month, day, year;
};

struct Student {
    char studentId[10];
    char classroomId[10];
    char name[20];
    struct Date date0fBirth;
    bool gender;
    char email[30];
    char phone[20];
    char password[20];
};

struct Classroom {
    char classroomId[10];
    char teacherId[10];
    char classroomName[10];
    struct Student student[];
};

struct Teacher {
    char teacherId[10];
    char classroomId[10];
    char Name[20];
    struct Date date0fBirth;
    bool gender;
    char Email[30];
    char Phone[20];
    char password[20];
    struct Classroom classroom[];
};