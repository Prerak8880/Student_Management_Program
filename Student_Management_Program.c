/*

SRM STUDENT MANAGEMENT PROGRAM
Made By            : "PRERAK"
Reg. No.           : "RA2111043010087"
Branch             : "ECE-CM"
Section            : "G"

*/


#include <stdio.h>
#include <stdlib.h>

// FUNCTION DECLARATIONS

void insert_record();
void delete_record();
void update_record();
void search_record();
void display_record();
void menu();

struct student
{
    char name[20];
    int roll;
    char sec[2];
    int marks;
    float grade;

};
    struct student s;






void main()
{

    int i,j,a,main_exit;
    system("color 1C");
    char pass[10],password[10]="prerak";
    printf("\n\n\t\tEnter Password To Login:");
    fflush(stdin);
    gets(pass);
     if (strcmpi(pass,password)==0)
        {
            printf("\n\n\t\tPassword Matched!\n\n\t\tWELCOME TO SRM...\n\n\n");

        }
         else
        {   printf("\n\n\t\tWrong password!!\a\a\a");
            ask:
            printf("\n\n\t\tEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {
                        main();
                    }

            else if (main_exit==0)
                    {
                        exit(1);
                    }
             else
                    {
                    printf("\nOops! Wrong Choice Entered\n");
                    goto ask;
                    }
        }

    printf("\tLoading Please wait");
    for(i=0; i<6; i++){
        for(j=0; j<100000000; j++){
            a=j;
        }
        printf(".");
    }
    menu();
}


