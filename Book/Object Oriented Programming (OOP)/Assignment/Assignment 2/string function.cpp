#include<iostream>
#include <string.h>
using namespace std;
int main ()
{

   char str1[12] = "Siddharth";
   char str2[12] = "Pandya";
   char str3[12];
   int  len,comp ;

   strcpy(str3, str1);
   cout<<"strcpy( str3, str1) : "<<str3 ;

   strncat(str1,str2,3);
   cout<<"\n strncat(str1,str2) : "<<str1;

   strcat( str1, str2);
   cout<<"\n strcat( str1, str2):  "<<str1;

   len = strlen(str1);
   cout<<"\n strlen(str1) :  "<<len ;

   strcmp(str1,str2);
   comp =  strcmp(str1,str2);

   if(comp == 0)
   {
       cout<<"\n strings are equal ";
   }
   else
   {
       cout<<"\n strings are not equal";
   }

   return 0;
}
