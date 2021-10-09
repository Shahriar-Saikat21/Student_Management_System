#include <stdio.h>
#include <string.h>
#include <conio.h>

typedef struct Student
{
    char studentName[50];
    char studentId[15];
    char studentDept[10];
    char studentAddress[100];
    char studentContactNum[15];
    float studentCGPA;
} Student;

void createAccount();
void displayInfo();
void updateInfo();
void deleteInfo();
void searchInfo();

int main()
{
    char option;

    while (option != '0')
    {
        system("cls");
        printf("\t\t====== Student Management Database System ======\n");
        printf("\n\t\t\t1. Create Student Account");
        printf("\n\t\t\t2. Display All Students Information");
        printf("\n\t\t\t3. Update Student Information");
        printf("\n\t\t\t4. Delete Student Information");
        printf("\n\t\t\t5. Serach Student Information");
        printf("\n\t\t\t0. Exit");

        printf("\n\n\n\t\t\tEnter Your Option: ");
        scanf(" %c", &option);

        switch (option)
        {
        case '1':
            createAccount();
            break;
        case '2':
            displayInfo();
            break;
        case '3':
            updateInfo();
            break;
        case '4':
            deleteInfo();
            break;
        case '5':
            searchInfo();
            break;
        case '0':
            printf("\n\t\t\tThank You\n\t\t\tCreated By : Shahriar Imtiaz Saikat\n");
            break;
        default:
            printf("\n\t\t\tInvalid Option, Please Enter Right Option !\n");
        }
    }
    return 0;
}

void createAccount()
{
    FILE *fileOne = fopen("studentInfo.bin", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    Student stundentInformation;

    system("cls");

    printf("\t\t\t====== Create Student Account ======\n");

    printf("\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(stundentInformation.studentName);
    printf("\t\t\tEnter Student's ID : ");
    getchar();
    gets(stundentInformation.studentId);
    printf("\t\t\tEnter Student's Depertment : ");
    getchar();
    gets(stundentInformation.studentDept);
    printf("\t\t\tEnter Student's Address : ");
    getchar();
    gets(stundentInformation.studentAddress);
    printf("\t\t\tEnter Student's Contact Number : ");
    getchar();
    gets(stundentInformation.studentContactNum);
    printf("\t\t\tEnter Student's Current CGPA : ");
    scanf("%f", &stundentInformation.studentCGPA);

    fwrite(&stundentInformation, sizeof(stundentInformation), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
    getch();
}

void displayInfo()
{
    printf("Done\n");
}
void updateInfo()
{
    printf("Done\n");
}
void deleteInfo()
{
    printf("Done\n");
}
void searchInfo()
{
    printf("Done\n");
}
