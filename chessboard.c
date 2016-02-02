#include <stdio.h>
#define DEPTH 64
#define WIDTH 64
#define CYCLE  8
#define STAR  "$"
#define SPACE " "
#define NL    "\n"

int main()
{
    int x,j;
	
    for (x=0; x<DEPTH; printf(NL),x++)
        if ((x%CYCLE)*2/CYCLE)
            for (j=0; j<WIDTH; j++)
                if ((j%CYCLE)*2/CYCLE)
					printf(STAR);
                else
					printf(SPACE);
		else
			for (j=0; j<WIDTH; j++)
				if ((j%CYCLE)*2/CYCLE)
					printf(STAR);
				else
					printf(SPACE);
	
}