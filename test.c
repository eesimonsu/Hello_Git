#include <stdio.h>
#include <string.h>

int main()
{
	char *J = "aA";
	char *S = "aAAbbbb";
	int counter=0;
	int i, j;
   
	printf("sizeof J(%d) S(%d)\n", strlen(J), strlen(S));
    printf("°×ºÆ³ÛÄãÔÚ¸ÉÂï£¿\n");
	for(i=0; i<strlen(J); i++)
	{
		for(j=0; j<strlen(S); j++)
		{
			if( strncmp(&J[i], &S[j], 1)==0)
			{
				printf("i(%d) j(%d) J[%d](%c) S[%d](%c)\n ", i, j, i, J[i], j, S[j]);
				counter+=1;
			}
        	}
	}
    printf("counter %d\n", counter);

	return 0;
}
