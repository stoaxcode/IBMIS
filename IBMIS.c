#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_PUROK_NUMBER 7

void MainMenu(void);
void NewData(void);
void SearchDataRecord(void);
void SearchMember(void);
void SearchZone(void);
void ViewAllData(void);


int memberCount = 0;

struct IBMIS {

    char fullName[50];
    int purok;
    char phoneNumber[11];
    int age;
    char gender[2];
    char birthDay[30];
    int memberNum;
}memberData[100];

int main()
{
    MainMenu();

    return 0;
}
void MainMenu(void)
{
    int choice;

    system("cls");
    printf("<*><*><*><*><*><*><*><*><*><*><*>IBMIS<*><*><*><*><*><*><*><*><*><*><*>\n");
    printf("><*><*><*>Integrated_Barangay_Management_&_Information_System<*><*><*><\n\n");
    printf("                            Welcome! Admin\n");
    printf("\n                        1.     New Data ");
    printf("\n                        2.  SearchDataRecord ");
    printf("\n                        3.   View All Data");
    printf("\n\n                        4.       Exit\n\n");
    printf("\n\nPlease Input the Number what you have choosen: ");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        NewData();
        break;
    case 2:
        SearchDataRecord();
        break;
    case 3:
        ViewAllData();
        break;
    case 4:
        exit(1);
        break;

    default:
        printf("\nInvalid choice please try again.");
        printf("\nPress any key to continue......");
        getch();
        MainMenu();
        break;
    }
}

