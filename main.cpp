#include <iostream>
#include <fstream>
#include "git.h"

int main_menu();
int maint_menu();
int push_menu();
int file_append();

int main(int argc, char **argv)
{
    file_append();
    main_menu();

    return 0;
}

int main_menu()
{
    std::cout << "Please choose from the following options: \n"
    << "\t1) File maintenance and git prep\n"
    << "\t2) Commit and push options\n"
    << "\t3) Exit\n";
    int choice;
    std::cin >> choice;
    switch(choice)
    {
        case 1:
        maint_menu();
        break;

        case 2:
        push_menu();
        break;

        case 3:
        std::cout << "Exiting....";
        break;
    }
}

int maint_menu()
{
    std::cout << "Please select from the following options: \n"
    << "\t1) Set upstream\n"
    << "\t2) git init\n"
    << "\t3) git add .\n"
    << "\t4) Exit to main menu\n";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
        case 1:
        git_cmd_set_upstream();
        maint_menu();
        break;

        case 2:
        git_cmd_init();
        maint_menu();
        break;

        case 3:
        git_cmd_add();
        maint_menu();
        break;

        case 4:
        main_menu();
        break;
    }

    return 0;
}

int push_menu()
{
    std::cout << "Please select from the following options: \n"
    << "\t1) git commit\n"
    << "\t2) git push\n"
    << "\t3) Exit to main menu\n";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
        case 1:
        git_cmd_commit();
        push_menu();
        break;

        case 2:
        git_cmd_push();
        push_menu();
        break;

        case 3:
        main_menu();
        break;
    }

    return 0;
}

int file_append()
{
    std::ofstream outfile;

    outfile.open("test.txt", std::ios_base::app);
    outfile << "Data";
}
