// Count Frequency of Digits in a String

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 int main()
 {
     char testString[] = "5Ni5ce - 201955";

     // int array to hold counts of each digit
     int digitCounts[10] = {0};

     // loop through string and count digits
     for (int i=0; i < strlen(testString); i++)
     {
         // if character is a digit, increase count of that digit
         if (testString[i] >= '0' && testString[i] <= '9')
         {
             // subtract 48 to convert char value to int digit value
             digitCounts[(testString[i] - 48)]++;
         }
     }

     // print digit counts
     for (int i=0; i<=9; i++)
     {
         printf("%d's\t%d\n", i, digitCounts[i]);
     }


     return 0;
 }
