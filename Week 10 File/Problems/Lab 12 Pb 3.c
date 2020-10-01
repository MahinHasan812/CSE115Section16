/*Write a function void saveByDept(char *fileName, char *deptName ,
student allStudents[], int size) that will save the information of
all students who belong to the department with name pointed to by
deptName into a text file. The name of the file is given as an
input parameter, fileName.*/

#include<stdio.h>
void saveByDept(char *fileName, char * deptName, int student_allStudents[], int size){
    FILE *fptr = fopen(fileName,"w");
    for(int i=0;i<size; i++){
        if(strcmp(deptName,student_allStudents[i].dept) == 0){
            fprintf(fptr,"Name: %s \nId: %d \nDept: %s \nCGPA: %f \n",student_allStudents[i].name,student_allStudents[i].id,student_allStudents[i].dept,student_allStudents[i].cgpa);
        }
    }
    fclose(fptr);
}
int main()
{
    int fileName, *deptName, student_allStudents[], size;
    saveByDept(fileName,deptName,student_allStudents[],size);
    return 0;
}
