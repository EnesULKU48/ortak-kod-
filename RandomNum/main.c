#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ENES ULKU 230202083

void fprint(int dizi[])
{
    for(int i = 0; i < 20; i++)
        printf("%d\n", dizi[i]);
}

void frandom(int dizi[])
{
    srand(time(NULL));
    int i = 0, j = 0, k = 0;
    int num = 0, say = 0;
    int kosul1 = 1;
    int kontdizi[4] = {0};

    while(i <= 19)
    {

        num = rand()%8999 + 1000 ;
        say = num;
        j = 0;
        while(say)
        {
            // int say = say % 10;
            // kontdizi[j++] = say;
            // say = say / 10;

            int sonbasamak = say % 10;
            kontdizi[j++] = sonbasamak;
            say = say / 10;
        }


        j = 0;
        k = 0;
        kosul1 = 1;
        while(k < 3)
        {
            j = k + 1;
            while(j < 4)
            {
                if(kontdizi[k] == kontdizi[j])
                    kosul1 = 0;
                j++;
            }

            j = i;
            while (j >= 0)
            {
                if (dizi[j--] == num)
                {
                    kosul1 = 0;
                }

            }
            
            if(kosul1 == 0)
                break;
            k++;
        }


        if(kosul1)
        {
            dizi[i] = num;
            i++;
        }

    }

}

int main()
{
    int randizi[20];

    frandom(randizi);
    fprint(randizi);

    return 0;
}
