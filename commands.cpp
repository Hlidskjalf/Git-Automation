#include <iostream>
#include <cstdlib>
#include <string>
#include "git.h"

void git_cmd_set_upstream()
{
    //TODO create a set upstream command
}

void git_cmd_init()
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
}

void git_cmd_add()
{
    system("git add .");
}

void git_cmd_commit()
{
    std::string commit = "git commit -m ";
    std::string custom;
    std::cout << "Enter a commit message: ";
    std::cin >> custom;
    commit += custom;
    system(commit.c_str());
}

void git_cmd_push()
{
    system("git push -u origin master");
}
