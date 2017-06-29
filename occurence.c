#include<stdio.h>
#include<conio.h>
#include<string.h>
int strrindex(char[] string, char[] matcher)
{
      int iterator = 0, counter = 0, position = -1 ;
      while(string[iterator] != '\0')
      {
           while( matcher[counter] != '\0' )
           {
                  if( string[iterator] == matcher[counter] )
                  {
                        position = iterator; 
                        counter++;
                        iterator++;
                        break;
                   }
                   else
                   {
                        counter = 0;
                        iterator = 0;
                        position = -1;
                   }
             }
        }
        return position;
}


void main()
{
      char  string[1000], matcher[500];
      int position;
      clrscr();
      printf(" Enter a string ");
      gets(string);
      printf("\n");
      printf(" Enter a string to match with other string");
      gets(matcher);
      position = strrindex( string , matcher );
       if( position >= 0 )
            printf(" the substring is at position ", position); 
        else
             printf(" there is no occurence ", position );
       getch();
}
