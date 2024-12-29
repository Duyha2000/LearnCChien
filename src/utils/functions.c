// xử lý logic function:
#include "datatypes.h"
#include <stdio.h>
#include <string.h>

// students:
// Hiển thị thông tin các học sinh:
struct Student students[50]; //
int countStudents = 0;

void displayAllStudent() {
    printf("\n *** All students ***\n");
    if (countStudents == 0) {
        printf("no student \n");
        return;
    }
    for (int i = 0; i < countStudents; i++) {
        printf("%s %s %s %s", students[i].studentId, students[i].name, students[i].email, students[i].phone);
    }
}

void deleteStudent(char studentId[]) {
    printf("**** Delete a Student **** \n");
    if (countStudents == 0) {
        printf("There are no students");
        return;
    } else {
        // 5 thằng sinh viên:
        // id - name - age - address:
        // 1 - A - 28 - "HN"
        // 3 - A - 28 - "HN"
        // 5 - A - 28 - "HN"
        // 7 - A - 28 - "HN"
        int position = -1;
        for (int i = 0; i < countStudents; i++) {
            if (strcmp(studentId, students[i].studentId)) {
                position = i;
                break;
            }
        }

        // position: logic update:
        struct Student newStudents[countStudents - 1];
        for (int i = 0; i < position; i++) {
            newStudents[i] = students[i];
        }
        for (int i = position + 1; i < countStudents; i++) {
            newStudents[i - 1] = students[i];
        }
        for (int i = 0; i < countStudents - 1; i++) {
            students[i] = newStudents[i];
        }
        countStudents--;
    }
}

// arr = [1,3,5,7]
// [1,3,9,7]
// printf("%d...)
// arr[2] = 9
void updateStudent(char studentId[]) {
    // Nếu không có học sinh, không cho update:
    // Nhập vào id -> xem id này nằm ở vị trí nào trong array ->
    printf("**** Edit a Student **** \n");
    if (countStudents == 0) {
        printf("no student");
        return;
    } else {
        int position = -1;
        for (int i = 0; i <= countStudents; i++) {
            if (strcmp(studentId, students[i].studentId)) {
                position = i;
                break;
            }
        }

        // Dùng printf hiển thị dữ liệu cũ của học sinh
        printf("%s \n %s \n %s", students[position].name, students[position].email, students[position].phone);
        // Sau đấy cập nhật thông tin:
        // Có position -> cập nhật thông tin tại vị trí position:
        // name - email - phone - courses
        // sau khi chỉnh xong: Student updated successfully
        // fgets(thng tin cần cập nhật, kích thước, stdin)
        printf("***Update The New Student ****");
        fgets(students[position].name, 50, stdin);
        fgets(students[position].email, 50, stdin);
        fgets(students[position].phone, 50, stdin);
        printf("Student updated successfully");
    }
}

void searchStudent(char studentId[]) {
    printf("Enter the student you are looking for");
    if (countStudents == 0) {
        printf("no student");
    } else {
        int position = -1;
        for (int i = 0; i < countStudents; i++) {
            if (strcmp(studentId, students[i].studentId)) {
                position = i;
                break;
            }

        }

        printf("%s \n %s \n %s \n %s", students[position].studentId, students[position].name, students[position].email,
               students[position].phone);
    }
}

// Teacher:
struct Teacher teachers[50];
int countTeacher = 0;

void displayAllTeacher() {
    printf("****ALL teacher****\n");
    if (countTeacher == 0) {
        printf("no teacher\n");
        return;
    }
    for (int i = 0; i < countTeacher; i++) {
        printf("%s \n %s \n %s \n %s", teachers[i].teacherId, teachers[i].Name, teachers[i].Email, teachers[i].Phone);
    }
}

void deleteTeacher(char teacherId[]) {
    printf("****Delete A Teacher****");
    if (countTeacher == 0) {
        printf("No teacher");
        return;
    } else {
        int position = -1;
        for (int i = 0; i < countTeacher; i++) {
            if (strcmp(teacherId, teachers[i].teacherId)) {
                position = 1;
                break;
            }
        }
        struct Teacher newTeachers[countTeacher - 1];
        for (int i = 0; i < position; i++) {
            newTeachers[i] = teachers[i];
        }
        for (int i = position + 1; i < countTeacher; i++) {
            newTeachers[i - 1] = teachers[i];
        }
        for (int i = 0; i < countTeacher - 1; i++) {
            teachers[i] = newTeachers[i];
        }
        countTeacher--;
    }
}

void editTeacher(char teacherId[]) {

}



// input: các hàm nhập dữ liệu đầu vào:

// display: các hàm hiển thị ra dữ liệu: