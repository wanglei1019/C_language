#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"


bool compareByScore(Student stu1,Student stu2)
{
    return stu1.score > stu2.score;
}
bool compareByAge(Student stu1,Student stu2)
{
    return stu1.age > stu2.age;
}

int main()
{
    Student stu1 = {"abc",13,95};
    Student stu2 = {"def",14,98};
    Student stu3 = {"ghi",13,65};
    Student stu4 = {"jkl",12,58};
    Student stu[] = {stu1,stu2,stu3,stu4};
    int size = sizeof(stu)/sizeof(stu[0]);
    
    compare(stu,size,compareByScore);
    return 0;
}

void compare(Student *stu,int number,bool (*p)(Student,Student))
{
    for(int i=0;i<number;i++)
    {
        for(int j = 0;j<number-i-1;j++)
        {
            if(!p(stu[j],stu[j+1]))
            {
                Student temp = stu[j];
                stu[i] = stu[i+1];
                stu[i+1] = temp;
            }
        }
    }
    for (int i = 0; i < number; i++)
    {
        printf("%s,%d,%d\n",stu[i].name,stu[i].age,stu[i].score);

    }   
}