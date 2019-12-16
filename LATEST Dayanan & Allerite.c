#include <stdio.h>
#include <conio.h>
#include <windows.h>

struct student {
        int studentID;
        char lastName[100];
        char firstName[100];
        char section[100];
        int hex1;
        int hex2;
        int hex3;
        char subject1[100];
        char subject2[100];
        char subject3[100];
        int totalscore;
        char lettergrade[10];
        struct students *stud;
}students[100], studtemp={};

struct subject {
        int subjectID;
        char subjectCode[100];
        char subjectTitle[100];
}subjects[100];

int randNum=126;
int SubNum=000;
static int numOfStudent = 0;
static int numOfSubject = 0;


char toLower(char ch);
char toUpper(char ch);
int stringCompare(char s1[], char s2[]);
struct student create(struct student addStud);
struct student update();
struct student FileToStruct(int index, int index2);
void duplicatesub(int index2);
void structFile();
void display(int i);
void total(struct student students[],int j);
void letterGrade(struct student st[]);
int searchStud(char iStud[], int j);
void deleteStud(int i, int j);
void stats(struct student student[], int k);
int searchstudfordrop(char iStud[], int j);
struct student enroll(int i, int j);
struct subject updateSub(struct subject subs, int j);
struct student update(struct student studs, int j);
void structToCsv(int i, int j);
void displaySub(int i);
int addsubchecker(char addsub[],int index2);
struct subject createSub(struct subject addSub, int index2);
void stringCopy(char src[], char dest[]);
struct subject updateSub();
struct  subject FileSubToStruct(int index,int index2);
void structSubFile();
int searchSub(char iSub[15], int j);
void deleteSub(int i, int j);
void dropsub2(int i);
void dropsub3(int i);
void sorting(int index);
void defaultsub(int j);
double squareRoot(double sqrt);
void subchecker(int index,int index2);
void duplicateID(int index1);

