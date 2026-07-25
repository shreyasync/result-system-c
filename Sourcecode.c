#include <stdio.h>

#define MAX 100

struct Student
{
    int roll;
    char name[30];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

struct Student s[MAX], temp[MAX];

void calculate(int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        s[i].total = 0;

        for(j = 0; j < 5; j++)
        {
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 5.0;

        if(s[i].percentage >= 90)
            s[i].grade = 'A';
        else if(s[i].percentage >= 75)
            s[i].grade = 'B';
        else if(s[i].percentage >= 60)
            s[i].grade = 'C';
        else if(s[i].percentage >= 40)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }
}

void merge(int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;

    while(i <= mid && j <= high)
    {
        if(s[i].roll < s[j].roll)
            temp[k++] = s[i++];
        else
            temp[k++] = s[j++];
    }

    while(i <= mid)
        temp[k++] = s[i++];

    while(j <= high)
        temp[k++] = s[j++];

    for(i = low; i <= high; i++)
        s[i] = temp[i];
}

void mergeSort(int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;

        mergeSort(low, mid);
        mergeSort(mid + 1, high);

        merge(low, mid, high);
    }
}

int binarySearch(int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(s[mid].roll == key)
            return mid;

        else if(key < s[mid].roll)
            high = mid - 1;

        else
            low = mid + 1;
    }

    return -1;
}

void display(int n)
{
    int i;

    printf("\nRESULT SHEET\n\n");
    printf("Roll\tName\tTotal\tPercentage\tGrade\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%.2f\t\t%c\n",
               s[i].roll,
               s[i].name,
               s[i].total,
               s[i].percentage,
               s[i].grade);
    }
}

void leaderboard(int n)
{
    struct Student top[MAX];
    struct Student t;
    int i, j;

    for(i = 0; i < n; i++)
        top[i] = s[i];

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(top[j].total < top[j + 1].total)
            {
                t = top[j];
                top[j] = top[j + 1];
                top[j + 1] = t;
            }
        }
    }

    printf("\nLEADERBOARD\n\n");

    if(n >= 1)
    {
        printf("1st Place\n");
        printf("Name : %s\n", top[0].name);
        printf("Marks : %d\n", top[0].total);
        printf("Percentage : %.2f\n", top[0].percentage);
        printf("Grade : %c\n\n", top[0].grade);
    }

    if(n >= 2)
    {
        printf("2nd Place\n");
        printf("Name : %s\n", top[1].name);
        printf("Marks : %d\n", top[1].total);
        printf("Percentage : %.2f\n", top[1].percentage);
        printf("Grade : %c\n\n", top[1].grade);
    }

    if(n >= 3)
    {
        printf("3rd Place\n");
        printf("Name : %s\n", top[2].name);
        printf("Marks : %d\n", top[2].total);
        printf("Percentage : %.2f\n", top[2].percentage);
        printf("Grade : %c\n\n", top[2].grade);
    }
}

int main()
{
    int n;
    int i, j;
    int choice;
    int roll;
    int index;

    printf("===== EXAM RESULT PROCESSING SYSTEM =====\n\n");

    printf("Enter Number of Students : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Details of Student %d\n", i + 1);

        printf("Roll Number : ");
        scanf("%d", &s[i].roll);

        printf("Name : ");
        scanf("%s", s[i].name);

        printf("Enter Marks of 5 Subjects\n");

        for(j = 0; j < 5; j++)
        {
            printf("Subject %d : ", j + 1);
            scanf("%d", &s[i].marks[j]);
        }
    }

    calculate(n);

    mergeSort(0, n - 1);

    while(1)
    {
        printf("\n");
        printf("===== MENU =====\n");
        printf("1. Display Result Sheet\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Leaderboard\n");
        printf("4. Exit\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                display(n);
                break;

            case 2:

                printf("Enter Roll Number : ");
                scanf("%d", &roll);

                index = binarySearch(n, roll);

                if(index == -1)
                {
                    printf("Student Not Found.\n");
                }
                else
                {
                    printf("\nStudent Found\n");
                    printf("Roll Number : %d\n", s[index].roll);
                    printf("Name : %s\n", s[index].name);
                    printf("Total Marks : %d\n", s[index].total);
                    printf("Percentage : %.2f\n", s[index].percentage);
                    printf("Grade : %c\n", s[index].grade);
                }

                break;

            case 3:

                leaderboard(n);
                break;

            case 4:

                printf("Thank You!\n");
                return 0;

            default:

                printf("Invalid Choice\n");
        }
    }

    return 0;
}
