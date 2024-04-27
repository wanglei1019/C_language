#ifndef MAIN_H
#define MAIN_H

typedef struct Student
{
    char name[5];
    int age;
    int score;
} Student;


bool compareByScore(Student stu1,Student stu2);
bool compareByAge(Student stu1,Student stu2);
void compare(Student *stu,int number,bool (*p)(Student,Student));

#endif