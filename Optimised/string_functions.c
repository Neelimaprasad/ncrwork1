#include<stdio.h>

#include<stdlib.h>

#include<string.h>

void stringreverse(char *);

char* stringconcatenation(char *,char *);

int stringcompare(char *,char *);

void stringcopy(char *,char *);

int main()

{

 char *str1,*str2;

 int s1,s2,choice,c;

 char *concat;

 printf("enter the length of string1 : ");

 scanf("%d",&s1);

 if(s1>0)

 {

 str1=(char *)malloc(sizeof(char)*s1);

 printf("enter the string1: ");

 scanf(" %[^\n]s",str1);

 }

 else if(s1<0)

 {

  printf("length should be a positive number\n");

  printf("the program is terminated\n");

  return 0;

 }

 else

  {

  printf("Null string is not accepted\n");

  printf("the program is terminated\n");

  return 0;

  }

 printf("enter the length of string2 : ");

 scanf("%d",&s2);

if(s2>0)

 {

 str2=(char *)malloc(sizeof(char)*s2);

 printf("enter the string2: ");

 scanf(" %[^\n]s",str2);

 }

 else if(s2<0)

 {

  printf("length should be a positive number\n");

  printf("the program is terminated\n");

  return 0;

 }

 else

  {

  printf("Null string is not accepted\n");

  printf("the program is terminated\n");

  return 0;

  }

 printf("\nThe strings are:%s and %s\t",str1,str2);

 int m=strlen(str1)+strlen(str2);

 concat=(char *)malloc(sizeof(char)*m);

 printf("enter your choice : 1.string reverse 2.string concatenation 3.string compare 4.string copy \n");


 scanf("%d",&choice);

 switch(choice)

 {

  case 1: stringreverse(str1);

          break;

  case 2: concat=stringconcatenation(str1,str2);

          printf("%s",concat);

          break;

  case 3: c=stringcompare(str1,str2);

          printf("%d",c);

          break;

 case 4: stringcopy(str1,str2);

          break;

  default:printf("invalid choice");

          break;



}

return 0;


}

void stringreverse(char *a)

{

 int i,k=0;

 char *rev;

 rev=(char*)malloc(sizeof(char)*20);

 for(i=0;a[i]!='\0';i++);

 i=i-1;

 while(i>=0)

  {

   rev[k++]=a[i];

   i--;

  }

  printf("%s",rev);

}

char* stringconcatenation(char *a,char *b)

{

 int i=0,k=0,l;

 char *new;

 l=strlen(a)+strlen(b);

 new=(char *)realloc(a, sizeof(char)*l);

 while(new[i]!='\0')

  i++;

 while(new[i]=='\0' && b[k]!='\0')

 {

  new[i]=b[k];

  new[i+1]='\0';

  i=i+1;

  k=k+1;

 }

  return new;


}

int stringcompare(char *a,char *b)

{

 int i=0;

 while(a[i]!='\0' && b[i]!='\0')

 {

  if(a[i]==b[i])

   i++;

  else

   break;

 }

 if(a[i] > b[i])

  {

     printf("not equal");

     return 1;

  }

   else if (a[i] < b[i])

   {

      printf("not equal");

      return -1;

   }

   else

   {

      printf("equal");

      return 0;

   }


}

void stringcopy(char *a,char *b)

{

 int i,l;

 char *new;

 l=strlen(b);

 new=(char *)realloc(a, sizeof(char)*l);

  for(i=0;b[i]!='\0';i++)

 {

  new[i]=b[i];

  new[i+1]='\0';

 }

 printf("%s",new);


}