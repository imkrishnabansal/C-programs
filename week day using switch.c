#include <stdio.h>
int
main ()
{
  int day;
  //enter no from 1 to 7 to find the day:
  scanf ("%d",&day);

  switch (day){
    case 1:
      printf ("MONDAY");
      break;
    case 2:
      printf ("TUESDAY");
      break;
    case 3:
      printf ("WEDNESDAY");
      break;
    case 4:printf("THURSDAY");
      break;
    case 5:printf("FRIDAY");
      break;
    case 6:printf("SATURDAY");
      break;
    case 7:printf("SUNDAY");
      break;
    default:printf("enter correct no:");
        
    }
    return 0;
}
