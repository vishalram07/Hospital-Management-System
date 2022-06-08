#include<stdio.h>
#include <windows.h>
#include<string.h>
struct hospital{

        char name[20],address[100][100];
		int age,roomno,pid;
		char disease[30];
}p[100];

int n,i,j=0,a=0,sum=0,g,flag,num,dd,mm,yy,idd,imm,iyy;
void read();
void add();
void display();
void search();
void modify();
void del();
void gotoxy(int x, int y);

int main()
{
     int m,n;
     read();
     system("COLOR 03");
     int c,i,q;
     gotoxy(76,7);
     printf("*********************************************************************");
     gotoxy(97,10);
     printf(" WELCOME TO PSG HOSPITAL");
     gotoxy(76,13);
     printf("*********************************************************************");
        gotoxy(95,15);
        printf("1.Add new patient ");
        gotoxy(95,17);
        printf("2.Display ");
        gotoxy(95,19);
        printf("3.Search a patient ");
        gotoxy(95,21);
        printf("4.Modify ");


        gotoxy(95,23);
        printf("5.Delete a patient");
        gotoxy(95,25);
        printf("6.Exit ");
        gotoxy(95,27);
        printf("Enter the choice:");
        scanf("%d",&c);
        fflush(stdin);
        if(c==1)
        {
            system("cls");
            add();
        }
        else if(c==2)
        {
            system("cls");
            display();
        }
        else if(c==3)
        {
            system("cls");
            search();
        }
        else if(c==4)
        {
            system("cls");
            modify();
        }
        else if(c==5)
        {
            system("cls");
            del();
        }
        else if(c==6)
        {
            write();
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    while(c!=6)
    {

        int ch;
        printf("\n1.Add new patient");
        printf("\n2.Display");
        printf("\n3.Search a patient");
        printf("\n4.Modify");
        printf("\n5.Delete a patient");
        printf("\n6.Exit");
        printf("\nEnter the choice:");
        scanf("%d",&c);
        fflush(stdin);
        if(c==1)
        {
            system("cls");
            add();
        }
        else if(c==2)
        {
            system("cls");
            display();
        }
        else if(c==3)
        {
            system("cls");
            search();
        }
        else if(c==4)
        {
            system("cls");
            modify();
        }
        else if(c==5)
        {
            system("cls");
            del();
        }
        else if(c==6)
        {
            write();
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void add()
{
    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",num);
    printf("How many entry do you want to add=\n");
    scanf("%d",&n);
    sum=n+num;
    for(i=num,j=0; i<sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter patient's Name = ");
        gets(p[i].name);
        fflush(stdin);
        printf("Enter the Address: ");
        scanf("%s",p[i].address);
        fflush(stdin);
        printf("Enter date of admission(DD/MM/YYYY format): ");
        scanf("%d/%d/%d",&dd,&mm,&yy);
        printf("Date of discharge: ");
        scanf("%d/%d/%d",&idd,&imm,&iyy);
        fflush(stdin);
        printf("Enter disease = ");
        gets(p[i].disease);
        fflush(stdin);
        printf("Enter the age = ");
        scanf("%d",&p[i].age);
        fflush(stdin);
        printf("Enter Room No = ");
        scanf("%d",&p[i].roomno);
        fflush(stdin);
        printf("\n");
        j++;
        a++;
        num++;

    }

}

void display()
{
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(p[i].name);
        printf("Disease = ");
        puts(p[i].disease);
        printf("Room no = %d\nAge=%d",p[i].roomno,p[i].age);
        printf("\n\n");

    }
}
void modify()
{
    int q,o;
    fflush(stdin);
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.Disease\n3.Age\n4.Room No\n");
    printf("Option=");
    scanf("%d",&q);
    if(q<=5)
    {
        printf("Enter the serial no of that patient= (0 - %d)=",num-1);
        scanf("%d",&o);
        if(o<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the new name=");
                gets(p[o].name);

            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new Disease=");
                gets(p[o].disease);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the new Age=");
                scanf("%d",&p[o].age);
            }

            else if(q==4)
            {
                fflush(stdin);
                printf("Enter the new Room no=");
                scanf("%d",&p[o].roomno);
            }

        }
        else
        {
            printf("\n\nInvalid Serial \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}
void search()
{
    int s,h,f;
    char u[100];
    printf("By what do you want to search ?\n");
    printf("1.Serial no.\n2.Name\n3.Disease\n4.Room no\n5.Age\nOption = ");
    scanf("%d",&h);
    if(h==1)
    {
        printf("Enter Serial number of the patient=");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("Serial Number=%d\n",s);
            printf("Name = ");
            puts(p[s].name);
            printf("Disease = ");
            puts(p[s].disease);
            printf("Room no = %d\nAge = %d",p[s].roomno,p[s].age);
            printf("\n\n");
        }
        else
            printf("\n\nNot Found\n\n");
    }
    else if(h==2)
    {
        int f=1;
        fflush(stdin);
        printf("Enter your name=");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,p[g].name)==0)
            {
            printf("\n");
            printf("Serial Number=%d\n",g);
            printf("Name = ");
            puts(p[g].name);
            printf("Disease = ");
            puts(p[g].disease);
            printf("Room no = %d\nAge = %d",p[g].roomno,p[g].age);
            printf("\n\n");

            }
        }
        if(f==1)
            printf("\nNot Found\n");



    }
    else if(h==3)
    {
        int f=1;
        fflush(stdin);
        printf("Enter Disease = ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,p[g].disease)==0)
            {
            printf("\n");
            printf("Serial Number=%d\n",g);
            printf("Name = ");
            puts(p[g].name);
            printf("Disease = ");
            puts(p[g].disease);
            printf("Room no = %d\nAge = %d",p[g].roomno,p[g].age);
            printf("\n\n");
            }


        }
        if(f==1)
            printf("\nNot Found\n");


    }
    else if(h==4)
    {
        int f=1;
        printf("Enter Room number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==p[g].roomno)
            {

            printf("\n");
            printf("Serial Number=%d\n",g);
            printf("Name = ");
            puts(p[g].name);
            printf("Disease = ");
            puts(p[g].disease);
            printf("Room no = %d\nAge = %d",p[g].roomno,p[g].age);
            printf("\n\n");

            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }

    else if(h==5)
    {
        int f=1;
        printf("Enter Age = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==p[g].age)
            {
            printf("\n");
            printf("Serial Number=%d\n",g);
            printf("Name = ");
            puts(p[g].name);
            printf("Disease = ");
            puts(p[g].disease);
            printf("Room no = %d\nAge = %d",p[g].roomno,p[g].age);
            printf("\n\n");

            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else
        printf("\n\nInvalid input\n\n");



}
void del()
{
    int f,h;
    printf("Enter the serial number of the patient that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
        printf("What do you want ?\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove Disease\n4.Remove age\n5.Remove Room No\nOption = ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(p[f].name,p[f+1].name);
                strcpy(p[f].disease,p[f+1].disease);
                p[f].age=p[f+1].age;
                p[f].roomno=p[f+1].roomno;
                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(p[f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(p[f].disease,"Cleared");
        }
        else if(h==4)
        {
            p[f].age=0;
        }
        else if(h==5)
        {
            p[f].roomno=0;
        }

    }
    else
        printf("\n\nInvalid Serial number\n");


}
void read()
{
    FILE *fp = fopen("patient.txt","r");
    if(fp == NULL)
    {
        fp = fopen("patient.txt","w");
        fclose(fp);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
        return 0;
    }

    num = fread(p, sizeof(struct hospital),100, fp);
    fclose(fp);
}
void write()
{
    FILE *fp = fopen("patient.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(p, sizeof(struct hospital),num, fp);

    fclose(fp);
}
