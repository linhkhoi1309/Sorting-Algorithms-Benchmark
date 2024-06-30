#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include "Command.h"

int main(int argc, char *argv[])
{
    if (argc >= 5)
    {
    // Algorithm mode
        if (!strcmp(argv[1], "-a"))
        {
            if (argc == 6)
                command2(argv[2], atoi(argv[3]), argv[4], argv[5]);
            else
            {
                bool isCommand1 = false;
                for (int i = 0; i < strlen(argv[3]); i++)
                {
                    if (!isdigit(argv[3][i]))
                    {
                        command1(argv[2], argv[3], argv[4]);
                        isCommand1 = true;
                        break;
                    }
                }
                if (!isCommand1)
                    command3(argv[2], atoi(argv[3]), argv[4]);
            }
        } // Comparision mode
        else if (!strcmp(argv[1], "-c"))
        {
            if (argc == 6)
                command5(argv[2], argv[3], atoi(argv[4]), argv[5]);
            else if (argc == 5)
                command4(argv[2], argv[3], argv[4]);
        }
    }
    return 0;
}