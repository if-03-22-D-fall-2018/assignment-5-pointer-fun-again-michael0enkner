#include <stdio.h>
#include <string.h>

struct PlayStruct
{
  int int_value;
  double double_value;
  char a_string[64];
};
void print_struct (struct PlayStruct ps,struct PlayStruct *pps);
void change_struct(struct PlayStruct ps,struct PlayStruct *pps);
void print_string(char string_to_print[]);
void change_string(char string1[],char *string_p[]);

int main(int argc, char const *argv[])
{
  struct PlayStruct play_struct = {10,0.5, "I'm a string"};
  struct PlayStruct *play_struct_pointer = &play_struct;
  char another_string[16] = "Hello";
  char *another_string_pointer = another_string;
  print_struct(play_struct,play_struct_pointer);
  change_struct(play_struct,play_struct_pointer);
  print_struct(play_struct,play_struct_pointer);
  print_string(play_struct.a_string);
  change_string(play_struct.a_string,&another_string_pointer);
  print_string(play_struct.a_string);
  print_string(another_string_pointer);
  return 0;
}

void print_struct (struct PlayStruct ps,struct PlayStruct *pps)
{
  printf("Values of struct ps: <%d>,<%f>,<%s>\n",ps.int_value,ps.double_value,ps.a_string);
  printf("Values of struct pps: <%d>,<%f>,<%s> \n",pps ->int_value,pps ->double_value,pps ->a_string);
}
void change_struct(struct PlayStruct ps,struct PlayStruct *pps)
{
  ps.int_value = 20;
  ps.double_value = 1.5;
  strcpy (ps.a_string, "I'm changed");
  pps -> int_value = 30;
  pps -> double_value = 2.5;
  strcpy (pps -> a_string, "I'm changed again");
}
void print_string(char string_to_print[])
{
  printf("string_to_print: %s\n",string_to_print);
}
void change_string(char string1[],char *string_p[])
{
  string1[2] = 0;
  string_p[1] = 0;
}
