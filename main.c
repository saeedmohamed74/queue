#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int main()
{
    int choise;

  while(1)
    {

    printf("\nMENU:\n1.Create\t2.Disaply\t3.insert\t4.Delete\t5.Exit\n");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1:
                       create();
                       break;
            case 2:
                       display();
                       break;
            case 3:
                       insert_begin();
                       break;
            case 4:
                       delete_begin();
                       break;
            case 5:
                       exit(0);
        }
  }
    return 0;
}
