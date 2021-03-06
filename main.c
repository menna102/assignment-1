#include <stdio.h>
# include <string.h>
# include <stdlib.h>
#include<time.h>




//Linked List Functions
struct Student
{
    int id, score, day , month , year;
    char name[50];
    struct Student *next;

}*head, *tail;

void insert_begin()
{
    char name[50];
    int id, score, day , month , year;
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
                printf("\nEnter student ID: ");
                scanf("%d", &id);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter score: ");
                scanf("%d", &score);
                printf("Enter date of birth in the following order: day month year: ");
                scanf("%d", &day);
                scanf("%d", &month);
                scanf("%d", &year);
    student->id = id;
    strcpy(student->name, name);
    student->score = score;
    student->day = day;
    student->month = month;
    student->year = year;
    student->next = NULL;

    if(head==NULL){
        // linked list is empty
        head = student;
        tail = student;
    }
    else{
        // linked list is not empty
        student->next = head;
        head = student;
    }

}

void insert_end ()
{
    char name[50];
    int id, score, day , month , year;
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
                printf("\nEnter student ID: ");
                scanf("%d", &id);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter score: ");
                scanf("%d", &score);
                printf("Enter date of birth in the following order: day month year: ");
                scanf("%d", &day);
                scanf("%d", &month);
                scanf("%d", &year);
    student->id = id;
    strcpy(student->name, name);
    student->score = score;
    student->day = day;
    student->month = month;
    student->year = year;
    student->next = NULL;

    if(head==NULL){
        // linked list is empty
        head = student;
        tail = student;
    }
    else{
        // linked list is not empty
       tail->next = student;
       tail = student;
    }

}

void insert_middle ()
{
    char name[50];
    int id, score, day , month , year, length = 0, middle;
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
                printf("\nEnter student ID: ");
                scanf("%d", &id);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter score: ");
                scanf("%d", &score);
                printf("Enter date of birth in the following order: day month year: ");
                scanf("%d", &day);
                scanf("%d", &month);
                scanf("%d", &year);
    student->id = id;
    strcpy(student->name, name);
    student->score = score;
    student->day = day;
    student->month = month;
    student->year = year;
    student->next = NULL;

    if(head==NULL){
       // linked list is empty
        head = student;
        tail = student;
    }
    else
    {
        // linked list is not empty
        struct Student *temp = head;
        struct Student *prev = head;
        // find the length of linked list
        while(temp!=NULL){
        temp = temp->next;
        length ++;
        }
        // determine the middle node
        if (length%2==0)
            middle = length/2;
        else
            middle = (length+1)/2;
        // insert the new node
        for(int i=1; i<middle; i++)
        prev = prev->next;
        student->next = prev->next;
        prev->next = student;
        }
}

void display()
{
    struct Student * temp = head;
    while(temp!=NULL)
        {
        printf("\nStudent ID: %d\n", temp->id);
        printf("Name: %s\n", temp->name);
        printf("Score: %d\n", temp->score);
        printf("Date of birth:");
        printf(" %d", temp->day);
        printf(" / %d", temp->month);
        printf(" / %d\n", temp->year);
        temp = temp->next;
        }
}

//***********************************************************************************
//***********************************************************************************

//?Array Functions
int size;
int j; //counter for insertion at begin
int x=0;

struct student
       {
          char name [50];
          int day,month,year;
          int id;
          int grade ;
       } *tag;

void insertatBegin()