int main(void){
    int j=0;
    int choice;
    while (1) {
        int index, index2;
        for(index = 0; students[index].studentID !=0; index++){
        }
        for(index2 = 0; subjects[index2].subjectID !=0; index2++){
        }
        system("color F0");
        printf("\t\t\t");printf("%c",201);for(int i=1;i<=77;i++){printf("%c",205);}printf("%c\n",187);
		printf("\t\t\t%c                [COMPUTER SCIENCE STUDENT REGISTRATION SYSTEM]               %c\n",186,186);
		printf("\t\t\t%c                                                                             %c\n",186,186);
        printf("\t\t\t%c Press 1. Create a Student Record        Press 8. Search a Student           %c\n",186,186);
        printf("\t\t\t%c                                                                             %c\n",186,186);
        printf("\t\t\t%c Press 2. Update a Student Record        Press 9. Search a Subject           %c\n",186,186);
        printf("\t\t\t%c                                                                             %c\n",186,186);
        printf("\t\t\t%c Press 3. Create Subject Record          Press 10. Delete Student Record     %c\n",186,186);
        printf("\t\t\t%c                                                                             %c\n",186,186);
        printf("\t\t\t%c Press 4. Update Subject Record          Press 11. Delete Subject Record     %c\n",186,186);
        printf("\t\t\t%c                                                                             %c\n",186,186);
        printf("\t\t\t%c Press 5. Enroll a Student to a Subject  Press 12. Drop a subject            %c\n",186,186);
        printf("\t\t\t%c                                                                             %c\n",186,186);
        printf("\t\t\t%c Press 6. Display all Student Record     Press 13. Export records            %c\n",186,186);
        printf("\t\t\t%c                                                                             %c\n",186,186);
        printf("\t\t\t%c Press 7. Display Subject Record                                             %c\n",186,186);
        printf("\t\t\t%c                                                                             %c\n",186,186);
        printf("\t\t\t%c                      P L E A S E  I N P U T  C H O I C E                    %c\n",186,186);
        printf("\t\t\t%c                                                                             %c\n",186,186);
        printf("\t\t\t");printf("%c",200);for(int i=1;i<=77;i++){printf("%c",205);}printf("%c\n",188);
		scanf("%d", &choice);
        system("cls");
            if(choice <= 0 || choice > 14){
            printf("\n\n\t\t\t\t%c",201);for(int i=1;i<=37;i++){printf("%c",205);}printf("%c\n",187);printf("\n");
            printf("\t\t\t\t       The Program is Terminated   \n");printf("\n");
            printf("\t\t\t\t%c",200);for(int i=1;i<=37;i++){printf("%c",205);}printf("%c",188);
                break;
            }
		int num, i=0,j=0;

        switch(choice){
        case 1:{
            int choice2;
            printf("\n\n");
            printf("\t\t\t");printf("%c",201);for(int i=1;i<=57;i++){printf("%c",205);}printf("%c\n",187);
            printf("\t\t\t%c                                                         %c\n",186,186);
            printf("\t\t\t%c Press 1 to register manually register each student.     %c\n",186,186);
            printf("\t\t\t%c                                                         %c\n",186,186);
            printf("\t\t\t%c Press 2 to upload file containing a list of students.   %c\n",186,186);
            printf("\t\t\t%c                                                         %c\n",186,186);
            printf("\t\t\t");printf("%c",200);for(int i=1;i<=57;i++){printf("%c",205);}printf("%c\n",188);
            scanf("%d", &choice2);
            system("cls");
            switch(choice2){
            case 1:
                printf("You will be manually registering the student's credentials.\n");
                students[index] = create(students[index]);
                index++;
                Sleep(1000);
                system("cls");
                printf("\n\n\t\t\t\tS T U D E N T  I S  S U C C E S S F U L L Y  R E G I S T E R E D");
                Sleep(2000);
                system("cls");
                break;
            case 2:
            FileToStruct(index, index2);
            index++;
            printf("\n\t\t\t\tFile has been successfully uploaded!\n\n");
            Sleep(1000);
            system("cls");
            }
            break;
            }
        case 2:
            students[index] = update(students[index], index);
            index++;
            break;
        case 3:{
            int choice3;
            printf("\n\n");
            printf("\t\t\t");printf("%c",201);for(int i=1;i<=57;i++){printf("%c",205);}printf("%c\n",187);
            printf("\t\t\t%c                                                         %c\n",186,186);
            printf("\t\t\t%c Press 1 to register manually register each subject.     %c\n",186,186);
            printf("\t\t\t%c                                                         %c\n",186,186);
            printf("\t\t\t%c Press 2 to upload file containing a list of subjects.   %c\n",186,186);
            printf("\t\t\t%c                                                         %c\n",186,186);
            printf("\t\t\t");printf("%c",200);for(int i=1;i<=57;i++){printf("%c",205);}printf("%c\n",188);
            scanf("%d", &choice3);
            system("cls");
            switch(choice3){
            case 1:{
                printf("You will be manually registering the each subject's credentials.\n");
                char subname[50];
                printf("We will be checking the subject code if already exists.\n\n");
                printf("Please enter subject code: ");
                scanf(" %[^\n]", &subname);
                if (addsubchecker(subname,index2)==1){
                subjects[index2]=createSub(subjects[index2],index2);
                index2++;
                }else if(addsubchecker(subname,index2)==0){
                printf("\n\n\t\t\t\tS U B J E C T  I S  N O T  S U C C E S S F U L L Y  R E G I S T E R E D");
                printf("\n\n\t\t\t\tS U B J E C T  A L R E A D Y  E X I S T S  I N  T H E  R E C O R D");
                subjects[index2+1]=subjects[index2];
                Sleep(2000);
                system("cls");
                }
                break;
                }
            case 2:
                FileSubToStruct(index,index2);
                index2++;
                printf("\n\t\t\t\tFile has been successfully uploaded!\n\n");
            }
            break;
        }
        case 4:
            subjects[index2] = updateSub(subjects[index2], index2);
            index2++;
            break;
        case 5:{
            printf("\n");printf("%c",201);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",187);
            printf("%c                                             SUBJECT RECORDS                                        %c\n",186,186);
            printf("%c                                                                                                    %c\n",186,186);
            printf("%c%-7s %-15s %-18s                                                          %c\n",186, "ID NO.","SUBJECT CODE", "SUBJECT TITLE",186);
            printf("%c                                                                                                    %c\n",186,186);
            printf("%c",186);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",186);
            printf("%c                                                                                                    %c\n",186,186);
            for(int i=0;i<index2;i++){
                displaySub(i);
            }
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c",200);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",188);
            enroll(index, index2);
            break;
            }
        case 6:
            subchecker(index,index2);
            printf("\n");printf("%c",201);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",187);
            printf("%c                                                                    STUDENT RECORDS                                                             %c\n",186,186);
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c%-7s %-15s %-18s %-13s %-8s %-8s %-8s %-6s %-15s %-12s %-11s %-11s %c\n",186, "ID NO.","LAST NAME", "FIRST NAME", "SECTION", "EXAM 1", "EXAM 2", "EXAM 3", "TOTAL", "LETTER GRADE", "SUBJECT 1", "SUBJECT 2", "SUBJECT 3",186);
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c",186);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",186);
            printf("%c                                                                                                                                                %c\n",186,186);
                if(index==0){
            printf("%c                                                      N O  S T U D E N T  I S  R E G I S T E R E D                                              %c\n",186,186);
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c",200);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",188);
            Sleep(3000);
            system("cls");
            break;
            }else{
                total(students,index);
                letterGrade(students);
                for(i=0;i<index;i++){
                    sorting(index);
                    display(i);
                }
                printf("%c                                                                                                                                                %c\n",186,186);
                stats(students,index);
                printf("%c",200);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",188);
                break;
            }
        case 7:
            printf("\n");printf("%c",201);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",187);
            printf("%c                                             SUBJECT RECORDS                                        %c\n",186,186);
            printf("%c                                                                                                    %c\n",186,186);
            printf("%c%-7s %-15s %-18s                                                          %c\n",186, "ID NO.","SUBJECT CODE", "SUBJECT TITLE",186);
            printf("%c                                                                                                    %c\n",186,186);
            printf("%c",186);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",186);
            printf("%c                                                                                                    %c\n",186,186);
                if(index2==0){
            printf("%c                            N O  S U B J E C T  I S  R E G I S T E R E D                            %c\n",186,186);
            printf("%c                                                                                                    %c\n",186,186);
            printf("%c                                                                                                    %c\n",186,186);
            printf("%c                                                                                                    %c\n",186,186);
            printf("%c",200);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",188);
            Sleep(3000);
            system("cls");
            break;
            }else{
                for(j=0;j<index2;j++){
                    displaySub(j);
                }
            }
            printf("%c",200);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",188);
            break;
        case 8:{
            char studLastName[20];
            printf("Please enter the student's last name: ");
            scanf(" %[^\n]s",&studLastName);
            printf("\n");printf("%c",201);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",187);
            printf("%c                                                                    STUDENT RECORDS                                                             %c\n",186,186);
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c%-7s %-15s %-18s %-13s %-8s %-8s %-8s %-6s %-15s %-12s %-11s %-11s %c\n",186, "ID NO.","LAST NAME", "FIRST NAME", "SECTION", "EXAM 1", "EXAM 2", "EXAM 3", "TOTAL", "LETTER GRADE", "SUBJECT 1", "SUBJECT 2", "SUBJECT 3",186);
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c",186);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",186);
            printf("%c                                                                                                                                                %c\n",186,186);
                if(searchStud(studLastName,index)==1){
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c",200);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",188);
            }else{
                printf("%c\t\t\t\t\t\t\tNo record for this student.                                                              %c\n",186,186);
                printf("%c                                                                                                                                                %c\n",186,186);
                printf("%c                                                                                                                                                %c\n",186,186);
                printf("%c",200);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",188);
                Sleep(3000);
                system("cls");
            }
            break;
        }
        case 9:{
            int choice4;
            char subName[15];
            printf("Please enter subject code: ");
            scanf(" %[^\n]s",&subName);
            printf("\n");printf("%c",201);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",187);
            printf("%c                                             SUBJECT RECORDS                                        %c\n",186,186);
            printf("%c                                                                                                    %c\n",186,186);
            printf("%c%-7s %-15s %-18s                                                          %c\n",186, "ID NO.","SUBJECT CODE", "SUBJECT TITLE",186);
            printf("%c                                                                                                    %c\n",186,186);
            printf("%c",186);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",186);
            if(searchSub(subName,index2)==1){
            printf("%c                                                                                                    %c\n",186,186);
            printf("%c                                                                                                    %c\n",186,186);
            printf("%c",200);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",188);
            }else{
            printf("%c\t\t\t\t\tNo record for this subject.                                  %c\n",186,186);
            printf("%c                                                                                                    %c\n",186,186);
            printf("%c",200);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",188);

            printf("\n");printf("%c",201);for(int i=1;i<=47;i++){printf("%c",205);}printf("%c\n",187);
            printf("%c                                               %c\n",186,186);
            printf("%cDo you want to register this subject instead?  %c\n",186,186);
            printf("%c                                               %c\n",186,186);
            printf("%cPress 1 for YES\t Press 2 for NO         %c\n",186,186);
            printf("%c                                               %c\n",186,186);
            printf("%c",200);for(int i=1;i<=47;i++){printf("%c",205);}printf("%c\n",188);
            scanf("%d", &choice4);
            system("cls");
            if(choice4==1){
                int choice5;
                printf("\n\n");
                printf("\t\t\t");printf("%c",201);for(int i=1;i<=57;i++){printf("%c",205);}printf("%c\n",187);
                printf("\t\t\t%c                                                         %c\n",186,186);
                printf("\t\t\t%c Press 1 to register manually register the subject.      %c\n",186,186);
                printf("\t\t\t%c                                                         %c\n",186,186);
                printf("\t\t\t%c Press 2 to upload file containing a list of subjects.   %c\n",186,186);
                printf("\t\t\t%c                                                         %c\n",186,186);
                printf("\t\t\t");printf("%c",200);for(int i=1;i<=57;i++){printf("%c",205);}printf("%c\n",188);
                scanf("%d", &choice5);
                system("cls");
                if(choice5==1){
                    printf("You will now be manually registering a subject! ");
                    subjects[index2] = createSub(subjects[index2],index2);
                    index2++;
                    Sleep(1000);
                    system("cls");
                    break;
                }else if(choice5==2){
                    FileSubToStruct(index,index2);
                    index2++;
                    printf("\n\t\t\t\tFile has been successfully uploaded!\n\n");
                    Sleep(1000);
                    break;
                }
            }else if(choice4==2){

                system("cls");
                break;
            }
            }
            break;
        }
        case 10:{
            char studLastName[20];
            int i, j=0;
            printf("Please enter the student's last name to be deleted from the record: ");
            scanf(" %[^\n]s",&studLastName);
            system("cls");
            printf("\n\n");
            for(i=0;i<index; i++){
                if(stringCompare(studLastName,students[i].lastName)==0){
                j=1;
                break;
                }else{
                j++;
                }
            }
            if(j==1){
                printf("\n");printf("%c",201);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",187);
                printf("%c                                                                    STUDENT RECORDS                                                             %c\n",186,186);
                printf("%c                                                                                                                                                %c\n",186,186);
                printf("%c%-7s %-15s %-18s %-13s %-8s %-8s %-8s %-6s %-15s %-12s %-11s %-11s %c\n",186, "ID NO.","LAST NAME", "FIRST NAME", "SECTION", "EXAM 1", "EXAM 2", "EXAM 3", "TOTAL", "LETTER GRADE", "SUBJECT 1", "SUBJECT 2", "SUBJECT 3",186);
                printf("%c                                                                                                                                                %c\n",186,186);
                printf("%c",186);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",186);
                display(i);
                printf("%c                                                                                                                                                %c\n",186,186);
                printf("%c",200);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",188);
                Sleep(3000);
                system("cls");
                deleteStud(i,index);
                break;
            }else if(j!=1){
            printf("Student is not yet registered!\n");
            Sleep(2000);
            system("cls");
            break;
            }
            index--;
            break;
        }
        case 11:{
            char subName[30];
            int i, j=0;
            printf("Please enter the subject's name to be deleted from the record: ");
            scanf(" %[^\n]s",&subName);
            system("cls");
            printf("\n\n");
            if(stringCompare(subName,subjects[0].subjectCode)==0){
                printf("You cannot delete CMSC 11 as it is a default subject\n\n");
                Sleep(3000);
                system("cls");
                    break;
            }else{
                for(i=0;i<index2; i++){
                if(stringCompare(subName,subjects[i].subjectCode)==0){
                 j=1;
                break;
                }else{
                j++;
                }
                }
            }
            if(j=1){
                printf("\n");printf("%c",201);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",187);
                printf("%c                                             SUBJECT RECORDS                                        %c\n",186,186);
                printf("%c                                                                                                    %c\n",186,186);
                printf("%c%-7s %-15s %-18s                                                          %c\n",186, "ID NO.","SUBJECT CODE", "SUBJECT TITLE",186);
                printf("%c                                                                                                    %c\n",186,186);
                printf("%c",186);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",186);
                displaySub(i);
                printf("%c                                                                                                    %c\n",186,186);
                printf("%c",200);for(int i=1;i<=100;i++){printf("%c",205);}printf("%c\n",188);
                Sleep(3000);
                system("cls");
                deleteSub(i,index2);
                printf("\n\t\t\t\t\t\tS U B J E C T  I S  D E L E T E D  F R O M  R E C O R D\n");
                printf("\t\t\t\t\t\tPlease refer to the masterlist to see updated record.\n");
                Sleep(3000);
                system("cls");
                break;
            }else if(j!=1){
                printf("No record for this subject!");
                break;
            }
            index2--;
            break;
        }
        case 12:{
            int choice6;
            char studLastName[15];
            printf("You will be dropping a subject!\n\n");
            printf("Please note that you cannot drop your Subject 1\n");
            printf("as it is default for CMSC 11\n");
            printf("\nPlease enter the student's last name: ");
            scanf(" %[^\n]s",&studLastName);
            printf("\n");printf("%c",201);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",187);
            printf("%c                                                                    STUDENT RECORDS                                                             %c\n",186,186);
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c%-7s %-15s %-18s %-13s %-8s %-8s %-8s %-6s %-15s %-12s %-11s %-11s %c\n",186, "ID NO.","LAST NAME", "FIRST NAME", "SECTION", "EXAM 1", "EXAM 2", "EXAM 3", "TOTAL", "LETTER GRADE", "SUBJECT 1", "SUBJECT 2", "SUBJECT 3",186);
            printf("%c                                                                                                                                                %c\n",186,186);
            printf("%c",186);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",186);
                if(searchStud(studLastName,index)==1){
                printf("%c                                                                                                                                                %c\n",186,186);
                printf("%c                                                                                                                                                %c\n",186,186);
                printf("%c",200);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",188);
                printf("\n");
                printf("\t\t\t");printf("%c",201);for(int i=1;i<=50;i++){printf("%c",205);}printf("%c\n",187);
                printf("\t\t\t%c                                                  %c\n",186,186);
                printf("\t\t\t%c Press 1 to drop subject 2.                       %c\n",186,186);
                printf("\t\t\t%c                                                  %c\n",186,186);
                printf("\t\t\t%c Press 2 to drop subject 3.                       %c\n",186,186);
                printf("\t\t\t%c                                                  %c\n",186,186);
                printf("\t\t\t");printf("%c",200);for(int i=1;i<=50;i++){printf("%c",205);}printf("%c\n",188);
                scanf("%d", &choice6);
                switch(choice6){
                    case 1:
                        if(students[searchstudfordrop(studLastName,index)].subject2!='none'){
                            dropsub2(searchstudfordrop(studLastName,index));
                            printf("\n");printf("%c",201);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",187);
                            printf("%c                                                                    STUDENT RECORDS                                                             %c\n",186,186);
                            printf("%c                                                                                                                                                %c\n",186,186);
                            printf("%c%-7s %-15s %-18s %-13s %-8s %-8s %-8s %-6s %-15s %-12s %-11s %-11s %c\n",186, "ID NO.","LAST NAME", "FIRST NAME", "SECTION", "EXAM 1", "EXAM 2", "EXAM 3", "TOTAL", "LETTER GRADE", "SUBJECT 1", "SUBJECT 2", "SUBJECT 3",186);
                            printf("%c                                                                                                                                                %c\n",186,186);
                            printf("%c",186);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",186);
                            display(searchstudfordrop(studLastName,index));
                            printf("%c                                                                                                                                                %c\n",186,186);
                            printf("%c                                                                                                                                                %c\n",186,186);
                            printf("%c",200);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",188);
                            Sleep(3000);
                            system("cls");
                            break;
                        }else{
                            printf("You already have no subject enrolled for subject 2");
                            break;
                        }
                    case 2:
                        if(students[searchstudfordrop(studLastName,index)].subject3!='none'){
                            dropsub3(searchstudfordrop(studLastName,index));
                            printf("You have successfully dropped your 3rd subject!\n");
                           printf("\n");printf("%c",201);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",187);
                            printf("%c                                                                    STUDENT RECORDS                                                             %c\n",186,186);
                            printf("%c                                                                                                                                                %c\n",186,186);
                            printf("%c%-7s %-15s %-18s %-13s %-8s %-8s %-8s %-6s %-15s %-12s %-11s %-11s %c\n",186, "ID NO.","LAST NAME", "FIRST NAME", "SECTION", "EXAM 1", "EXAM 2", "EXAM 3", "TOTAL", "LETTER GRADE", "SUBJECT 1", "SUBJECT 2", "SUBJECT 3",186);
                            printf("%c                                                                                                                                                %c\n",186,186);
                            printf("%c",186);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",186);
                            display(searchstudfordrop(studLastName,index));
                            printf("%c                                                                                                                                                %c\n",186,186);
                            printf("%c                                                                                                                                                %c\n",186,186);
                            printf("%c",200);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",188);
                            Sleep(3000);
                            system("cls");
                            break;
                        }else{
                            printf("You already have no subject enrolled for subject 3");
                            break;
                    }
                }
            }else{
                printf("%c                                                                                                                                                %c\n",186,186);
                printf("%c\t\t\t\t\t\tNo record for this student.                                                                      %c\n",186,186);
                printf("%c                                                                                                                                                %c\n",186,186);
                printf("%c",200);for(int i=1;i<=144;i++){printf("%c",205);}printf("%c\n",188);
                Sleep(3000);
                system("cls");
                break;
            }
        }
        case 13:
            structToCsv(index, index2);
            printf("Succefully exported Records as a CSV files");
            Sleep(3000);
            system("cls");
            break;
}

}
    return 0;
}
// Struct to CSV
void structToCsv(int i, int j) {
	int index,index2;
	FILE *fptr,*ptr2;
	fptr = fopen("students.csv", "r+");
	ptr2 = fopen("temp.csv", "w+");
	fclose(fptr);
    fclose(ptr2);
	remove("students.csv");
    rename("temp.csv", "students.csv");
	fptr = fopen("students.csv", "a+");
		for(index=0;index<i;index++) {
			char studs[100]={};
			char input[100]={};
			sprintf(input, "%d", students[index].studentID);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%s", students[index].lastName);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%s", students[index].firstName);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%s", students[index].section);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%d", students[index].hex1);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%d", students[index].hex2);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%d", students[index].hex3);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%d", students[index].totalscore);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%s", students[index].lettergrade);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%s", students[index].subject1);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%s", students[index].subject2);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%s", students[index].subject3);
			strcat(studs,input);
				if(index==0) {
					fprintf(fptr, "%s", studs);
				} else {
					fprintf(fptr, "\n%s", studs);
				}
		}
	fclose(fptr);

	fptr = fopen("subjects.csv", "r+");
	ptr2 = fopen("temp.csv", "w+");
	fclose(fptr);
    fclose(ptr2);
	remove("subjects.csv");
    rename("temp.csv", "subjects.csv");
	fptr = fopen("subjects.csv", "a+");
		for(index2=0;index2<j;index2++) {
			char studs[100]={};
			char input[100]={};
			sprintf(input, "%d", subjects[index2].subjectID);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%s", subjects[index2].subjectCode);
			strcat(studs,input);
			strcat(studs,",");
			sprintf(input, "%s", subjects[index2].subjectTitle);
			strcat(studs,input);
				if(index2==0) {
					fprintf(fptr, "%s", studs);
				} else {
					fprintf(fptr, "\n%s", studs);
				}
		}
	fclose(fptr);
}
//Update Student
struct student update(struct student studs, int j){
    int studNum, index, choice;
    int studExist=-1;
    int x=1;
    while(x==1){
    printf("Input Student ID Number to be Updated: ");
    scanf("%d", &studNum);
    for(int i=0; i<j; i++){
        if(studNum==students[i].studentID) {
            studExist = i;
            printf("\n");
            display(i);
                break;
            }else{
                studExist = -1;
            }
        if(studExist == -1) {
        printf("\n STUDENT ID NUMBER IS NOT REGISTERED\n");
            break;
        }
    }

    while (x==1){
        printf("\n\t=====================================================================================================================================================");
        printf("\n\t                                                            U P D A T E   S T U D E N T   R E C O R D                                              \n");
        printf("\n\t                                            1: Update Last Name                        5: Update Second Hands on Exam Score                           ");
        printf("\n\t                                            2: Update First Name                       6: Update Third Hands on Exam Score                            ");
        printf("\n\t                                            3: Update CMSC11 Lecture Section           0: Return to Main Menu                                         ");
        printf("\n\t                                            4: Update First Hands on Exam Score                                                                       ");
        printf("\n\t=====================================================================================================================================================");
        printf("\n\tEnter Choice: ");
        scanf("%d", &choice);
        x=2;
        if(choice <= 0 || choice > 6){
                break;
        }
        switch(choice){
            case 1:
                printf("\n\tInput Updated Last Name: ");
                scanf(" %[^\n]s", students[studExist].lastName);
                x=2;
                break;
            case 2:
                printf("\n\tInput Updated First Name: ");
                scanf(" %[^\n]s", students[studExist].firstName);
                x=2;
                break;
            case 3:
                printf("\n\tInput Updated Section: ");
                scanf(" %[^\n]s", students[studExist].section);
                x=2;
                break;
            case 4:
                printf("\n\tInput Updated First Hands on Exam Score: ");
                scanf("%d", &students[studExist].hex1);
                x=2;
                break;
            case 5:
                printf("\n\tInput Updated Second Hands on Exam Score: ");
                scanf("%d", &students[studExist].hex2);
                x=2;
                break;
            case 6:
                printf("\n\tInput Updated Third Hands on Exam Score: ");
                scanf("%d", &students[studExist].hex3);
                x=2;
                break;
            }
        }
    }
    return studs;
}
//Update Subject
struct subject updateSub(struct subject subs, int j){
    int subNum, choice;
    int subExist=-1;
    int x=1;
    while(x==1){
    printf("Input Subject ID Number to be Updated: ");
    scanf("%d", &subNum);
    for(int i=0; i<j; i++){
            printf("%d", j);
        if(subNum==subjects[i].subjectID) {
            subExist = i;
            printf("\n");
            displaySub(i);
                break;
            }else{
                subExist = -1;
            }
        if(subExist == -1) {
        printf("\n SUBJECT ID NUMBER IS NOT REGISTERED\n");
            break;
        }
    }
    while (x==1){
        printf("\n\t=================================================================================================================================");
        printf("\n\t                                     U P D A T E   S U B J E C T   R E C O R D                                                 \n");
        printf("\n\t                                            1: Update Subject Code                                                               ");
        printf("\n\t                                            2: Update Subject Title                                                              ");
        printf("\n\t=================================================================================================================================");
        printf("\n\tEnter Choice: ");
        scanf("%d", &choice);
        if(choice <= 0 || choice > 2){
                break;
        }
        switch(choice){
            case 1:
                printf("\n\tInput Updated Subject Code: ");
                scanf(" %[^\n]s", subjects[subExist].subjectCode);
                x=2;
                break;
            case 2:
                printf("\n\tInput Updated Subject Title: ");
                scanf(" %[^\n]s", subjects[subExist].subjectTitle);
                x=2;
                break;
            }
        }
    }
    return subs;
}
// Student Enroll
struct student enroll(int i, int j) {
	int cnt = 0;
	while(cnt==0) {
	int index, index2, studNum;
	char subCode[100];
	int studExist=-1, subExist=-1;
	int choose;
	int iD=1;
	char studs[100] = {};
		while(iD==1) {
			printf("\nInput Student ID Number: ");
			scanf("%d", &studNum);
				for(index=0;index<i;index++) {
					if(studNum==students[index].studentID) {
						studExist = index;
						break;
					} else {
						studExist = -1;
					}
				}
				if(studExist == -1) {
					printf("\n STUDENT ID NUMBER IS NOT REGISTERED\n");
					break;
				}
			printf("Input Subject Code: ");
			scanf(" %[^\n]s", subCode);
				for(index2=0;index2<j;index2++) {
					if(stringCompare(subCode,subjects[index2].subjectCode)==0) {
						subExist = index2;
						sprintf(studs, "%s", subjects[index2].subjectCode);
						break;
					}else{
					subExist = -1;
					}
				}
				if(subExist == -1){
					printf("\nSUBJECT CODE IS NOT REGISTERED\n");
					break;
				}
            printf("Subject 1 is a default to CMSC11");
			printf("What Subject to Replace?:\n");
            printf("Type 2 for Subject2 = %s\nType 3 for Subject3 = %s\n: ", students[studExist].subject2, students[studExist].subject3);
			scanf("%d", &choose);
			char *ptr1, *ptr2;
			ptr1 = students[studExist].subject2;
			ptr2 = students[studExist].subject3;
			switch(choose){
				case 2:
					sprintf(ptr1, "%s", subjects[index2].subjectCode);
					system("cls");
					printf("\nSuccessfuly changed to %s\n",ptr1);
					cnt = 2;
					break;
				case 3:
					sprintf(ptr2, "%s", subjects[index2].subjectCode);
					system("cls");
					printf("\nSuccessfuly changed to %s\n",ptr2);
					cnt = 2;
					break;
				default:
					printf("\n[INVALID]\n");
            }
            break;
		}
	}
	structFile();
}
//Student Struct to File
void structFile(){
    int index=0;
    FILE *fptr, *ptr2;
    fptr = fopen("students.txt", "r+");
    ptr2 = fopen("temp.txt", "w+");
    fclose(fptr);
    fclose(ptr2);
    remove("students.txt");
    rename("temp.txt", "students.txt");
    fptr = fopen("students.txt", "a+");
    for(index=0;index<numOfStudent;index++){
        char studs[100]={};
        char input[100]={};
        sprintf(input, "%d", students[index].studentID);
        strcat(studs,input);
        sprintf(input, "%s", students[index].lastName);
        strcat(studs,input);
        strcat(studs,",");
        sprintf(input, "%s", students[index].firstName);
        strcat(studs,input);
        strcat(studs,",");
        sprintf(input, "%s", students[index].section);
        strcat(studs,input);
        strcat(studs,",");
        sprintf(input, "%d", students[index].hex1);
        strcat(studs,input);
        strcat(studs,",");
        sprintf(input, "%d", students[index].hex2);
        strcat(studs,input);
        strcat(studs,",");
        sprintf(input, "%d", students[index].hex3);
        strcat(studs,input);
        strcat(studs,",");
        sprintf(input, "%s", students[index].subject1);
        strcat(studs,input);
        strcat(studs,",");
        sprintf(input, "%s", students[index].subject2);
        strcat(studs,input);
        strcat(studs,",");
        sprintf(input, "%s", students[index].subject3);
        strcat(studs,input);
            if(index=0){
                fprintf(fptr, "%s", studs);
            }else{
                fprintf(fptr, "\n%s", studs);
            }
    }
    fclose(fptr);
}
//Student File to struct
struct  student FileToStruct(int index, int index2){
    char st[50];
    printf("Please enter the filename: \n");
    scanf(" %[^\n]s", st);
    FILE *fptr;
	fptr = fopen(st, "a+");
		while(!feof(fptr)) {
            fscanf(fptr,"%d,%[^,],%[^,],%[^,],%d,%d,%d,%[^,],%[^,],%[^\n]",&students[index].studentID,students[index].lastName,students[index].firstName,students[index].section,&students[index].hex1,&students[index].hex2,&students[index].hex3,students[index].subject1,students[index].subject2,students[index].subject3);
                    index++;
                    if(feof(fptr)){
                            break;
                    }
		}
	fclose(fptr);
	duplicateID(index);
	defaultsub(index);
    sorting(index);
}
//StudID duplicate checker
void duplicateID(int index1){
    int i,j, x=0;
    for(i=0;i<index1-1;i++){
            for(j=i+1;j<index1-1;j++){
                if(students[i].studentID==students[j].studentID){
                    deleteSub(j,index1);
                }
            }
    }
}
//Subject Struct to File
void structSubFile(){
    int index2=0;
    FILE *fptr, *ptr2;
    fptr = fopen("subjects.txt", "r+");
    ptr2 = fopen("temp.txt", "w+");
    fclose(fptr);
    fclose(ptr2);
    remove("subjects.txt");
    rename("temp.txt", "subjects.txt");
    fptr = fopen("subjects.txt", "a+");
    for(index2=0;index2<numOfSubject;index2){
        char studs[100]={};
        char input[100]={};
        sprintf(input, "%d", subjects[index2].subjectID);
        strcat(studs,input);
        sprintf(input, "%s", subjects[index2].subjectCode);
        strcat(studs,input);
        strcat(studs,",");
        sprintf(input, "%s", subjects[index2].subjectTitle);
        strcat(studs,input);
        strcat(studs,",");
            if(index2=0){
                fprintf(fptr, "%s", studs);
            }else{
                fprintf(fptr, "\n%s", studs);
            }
    }
    fclose(fptr);
}
//Subject File to struct
struct  subject FileSubToStruct(int index,int index2){
    char st[50];
    printf("Please enter the filename: \n");
    scanf(" %[^\n]s", st);
    FILE *fptr;
	fptr = fopen(st, "a+");
	numOfSubject=0;
		while(!feof(fptr)) {
            fscanf(fptr,"%d,%[^,],%[^\n]",&subjects[index2].subjectID,subjects[index2].subjectCode,subjects[index2].subjectTitle);
                    index2++;
                    if(feof(fptr)){
                            break;
                    }
		}
	fclose(fptr);
	duplicatesub(index2);
}
//Sub duplicate checker
void duplicatesub(int index2){
    int i,j, x=0;
    for(i=0;i<index2-1;i++){
            for(j=i+1;j<index2-1;j++){
                if(stringCompare(subjects[i].subjectCode,subjects[j].subjectCode)==0){
                    deleteSub(j,index2);
                }
            }
    }
}
//Student Create
struct student create(struct student addStud){
    int num1,num2,num3;
    printf("Input student's Last name: ");
    scanf(" %99[^\n]s",&addStud.lastName);
    printf("Input student's first name: ");
    scanf(" %99[^\n]s",&addStud.firstName);
    printf("Input student's section: ");
    scanf(" %99[^\n]s",&addStud.section);
    printf("Input student's hands-on exam 1 score: ");
    scanf("%d", &num1);
    if(num1>=0 || num1<=50){
        num1=addStud.hex1;
    }else if(num1<=0 || num1>=50){
        do{
            printf("Input student's hands-on exam 1 score: ");
            scanf(" %d", &num1);
            if(num1>=0 || num1<=50){
            num1=addStud.hex1;
            break;
            }
        } while(num1<=0 || num1>=50);
    }
    printf("Input student's hands-on exam 2 score: ");
    scanf(" %d",&addStud.hex2);
    printf("Input student's hands-on exam 3 score: ");
    scanf(" %d",&addStud.hex3);

