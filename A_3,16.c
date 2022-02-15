#include<stdio.h>
#include<stdlib.h>

int main() {
FILE *in, *out ;
char c;
in = fopen("infile.txt", "r");
if (in == NULL) {
      puts("Can't open this file!");
      exit(1);
   }
out = fopen("outfile.txt", "w");
if (out == NULL) {
      puts("Can't open this file!");
      fclose(in);
      exit(1);
   }
while ((c =getc(in)) != EOF){
putc (toupper(c), out);
}
printf("Conversion to uppercase successfully in outfile.txt file");
fclose(in) ;
fclose(out) ;
return 0;
}









/*#include<stdio.h>
 
int main() {
   FILE *fp1, *fp2;
   char a;

   fp1 = fopen("infile.txt", "r");
   if (fp1 == NULL) {
      puts("cannot open this file");
      exit(1);
   }
   
   fp2 = fopen("outfile.txt", "w");
   if (fp2 == NULL) {
      puts("Not able to open this file");
      fclose(fp1);
      exit(1);
   }
   a = fgetc(fp1);
    while (a != EOF){
      //a = fgetc(fp1);
      a = toupper(a);
      fputc(a, fp2);
      break;
     
       }
   fclose(fp1);
   fclose(fp2);
return 0;
}*/