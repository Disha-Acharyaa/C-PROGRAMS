#include <stdio.h>
int main() 
{
  int total_students, n, i;
  char s[10][10];
  printf("Enter the number of students: ");
  scanf("%d", &total_students);
  printf("Enter student names:\n");
  for(i = 0; i < total_students; i++)
  {
    scanf("%s", s[i]);
  }
  printf("Enter n: ");
  scanf("%d", &n);
  printf("The first %d students are\n",n);
    for(i = 0; i < n; i++) 
    {
    printf("%s\n", s[i]);
    }
    return 0;
 }