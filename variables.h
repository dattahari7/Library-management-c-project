#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<windows.h>

FILE *login;
//list of global variable
char findbook;
char password[10];
char catagories[][15] = {"Computer", "Electronics", "Electrical", "Civil", "Mechnnical", "Architecture"};

struct BOOK
{
    int id;
    char name[20];
    char author[20];
    int quantity;
    float price;
    int rackno;
    char *cat;
};
struct BOOK book;

COORD coordinate = {0, 0};

//list of function prototype
void returnFunction();
void mainMenu();
void addBooks();
void deleteBooks();
void editBooks();
void searchBooks();
void issueBooks();
void viewBooks();
void closeApplication();
int  getData(int);
int  checkId(int);
void Password();
void getPassword(char *);
void issueRecord();
void creditAndClose();
void adminSignUp();