void menu()
{
    int ch;
    system("cls");
    while(ch!=6)
    {
    printf("\n\n\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
        printf("\tSRM INSTITUTE OF APPLIED SCIENCE AND TECHNOLOGY,KATTAKULANTHUR\n");
        printf("\t\tELECTRONICS AND COMMUNICATION ENGINEERING \n");
        printf("\t\t\tSTUDENT MANAGEMENT RECORD\n");
    printf("\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n\n\n");
    system("color 2");
        printf("\t\tAvailable Functionalities Are Shown Below : \n\n\n");
        printf("\t\t1: Insert Student Record\n");
        printf("\t\t2: Display Student Record\n");
        printf("\t\t3: Search Student Record\n");
        printf("\t\t4: Delete Student Record\n");
        printf("\t\t5: Update Student Record\n");
        printf("\t\t6: Exit\n\n\n");

        printf("\t\tPlease Enter Your Choice : ");
        scanf("%d",&ch);
            switch(ch)
            {
            case 1: insert_record();
                        break;
            case 2: display_record();
                        break;
            case 3: search_record();
                        break;
            case 4: delete_record();
                        break;
            case 5: update_record();
                        break;
            case 6: exit(1);

                default:
                printf("Invalid Choice Entered!!\n");
            }

            printf("\nPress Any Key To Continue");
            system("cls");
    }


}





void insert_record()
{

    FILE *fp;
    system("cls");
    fp=fopen("student.txt","ab+");
    printf("Previously Stored Data\n");
    display_record();
    printf("Enter New Student Data\n");
    printf("Enter Roll No.: \n");
    scanf("%d",&s.roll);
    fflush(stdin);
    printf("Enter Name:\n");
    gets(s.name);
    fflush(stdin);
    printf("Enter Section:\n");
    gets(s.sec);
    printf("Enter Marks:\n");
    scanf("%d",&s.marks);
    printf("Enter Grade:\n");
    scanf("%f",&s.grade);


        fwrite(&s,sizeof(s),1,fp);

    {
        printf("Record Insertion Completed Successfully\n");
    }

    fclose(fp);
    system("cls");
    printf("Updated Record Is Shown Below:\n");
    display_record();
    printf("Press Any Key To Continue..\n");
    menu();
    getch();

}



void display_record()
{
    system("cls");
    FILE *fp;
    fp=fopen("student.txt","rb");
        printf("\n\n\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
        printf("\t\tStudent Entered Details Are As Follows");
        printf("\n\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
    printf("\n\n\n\nRoll No.\tName\t     Section\tMarks\t Grade\n\n");

        while(fread(&s,sizeof(s),1,fp)!=NULL)
              {
                  fflush(stdin);
printf("\n%d\t\t%s\t\t%s   \t  %d\t  %.2f\n\n\n",s.roll,s.name,s.sec,s.marks,s.grade);
              }

    fclose(fp);
    printf("Press Any Key To Continue..\n\n\n");
    getch();

}




void delete_record()
{
    int r1, f=0;

    system("cls");
    system("color 12");
    printf("\n\n\n\t\tEnter Roll No.:");
    scanf("%d",&r1);
   // gotoxy(10,10);
   FILE *fp,*ft;

        fp=fopen("student.txt","rb+");
        ft=fopen("student1.txt","wb+");


                while(fread(&s,sizeof(s),1,fp)==1)
                {
                    if(r1==s.roll)
                        {
                            f = 1;

                        }
                    else
                    {
                        fwrite(&s,sizeof(s),1,ft);
                    }
                }

                    fclose(fp);
                    fclose(ft);
                    remove("student.txt");
                    rename("student1.txt","student.txt");

                     if(f==0)
                        {
                                printf("\t\tInvalid Entry!!\n\n");
                                printf("\t\tPlease Check The Details You Have Entered\n\n");
                                printf("\t\tPress Any Key To Go To Menu!!\n");

                        }
                    else
                    {
                         printf("\t\t\n\nRecord Deleted Successfully!!\n\n");
                    }

                    getche();
                    display_record();

        }



void update_record()
{
    system("cls");
    int roll2,flag=0;
    FILE *fp;
    fp=fopen("student.txt","rb+");

        if(fp==NULL)
        {
            printf("\t\tOops!! File Can,t Be Opened.\n");
            return;
        }

    printf("\tEnter Roll No. of The Student: ");
    scanf("%d",&roll2);
    printf("\n\n\t\tPreviously Stored Data Of The Given Roll No. Is Shown Below:\n\n\n");
    while(fread(&s,sizeof(s),1,fp)>0 && flag==0)
    {
        if(roll2==s.roll)
        {
            flag=1;

            if(flag==1)
            {
            printf("\tRoll\t Name\tSection\tMarks\tGrade\n\n");
            printf("\t%d\t%s\t   %s\t %d\t %.2f\n\n\n",s.roll,s.name,s.sec,s.marks,s.grade);

            printf("\t\tNow Enter The New Record Of The Student\n\n");

            printf("Updated Student Roll No. :");
            scanf("%d",&s.roll);
            fflush(stdin);
            printf("\nUpdated Student Name :");
            gets(s.name);
            printf("\nUpdated Student Section :");
            gets(s.sec);
            printf("\nUpdated Student Marks :");
            scanf("%d",&s.marks);
            printf("\nUpdated Student Grade :");
            scanf("%f",&s.grade);

            fseek(fp,-sizeof(s),1);

            fwrite(&s,sizeof(s),1,fp);
            }

       else
        printf("Error!!");

        }



}

    printf("\n\n\t\t\tRecord Updated Successfully!!\n\n");
            printf("Press Any Key To Continue..");
            getch();

    fclose(fp);

}
void search_record()
{
    system("cls");
    int roll2,flag=0;
    FILE *fp;
    fp=fopen("student.txt","rb");
        if(fp==NULL)
        {
            printf("File Can't Be Opened Due To Some Reasons\n");
        }
        printf("\n\n\n\t\tEnter Roll No. of The Student You Want To Search:");
        scanf("%d",&roll2);

        while(fread(&s,sizeof(s),1,fp)>0&&flag==0)
        {
            if(s.roll==roll2)
            {
                flag=1;
                printf("\n\n\tSearch Successful And Student Record Is As Follows:\n\n\n");
                printf("\tRoll\t Name\tSection\tMarks\tGrade\n\n");
                printf("\t%d\t%s\t   %s\t %d\t %.2f\n\n\n",s.roll,s.name,s.sec,s.marks,s.grade);
            }
        }
        if(flag==0)
        {
            printf("No Such Record Found!!\n");
            printf("Please Check The Details You Have Entered\n");
        }
        printf("\n\n\n\t\tPress Any Key To Go To Main Menu..\n");
        fclose(fp);
        getch();
}




