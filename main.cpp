#include <iostream>
// #include "adder.h"
#include<string>

//file
#include <filesystem>
using recursive_directory_iterator = std::filesystem::recursive_directory_iterator;

#include "lib\dirent.h"
#include <sys\stat.h>
#include <conio.h>

int main() {
    // std::cout << "CMake\n";

    // std::cout << add(1.2f, 2.1f) << '\n';

    std::string sourcePath = "";
    std::cout << "Enter copy path: ";
    std::cin >> sourcePath;
    std::cout << "path: " << sourcePath;

    for (const auto& dirEntry : recursive_directory_iterator(sourcePath))
        std::cout << dirEntry << std::endl;

    // struct dirent *d;
    // struct stat dst;

    // DIR *dr;

    // dr = opendir(sourcePath.c_str());

    // if (dr != NULL) 
    // {
    //     for (d = readdir(dr); d != NULL; d = readdir(dr)) 
    //     {
    //         std::string type = d->d_name;
    //         type = sourcePath + type;
    //         if (stat(type.c_str(), &dst) ==  0) 
    //         {
    //             if (dst.st_mode & S_IFDIR) 
    //             {
    //                 type = " is a FOLDER.";
    //             } 
    //             else if (dst.st_mode & S_IFREG) 
    //             {
    //                 type = " is a FILE.";
    //             }
    //         }
    //         std::cout << d->d_name + type << std::endl;
    //     }
    //     closedir(dr);
    // }

    return 0;
}

// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
//     string s1 = "testtest";
//     string s2 = "";
//     string s3 = "TEST";

//     cout << "s1=" << s1 << ", s2=" << s2 << ", s3=" << s3 << endl;
//     return 0;
// }