#include <iostream>

std::string &megaphone(std::string &str) {
    std::locale loc;
    for (std::string::iterator it = str.begin(); it != str.end(); ++it)
        *it = std::toupper(*it, loc);
    return str;
}

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else {
        for (int i = 1; i < argc; ++i) {
            std::string	str(argv[i]);
            std::cout << megaphone(str);
        }
    }
    std::cout << std::endl;
    return 0;
}
