#include <stdio.h>

#define MAX_LEN 80

int main (int argc, char *argv[])
{
  char a_word[MAX_LEN];

  printf ("What's your name?\n");
  scanf ("%s",a_word);
  printf("Hey, %sI just really wanted to say hello to you.\nI hope you have a wonderful day.", a_word);

  return 0;
}
