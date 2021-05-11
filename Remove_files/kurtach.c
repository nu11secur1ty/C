#include<stdio.h>
int main() {
   int del = remove("textFile.txt"); //or other file
   if (!del)
      printf("The file is Deleted successfully");
   else
      printf("the file is not Deleted");
   return 0;
}
