//---------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <sstream>
#include "windows.h"
#include <vcl.h>
#pragma hdrstop

#include <string.h>
 
int main()
{
 
    int count = 0;
    char str[256] = "anapa pos africa";
    char *token;

  
     token = strtok(str," ");

    if(token[0] == token[strlen(token) - 1]) {
        count++;
    }

    while (token != NULL) {

        token = strtok(NULL, " ");
        if(token != NULL && token[0] == token[strlen(token) - 1]) {
            count++;
        }
    }

    printf("Kolvo slov: %d", count);
     system("pause");
    return 0;
}
