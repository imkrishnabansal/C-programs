
#include <stdio.h>

int
main ()
{
  int a[100], n, i, j, k;
  printf ("ENTER HOW MUCH VALUE YOU WANT TO STORE:\n");
  scanf ("%d", &n);

  printf ("START ENTERING VALUES:\n");
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  int e[100], o[100], c1 = 0, c2 = 0;
  for (i = 0, j = 0, k = 0; i < n; i++)
    {
      if (a[i] % 2 == 0)
	{
	  e[j++] = a[i];
	}
      else
	{
	  o[k++] = a[i];
	}

    }
  i = 0;
  printf ("\nEVEN ELEMENTS ARE: ");
  while (i < j)
    {
      printf ("%d,", e[i++]);
    }
  printf ("\b ");
  printf ("ODD ELEMENTS ARE: ");
  i=0;
  while (i < k)
    {
      printf ("%d,", o[i++]);
    }
printf("\b ");    

  return 0;
}

