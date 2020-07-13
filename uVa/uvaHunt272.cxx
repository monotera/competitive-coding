#include "iostream"
#include "string"

int main()
{
    std::string s;
    getline(std::cin, s);
    bool first = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 34 && first)
        {
            std::cout << "``";
            first = 0;
        }
        else if (s[i] == 34 && first)
        {
            std::cout << "''";
            first = 1;
        }
        else
        {
            std::cout << s[i];
        }
    }
}