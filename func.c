#include"func.h"
void func(const char* filename, char* slovo)
{
FILE *input;
char str[256],word[256], *sbegin, *send;
int max=0;
input=fopen(filename, "r");
if (input)
    {
    while(fgets(str,256,input))
    {
        for(sbegin=strchr(str, '"'), send=(sbegin?strchr(sbegin+1,'"'):NULL);
        sbegin&&send;
        sbegin=strchr(send+1,'"'),send=(sbegin?strchr(sbegin+1,'"'):NULL))
        {
            strncpy(word,sbegin+1,send-sbegin-1);
             word[send-sbegin-1]='\0';
             if(strlen(word)>=max)
            {
              max=strlen(word);
              slovo[0]='\0';
              strcpy(slovo,word);
            }

        }


    }
}
fclose(input);
}