    printf("Please Input Another Score Within the range of 0 to 50");

    strcpy(addStud.subject1,"CMSC11");

    randNum++;
    addStud.studentID=randNum;
    return addStud;
};
//Add sub checker
int addsubchecker(char addsub[],int index2){
    int i,x=0;
    for(i=0;i<index2;i++){
        if(stringCompare(addsub,subjects[i].subjectCode)!=0){
            x++;
            if(i==index2-1){
                break;
            }
        }
    }
    if(x==index2){
        return 1;//can add sub
    }else{
        return 0;//cant add sub
    }
}
//Create Sub
struct subject createSub(struct subject addSub,int index2){
            printf("You can register this subject!\n\n");
            printf("Please enter subject code again: ");
            scanf(" %99[^\n]s",&addSub.subjectCode);
            printf("Subject Title: ");
            scanf(" %99[^\n]s",&addSub.subjectTitle);
            SubNum++;
            addSub.subjectID=SubNum;
            return addSub;
            printf("\n\n\t\t\t\tS U B J E C T  I S  S U C C E S S F U L L Y  R E G I S T E R E D");
            Sleep(2000);
            system("cls");

};
//String copy
void stringCopy(char src[], char dest[]){
    int index;
        for(index=0; src[index]<1000; index++){
            if(src[index]!='0'){
            dest[index]=src[index];
            }else{
                break;
            }
        }
}
//Total scores
void total(struct student students[], int j){
    int i;
    for(i=0;i<j;i++){
        students[i].totalscore=students[i].hex1+students[i].hex2+students[i].hex3;
    }

}
//Letter Grade
void letterGrade(struct student st[]){
    for(int i=0;i<100;i++){
        if(st[i].totalscore>=135){
            sprintf(st[i].lettergrade , "HD");
        }else if(st[i].totalscore>=120&&st[i].totalscore<=134){
            sprintf(st[i].lettergrade , "D");
        }else if(st[i].totalscore>=100&&st[i].totalscore<=119){
            sprintf(st[i].lettergrade , "P");
        }else if(st[i].totalscore>=75&&st[i].totalscore<=99){
            sprintf(st[i].lettergrade , "C");
        }else if(st[i].totalscore<=74){
            sprintf(st[i].lettergrade , "F");
        }
    }
}
//Checks if sub is in the database
void subchecker(int index,int index2){
    int x=0,k,j;
    for(k=0;k<index;k++){
            for(j=0;j<index2;j++){
                if(stringCompare(students[k].subject2,subjects[j].subjectCode)!=0){
                        x++;
                }
            }
            if(x==index2){
                strcpy(students[k].subject2,"none");
                x=0;
            }else{
                x=0;
            }
    }
    for(k=0;k<index;k++){
            for(j=0;j<index2;j++){
                if(stringCompare(students[k].subject3,subjects[j].subjectCode)!=0){
                        x++;
                }
            }
            if(x==index2){
                strcpy(students[k].subject3,"none");
                x=0;
            }else{
                x=0;
            }
    }
}
//Display Students
void display(int i){
    defaultsub(i);
    printf("%c%-7d",186,students[i].studentID);
    printf(" %-15s",students[i].lastName);
    printf(" %-18s",students[i].firstName);
    printf(" %-13s",students[i].section);
    printf(" %-8d",students[i].hex1);
    printf(" %-8d",students[i].hex2);
    printf(" %-8d",students[i].hex3);
    printf(" %-6d",students[i].totalscore);
    printf(" %-15s",students[i].lettergrade);
    printf(" %-12s",students[i].subject1);
    toUpper(students[i].subject2);
    printf(" %-11s",students[i].subject2);
    toUpper(students[i].subject3);
    printf(" %-11s %c\n",students[i].subject3,186);

}
//Display Subjects
void displaySub(int j){
    printf("%c%-7d %-15s %-75s %c\n",186,subjects[j].subjectID,subjects[j].subjectCode,subjects[j].subjectTitle,186);
}
//To Upper
char toUpper(char ch){
    int alpha = (int)ch;
        if(ch >= 'a' && ch <= 'z'){
            alpha -= 32;
        }
return alpha;
}
//To Lower
char toLower(char ch){
    int alpha = (int)ch;
        if(ch >= 'A' && ch <= 'Z'){
            alpha += 32;
        }
return alpha;
}
//String Compare
int stringCompare(char s1[], char s2[]){
    int index = 0, x;
        while(toUpper(s1[index]) == toUpper(s2[index])){
            if(toUpper(s1[index]) == '\0' || toUpper(s2[index]) == '\0'){
                break;
            }
            index++;
        }
        if(toUpper(s1[index]) == '\0' && toUpper(s2[index]) == '\0'){
            x = 0;
            }else if(toUpper(s1[index]) < toUpper(s2[index])){
              x = -1;
                }else{
                    x = 1;
                }
    return x;
}
//Search for a Student
int searchStud(char iStud[], int j){
    int index;
    for(int i=0; i<j; i++){
        if(stringCompare(iStud,students[i].lastName)==0){
            students[i].totalscore=students[i].hex1+students[i].hex2+students[i].hex3;
            if(students[i].totalscore>=135){
            sprintf(students[i].lettergrade , "HD");
            }else if(students[i].totalscore>=120&&students[i].totalscore<=134){
            sprintf(students[i].lettergrade , "D");
            }else if(students[i].totalscore>=100&&students[i].totalscore<=119){
            sprintf(students[i].lettergrade , "P");
            }else if(students[i].totalscore>=75&&students[i].totalscore<=99){
            sprintf(students[i].lettergrade , "C");
            }else if(students[i].totalscore<=74){
            sprintf(students[i].lettergrade , "F");
            }
            display(i);
            index=1;
        }
    }
    return index;
}
//search stud for dropping
int searchstudfordrop(char iStud[], int j){
    int index=0, i;
    for(i=0; i<j; i++){
        if(stringCompare(iStud,students[i].lastName)==0){
                index=i;
                break;
        }
    }
    return index;
}
//Search for a subject
int searchSub(char iSub[], int j){
    int index;
    for(int i=0; i<j; i++){
        if(stringCompare(iSub,subjects[i].subjectCode)==0){
            displaySub(i);
            index=1;
        }
    }
    return index;
}
//Delete Student Record
void deleteStud(int i, int j){
        for(int k=i; k<j; k++){
        students[k]=students[k+1];
        }
        printf("\n\t\t\t\t\t\tS T U D E N T  I S  D E L E T E D  F R O M  R E C O R D\n");
        printf("\t\t\t\t\t\tPlease refer to the masterlist to see updated record.\n");
        Sleep(3000);
        system("cls");
}
//Delete Subject Record
void deleteSub(int i, int j){
    for(int k=i; k<j; k++){
        subjects[k]=subjects[k+1];
        }
}
//Stats for student records
void stats(struct student student[], int k){
    int max1=0, max2=0, max3=0, max4=0, min1, min2, min3, min4, hex1total=0,hex2total=0,hex3total=0, i,sumhextotal=0;
    float hex1avg=0, hex2avg=0, hex3avg=0, sumhextotalavg=0, var1=0, var2=0, var3=0, var4=0;
    min1=students[0].hex1;
    min2=students[0].hex2;
    min3=students[0].hex3;
    min4=students[0].totalscore;
    for(i=0;i<k;i++){
        if (max1 < students[i].hex1) {
            max1 = students[i].hex1;
        }if (max2 < students[i].hex2) {
            max2 = students[i].hex2;
        }if (max3 < students[i].hex3) {
            max3 = students[i].hex3;
        }if (max4 < students[i].totalscore){
            max4 = students[i].totalscore;
        }if (min1 > students[i].hex1) {
            min1 = students[i].hex1;
        }if (min2 > students[i].hex2) {
            min2 = students[i].hex2;
        }if (min3 > students[i].hex3) {
            min3 = students[i].hex3;
        }if (min4 > students[i].totalscore){
            min4 = students[i].totalscore;
        }
    }
    for(i=0;i<k;i++){
        hex1total+=students[i].hex1;
        hex2total+=students[i].hex2;
        hex3total+=students[i].hex3;
        sumhextotal+=students[i].totalscore;
    }
        hex1avg=(float)hex1total/(float)k;
        hex2avg=(float)hex2total/(float)k;
        hex3avg=(float)hex2total/(float)k;
        sumhextotalavg=(float)sumhextotal/(float)k;

        for(i=0;i<k;i++){
            var1=(students[i].hex1-hex1avg)*(students[i].hex1-hex1avg);
            var2=(students[i].hex2-hex2avg)*(students[i].hex2-hex2avg);
            var3=(students[i].hex3-hex3avg)*(students[i].hex3-hex3avg);
            var4=(students[i].totalscore-sumhextotalavg)*(students[i].totalscore-sumhextotalavg);
        }
        float sd1=0, sd2=0, sd3=0, sd4=0;

        sd1=squareRoot(var1/(float)k);
        sd2=squareRoot(var2/(float)k);
        sd3=squareRoot(var3/(float)k);
        sd4=squareRoot(var4/(float)k);

    printf("%c\t\t\t\t\t    %s        %-9d%-9d%-9d%-60d%c\n",186,"Lowest",min1,min2,min3,min4,186);
    printf("%c\t\t\t\t\t    %s       %-9d%-9d%-9d%-60d%c\n",186,"Highest",max1,max2,max3,max4,186);
    printf("%c\t\t\t\t\t    %s       %-9.3f%-9.3f%-9.3f%-60.3f%c\n",186,"Average",hex1avg,hex2avg,hex3avg,sumhextotalavg,186);
    printf("%c\t\t\t\t\t    %s            %-9.3lf%-9.3lf%-9.3lf%-60.3lf%c\n",186,"SD",sd1,sd2,sd3,sd4,186);

}
//square root
double squareRoot(double sqrt){
    double num, temp;
    num= sqrt/2;
    temp = 0;
    while(num!= temp){
        temp = num;
        num = (sqrt/temp+temp)/2;
    }
    return(num);
};
//dropping subject 2
void dropsub2(int i){
    strcpy(students[i].subject2,"none");
}
//Dropping subject 3
void dropsub3(int i){
    printf("\n");
    strcpy(students[i].subject3,"none");
}
//Sorting
void sorting(int index){
int d;
struct student s={};
		for(d=0;d<index;d++) {
			char x, z;
			int i = 0, y = 0;

		for(;i<index-1;i++) {
			if(stringCompare(students[i].lastName, students[i+1].lastName)==1) {

				s = students[i];
				students[i] = students[i+1];
				students[i+1] = s;
			}
		}
		}
		structFile();
}
//Defult sub
void defaultsub(int j){
    int i;
    char arr[]="CMSC11";
    for(i=0;i<j;i++){
        if(stringCompare(students[i].subject1,arr)!=0){
            strcpy(students[i].subject1,"CMSC11");
        }
    }
return 0;
}

