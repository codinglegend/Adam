//
//  main.c
//  Adam
//
//  Created by Alain  on 2015-05-05.
//  Copyright (c) 2015 Alain . All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char atAdam[30];
    scanf("%s", atAdam);
    
    int isAllCaps = 1; // true
    
    for (int i = 0; i < strlen(atAdam); i++)
    {
        if (isupper(atAdam[i]) == 0)
        {
            //we've found a lower case character
            isAllCaps = 0;
            break;
        }
    }
    
    if (strchr(atAdam, '?') != NULL){
        printf("Sure\n");
    }else if (isAllCaps == 1){
    printf("Woah, chill out!\n");
    }
    else if (atAdam == NULL){
        printf("Fine. Be that way!\n");
    }else
        printf("Whatever\n");
    
//    char c = 'A';
//    if (islower(c)){
//        printf("%c is lowercase\n", c);
//    }else{
//        printf("%c is uppercase\n", c);
//    }



    return 0;
}

// notes: don't include [30] in a line like  printf("%s", adamspeak);