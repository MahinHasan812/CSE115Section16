/* Write a function void pintByDept(char *deptName , student allStudents[],
int size) that will print the information of only those students who belong
to the department with name pointed to by deptName. The array allStudent is
of length ‘size’ and holds information of all the students.*/
#include<stdio.h>

void printByDept(char *deptName, int student_allStudents[], int size)
{
    for(int i=0;i<size; i++){
        if(strcmp(deptName,student_allStudents[i].dept) == 0){
            printf("Name: %s \nId: %d \nDept: %s \nCGPA: %f \n",student_allStudents[i].name,student_allStudents[i].id,student_allStudents[i].dept,student_allStudents[i].cgpa);
        }
    }
}
int main()
{
    int deptName, student_allStudents, size;
    printByDept(*deptName,  student_allStudents[],  size);
    return 0;
}
