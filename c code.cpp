#include <stdio.h>

struct student {
    int roll_number;
    char name[50];
    float test_mark_1;
    float test_mark_2;
    float test_mark_3;
    float model_exam_mark;
};

int main() {
    struct student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_number);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Test Mark 1: ");
    scanf("%f", &s.test_mark_1);

    printf("Enter Test Mark 2: ");
    scanf("%f", &s.test_mark_2);

    printf("Enter Test Mark 3: ");
    scanf("%f", &s.test_mark_3);

    printf("Enter Model Exam Mark: ");
    scanf("%f", &s.model_exam_mark);

    float total_marks = s.test_mark_1 + s.test_mark_2 + s.test_mark_3 + s.model_exam_mark;
    float average = total_marks / 4;

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", s.roll_number);
    printf("Name: %s\n", s.name);
    printf("Test Mark 1: %.2f\n", s.test_mark_1);
    printf("Test Mark 2: %.2f\n", s.test_mark_2);
    printf("Test Mark 3: %.2f\n", s.test_mark_3);
    printf("Model Exam Mark: %.2f\n", s.model_exam_mark);
    printf("Total Marks: %.2f\n", total_marks);
    printf("Average: %.2f\n", average);

    return 0;
}
