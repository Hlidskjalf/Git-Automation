#include <iostream>
#include <cstdlib>
#include <string>
#include "git.h"

int git_cmd_init()
{
    std::string choice;
    std::cout << "Has your project been initialized? (y/n): \n";
    std::cin >> choice;
    if (choice == "n" || choice == "N")
    {
        system("git init");
    } else {
        std::cout << "Excellent.\n";
    }
    return 0;
}

int git_cmd_add()
{
    system("git add .");

    return 0;
}

int git_cmd_commit()
{
    /*
    std::string commit = "git commit -m Assisted push";
    std::string custom;
    std::cout << "Enter a commit message: ";
    std::cin >> custom;
    commit += custom;
    */
    system("git commit -m \"Assisted push\"");

    return 0;
}

int git_cmd_push()
{
    system("git push -u origin master");

    return 0;
}
