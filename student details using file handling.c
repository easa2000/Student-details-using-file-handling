#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *fp;
    char name[20];
    int roll_no;
    fp = fopen("Student.txt","r");
    if(fp == NULL)
    {
        printf("\n The file could not be opened");
        exit(1);
    }
    // printf("\n Enter the name and roll number of the student: ");
    // //Read from the keyboard
    // fscanf(stdin,"%s %d",name , &roll_no);
    // printf("\n Name : %s \t Roll number: %d",name ,roll_no);

    // read from file student.txt
    fscanf(fp,"%s %d",name ,&roll_no);
    printf("\n Name : %s \t Roll number: %d",name ,roll_no);
    fclose(fp);
}
