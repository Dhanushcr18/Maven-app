#include <stdio.h>
#include <string.h>
#define MAX_MOVIES 100
struct Movie
{
char title[100];
char genre[50];
char actor[100];
char actress[100];
float rating;
};

int main() 
{
struct Movie movies[MAX_MOVIES];
int n,i;
printf("Enter the number of movies:");
scanf("%d",&n);
if (n<=0||n>MAX_MOVIES)
{
printf("Invalid no.of movies\n");
return 0;
}
for (i=0;i<n;i++)
{
printf("\n--Enter the details of the movie %d--\n",i+1);
printf("Title:");
scanf(" %[^\n]", movies[i].title);
printf("Genre:");
scanf(" %[^\n]", movies[i].genre);
printf("Actor:");
scanf(" %[^\n]", movies[i].actor);
printf("Actress:");
scanf(" %[^\n]", movies[i].actress);
printf("Rating:");
scanf("%f", &movies[i].rating);
}
printf("\n\n------MOVIE DETAILS------\n");
for (i=0;i<n;i++)
{
printf("\n Movie %d\n",i+1);
printf("Title: %s\n", movies[i].title);
printf("Genre: %s\n", movies[i].genre);
printf("Actor: %s\n", movies[i].actor);
printf("Atress: %s\n", movies[i].actress);
printf("Rating: %.1f\n", movies[i].rating);
}
return 0;
}
