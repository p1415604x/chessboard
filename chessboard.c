#include <stdio.h>
#define DEPTH 64
#define WIDTH 64
#define CYCLE  10
#define STAR  "*"
#define SPACE " "
#define NL    "\n"

int main()
{
    int i,j;
	
    for (i=0; i<DEPTH; printf(NL),i++)
        if ((i%CYCLE)*2/CYCLE)
            for (j=0; j<WIDTH; j++)
                if ((j%CYCLE)*2/CYCLE)
					printf(SPACE);
                else
					printf(STAR);
		else
			for (j=0; j<WIDTH; j++)
				if ((j%CYCLE)*2/CYCLE)
					printf(SPACE);
				else
					printf(STAR);
}