void NewData(){

    char memberName[50];
    int mem = 0;
    char yesNo;
    system("cls");
    printf("<*><*><*><*><*><*><*><*><*><*><*>NEW DATA<*><*><*><*><*><*><*><*><*><*><*>\n\n");
    printf("Note: Please replace blankspace with underscore\(_\) to avoid error.\n\n");

    if(memberCount < 100)
        {
        printf("Enter Full Name: ");
        scanf("%s", &memberName);

        if(memberCount != 0)
            {
            for(int count = 0; count < memberCount; count++)
            {
                    if(strcmp(memberData[count].fullName, memberName) == 0)
                    {
                    mem = 1;
                    }
            }
        }
    if(mem == 1){
        printf("\n Name is already exist in our Database!");
        printf("\n Press any key to exit!");
        getch();
        MainMenu();
        }
        else{
        strcpy(memberData[memberCount].fullName, memberName);
        printf("Purok: ");
        scanf("%d", &memberData[memberCount].purok);
        printf("Member Number: ");
        scanf("%d", &memberData[memberCount].memberNum);
        printf("PhoneNumber: ");
        scanf("%s", &memberData[memberCount].phoneNumber);
        printf("Age: ");
        scanf("%d", &memberData[memberCount].age);
        printf("Gender (M/F): ");
        scanf("%s",&memberData[memberCount].gender);
        printf("BirthDay: ");
        scanf("%s",&memberData[memberCount].birthDay);

        top:
        system("cls");
        printf("\nFull Name: %s", memberData[memberCount].fullName);
        printf("\nPurok: %d",memberData[memberCount].purok);
        printf("\nMember Number: %d",memberData[memberCount].memberNum);
        printf("\nPhone Number: %s",memberData[memberCount].phoneNumber);
        printf("\nAge: %d",memberData[memberCount].age);
        printf("\nGender (M/F): %s",memberData[memberCount].gender);
        printf("\nBirthDay: %s",memberData[memberCount].birthDay);

        printf("\n\nRegister Member! [y/n]: ");
        yesNo = getch();
        if(yesNo == 'y' || yesNo == 'Y'){
        memberCount++;
        printf("\nMember Registered successfully!!");
        printf("\nPress any key to continue....");
        getch();
        MainMenu();
        }
        else if(yesNo == 'n' || yesNo == 'N'){
            memberCount++;
            printf("\nMember Registration Cancelled!!");
            printf("\nPress any key to continue....");
            getch();
            MainMenu();
        }
        else{
            printf("\nInvalid selection. \nPress any key to try again....");
            getch();
            goto top;
            }
        }
    }
    else
    {
        printf("\nThe Database is full!");
        printf("\nPress any key to Exit.");
        getch();
    }
}
void SearchDataRecord(void)
{
    int choice;

    system("cls");
    printf("<*><*><*><*><*><*><*><*><*><*><*>IBMIS<*><*><*><*><*><*><*><*><*><*><*>\n");
    printf("\n\n        Integrated_Barangay_Management_&_Information_System        \n\n");
    printf("                            Welcome! Admin\n");
    printf("\n                        1.     Search Member ");
    printf("\n                        2.     Search Purok ");
    printf("\n\n                        3.       Exit\n\n");
    printf("\n\nPlease Input the Number what you have choosen: ");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        SearchMember();
        break;
    case 2:
        SearchZone();
        break;
    case 3:
        MainMenu();
        break;

    default:
        printf("\nInvalid choice please try again.");
        printf("\nPress any key to continue......");
        getch();
        MainMenu();
        break;
    }
}
void SearchMember(void)
{
    char memberName[50];
    int mem = 0;
    int count;
    system("cls");
    printf("<*><*><*><*><*><*><*><*><*><*><*>SEARCH<*><*><*><*><*><*><*><*><*><*><*>\n\n");

    if(memberCount != 0)
    {
        printf("Enter Full Name: ");
        scanf("%s", &memberName);

        for(count = 0; count < memberCount; count++)
        {
            if(strcmp(memberData[count].fullName, memberName) == 0)
            {
                mem = 1;
                break;
            }
        }
        if(mem == 1)
        {
            system("cls");
            printf("\n                     Member Name       ");
            printf("\n\nFull Name: %s", memberData[count].fullName);
            printf("\nPurok: %d",memberData[count].purok);
            printf("\nMember Number: %d",memberData[count].memberNum);
            printf("\nPhone Number: %s",memberData[count].phoneNumber);
            printf("\nAge: %d",memberData[count].age);
            printf("\nGender (M/F): %s",memberData[count].gender);
            printf("\nBirthDay: %s",memberData[count].birthDay);

            printf("\n\nPress any key to continue....");
            getch();
            MainMenu();
        }
        else
        {
            printf("\nMember do not exist!");
            printf("\nPress any key to continue....");
            getch();
            MainMenu();
        }
    }
    else
    {
        printf("\nDatabase is empty!");
        printf("\nPress any key to continue....");
            getch();
            MainMenu();
    }
}
void SearchZone(void)
{
    int searchPurok;
    int found = 0;

    system("cls");
    printf("<*><*><*><*><*><*><*><*><*><*><*>SEARCH<*><*><*><*><*><*><*><*><*><*><*>\n\n");

    if (memberCount != 0)
    {
        printf("Enter Purok Number: ");
        scanf("%d", &searchPurok);

        for (int i = 0; i < memberCount; i++)
        {
            if (memberData[i].purok == searchPurok)
            {
                found = 1;
                 printf("\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                printf("\nFull Name: %s", memberData[i].fullName);
                printf("\nPurok: %d", memberData[i].purok);
                printf("\nMember Number: %d", memberData[i].memberNum);
                printf("\nPhone Number: %s", memberData[i].phoneNumber);
                printf("\nAge: %d", memberData[i].age);
                printf("\nGender (M/F): %s", memberData[i].gender);
                printf("\nBirthDay: %s", memberData[i].birthDay);
            }
        }
        if (!found)
        {
            printf("\nMember with Purok Number %d does not exist!", searchPurok);
        }
    }
    else
    {
        printf("\nDatabase is empty!");
    }

    printf("\nPress any key to continue....");
    getch();
    MainMenu();
}


void ViewAllData(void)
{
    system("cls");
    printf("<*><*><*><*><*><*><*><*><*><*><*>ALL DATA<*><*><*><*><*><*><*><*><*><*><*>\n\n");


    for (int pure = 1; pure <= MAX_PUROK_NUMBER; pure++)
    {
        printf("\n                             PUROK %d", pure);

        int found = 0;


        for (int count = 0; count < memberCount; count++)
        {
            if (memberData[count].purok == pure)
            {
                found = 1;
                printf("\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                printf("\nFull Name: %s", memberData[count].fullName);
                printf("\nPurok: %d", memberData[count].purok);
                printf("\nMember Number: %d", memberData[count].memberNum);
                printf("\nPhone Number: %s", memberData[count].phoneNumber);
                printf("\nAge: %d", memberData[count].age);
                printf("\nGender (M/F): %s", memberData[count].gender);
                printf("\nBirthDay: %s", memberData[count].birthDay);
            }
        }

        if (!found)
        {
            printf("\nNo Data Found ", pure);
        }
    }

    printf("\n\n                                END OF LIST");
    printf("\n Press any key to continue.....");
    getch();
    MainMenu();
}
