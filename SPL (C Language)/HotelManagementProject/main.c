#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct hotel
{
    char roomNo[10];
    char name[100];
    char phn[15];
    char gend[10];
};

void allocate()
{
    FILE *fp = fopen("hotel.txt", "a+");
    struct hotel h;

    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Enter Room number : ");
    scanf("%s", h.roomNo);
    printf("Enter your name : ");
    scanf("%s", h.name);
    printf("Enter your mobile number : ");
    scanf("%s", h.phn);
    printf("Enter your gender : ");
    scanf("%s", h.gend);

    fprintf(fp, "\nRoom:%s\n", h.roomNo);
    fprintf(fp, "Name:%s\n", h.name);
    fprintf(fp, "Mobile:%s\n", h.phn);
    fprintf(fp, "Gender:%s\n", h.gend);

    fclose(fp);
}

void showInfo()
{
    FILE *fp;
    char line[256];

    fp = fopen("hotel.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);
}

void search()
{
    FILE *fp;
    char roomnumber[20];
    int flag = 1;
    char line[256];

    fp = fopen("hotel.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    fflush(stdin);
    printf("\nEnter Room number of the customer to search its details: ");
    scanf("%s", roomnumber);

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        if (strstr(line, roomnumber) != NULL)
        {
            flag = 0;
            printf("\n\tRecord Found\n\n");
            printf("%s", line); // print room number
            fgets(line, sizeof(line), fp); // read and print name
            printf("%s", line);
            fgets(line, sizeof(line), fp); // read and print phone number
            printf("%s", line);
            fgets(line, sizeof(line), fp); // read and print gender
            printf("%s", line);
            break;
        }
    }

    if (flag == 1)
    {
        printf("\n\tRequested Customer could not be found!");
    }

    fclose(fp);
}

void edit()
{
    FILE *fp;
    int k = 1;
    char roomnumber[20];
    struct hotel h;

    // Open file in read-write mode
    if ((fp = fopen("hotel.txt", "r+")) == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Enter Room number of the customer to edit: ");
    scanf("%s", roomnumber);
    fflush(stdin);

    // Loop through records in the file
    while (fread(&h, sizeof(h), 1, fp) == 1)
    {
        // Compare room numbers
        if (strcmp(h.roomNo, roomnumber) == 0)
        {
            k = 0; // Record found
            printf("\nRecord found!\n");
            printf("\nEnter Room Number: ");
            scanf("%s", h.roomNo);
            printf("Enter Name: ");
            scanf("%s", h.name);
            printf("Enter Phone number: ");
            scanf("%s", h.phn);
            printf("Enter gender: ");
            scanf("%s", h.gend);

            // Reset file pointer to the beginning of the current record
            fseek(fp, -sizeof(h), SEEK_CUR);
            // Write the modified record
            fwrite(&h, sizeof(h), 1, fp);

            break;
        }
    }

    // Check if record was found
    if (k == 1)
    {
        printf("\nThe record doesn't exist!\n");
    }
    else
    {
        printf("\nYour record has been successfully edited!\n");
    }

    // Close file
    fclose(fp);
}



int main()
{
    int ch;
    do
    {
        printf("\n1. Allocate New Room");
        printf("\n2. Show Information");
        printf("\n3. Search Information");
        printf("\n4. Edit Information");
        printf("\n0. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            allocate();
            break;
        case 2:
            showInfo();
            break;
        case 3:
            search();
            break;
        case 4:
            edit();
            break;
        }
    } while (ch != 0);

    return 0;
}