{
    tag=realloc(tag,(x+1)*sizeof(*tag));
    //check if it is the first insertion
     if (j==NULL)
     {

         printf("Enter the student name\n");
          fflush(stdin);
          scanf("%s",tag[x].name);
          printf("Enter the student birth DD\MM\YY\n");
          scanf("%d  %d  %d",&tag[x].day ,&tag[x].month,&tag[x].year);
          printf("Enter the student id\n");
          scanf("%d",&tag[x].id);
          printf("Enter the grade\n");
          fflush(stdin);
          scanf("%d",&tag[x].grade);
         j++;
     }
     else
        { //shift every element step to right
            for (int i=j;i>=0;i--)
        {
            tag[i+1].day=tag[i].day;

           tag[i+1].grade=tag[i].grade;
           tag[i+1].id=tag[i].id;
           tag[i+1].month=tag[i].month;
           strcpy(tag[i+1].name ,tag[i].name);
           tag[i+1].year=tag[i].year ;   }
           printf("Enter the student name\n");
          fflush(stdin);
          scanf("%s",tag[0].name);
          printf("Enter the student birth DD\MM\YY\n");
          scanf("%d  %d  %d",&tag[0].day ,&tag[0].month,&tag[0].year);
          printf("Enter the student id\n");
          scanf("%d",&tag[0].id);
          printf("Enter the grade\n");
          fflush(stdin);
          scanf("%d",&tag[0].grade);
         j++;

        }
        x++;
        }


void insertatEnd()
{
   tag=realloc(tag,(x+1)*sizeof(*tag));

          printf("Enter the student name\n");
          scanf("%s",tag[x].name);
          printf("Enter the student birth DD\MM\YY\n");
          scanf("%d  %d  %d",&tag[x].day ,&tag[x].month,&tag[x].year);
          printf("Enter the student id\n");
          scanf("%d",&tag[x].id);
          printf("Enter the grade\n");
          scanf("%d",&tag[x].grade);
          x++;

}
void insertatMiddle()
{
     tag=realloc(tag,(x+1)*sizeof(*tag));
     int p=((x%2)==0)?(x/2):((x+1)/2);
     printf(" the index  %d \n" ,p);
for (int i=p;i>=0;i--)
        {
            tag[i+1].day=tag[i].day;

           tag[i+1].grade=tag[i].grade;
           tag[i+1].id=tag[i].id;
           tag[i+1].month=tag[i].month;
           strcpy(tag[i+1].name ,tag[i].name);
           tag[i+1].year=tag[i].year ;   }


          printf("Enter the student name\n");
          scanf("%s",tag[p].name);
          printf("Enter the student birth DD\MM\YY\n");
          scanf("%d  %d  %d",&tag[p].day ,&tag[p].month,&tag[p].year);
          printf("Enter the student id\n");
          scanf("%d",&tag[p].id);
          printf("Enter the grade\n");
          scanf("%d",&tag[p].grade);
          x++;

}
void Display( )
{
    for (int n = 0; n < x; n++ ) {
          printf ( "%s is %d %d %d , id is %d, grade is %d\n",
                tag [ n ].name, tag [ n ].day,tag [ n ].month,tag [ n ].year, tag [ n ].id, tag [ n ].grade);
       }
}

//***********************************************************************************
//***********************************************************************************

    int main ()
    {
    int program;
    int y;
    //choose linked list or array
    printf("1-Linked list or 2-Array ? \n");
    fflush(stdin);
    scanf("%d",&program);
    // determine the number of students
    printf("Enter the number of students: \n");
    fflush(stdin);
    scanf("%d",&size);

    struct student *tag=(struct student*) malloc(sizeof(*tag));
    switch(program)
    {
        case 1:
        for(int i=0; i<size; i++)
            {
            printf("\nEnter the place to enter the student in the linked list  at: \n1- begin  2- middle 3- end   \n ");
          scanf("%d",&y);
          switch(y)
          {
              case 1:

                insert_begin();
                break;

            case 2:

                insert_end();
                break;

            case 3:

                insert_middle();
                break;
            }
            printf("\n-----------------------------------------------------");
            }
 printf("\nThe List of students: ");
     display();
        break;

        case 2:
        for(int i=0; i<size; i++)
            {
               printf("\nEnter the place to enter the student in the array at:\n  1- begin  2- middle 3- end\n ");
          scanf("%d",&y);
          switch(y)
          {
             case 1:

            insertatBegin(tag,x);
            break;
          case 2:

            insertatMiddle(tag,x);
            break;
          case 3:

           insertatEnd(tag,x);
            break;

        }
           printf("\n-----------------------------------------------------");
        }
        printf("\nThe Array of students: \n");
        Display ();
        break;
  }
    return 0;
    }
