#include <stdio.h>
#include <string.h>

struct Library
{
    int bookId;
    char bookName[50];
    char author[50];
    int available;
};

struct Library book[10];
int total = 0;

void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &book[total].bookId);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", book[total].bookName);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book[total].author);

    printf("Enter Number of Copies: ");
    scanf("%d", &book[total].available);

    total++;

    printf("\nBook Added Successfully!\n");
}

void displayBooks()
{
    int i;

    if(total == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n----------- BOOK LIST -----------\n");

    for(i = 0; i < total; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", book[i].bookId);
        printf("Book Name : %s\n", book[i].bookName);
        printf("Author : %s\n", book[i].author);
        printf("Available Copies : %d\n", book[i].available);
    }
}

void issueBook()
{
    int id, i, found = 0;

    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &id);

    for(i = 0; i < total; i++)
    {
        if(book[i].bookId == id)
        {
            found = 1;

            if(book[i].available > 0)
            {
                book[i].available--;
                printf("Book Issued Successfully!\n");
            }
            else
            {
                printf("Book Not Available!\n");
            }
        }
    }

    if(found == 0)
        printf("Book ID Not Found!\n");
}

void returnBook()
{
    int id, i, found = 0;

    printf("\nEnter Book ID to Return: ");
    scanf("%d", &id);

    for(i = 0; i < total; i++)
    {
        if(book[i].bookId == id)
        {
            book[i].available++;
            found = 1;
            printf("Book Returned Successfully!\n");
        }
    }

    if(found == 0)
        printf("Book ID Not Found!\n");
}

void searchBook()
{
    char name[50];
    int i, found = 0;

    printf("\nEnter Book Name: ");
    scanf(" %[^\n]", name);

    for(i = 0; i < total; i++)
    {
        if(strcmp(book[i].bookName, name) == 0)
        {
            found = 1;

            printf("\nBook Found!\n");
            printf("Book ID : %d\n", book[i].bookId);
            printf("Author : %s\n", book[i].author);
            printf("Available Copies : %d\n", book[i].available);
        }
    }

    if(found == 0)
        printf("Book Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Search Book\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                issueBook();
                break;

            case 4:
                returnBook();
                break;

            case 5:
                searchBook();
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}
