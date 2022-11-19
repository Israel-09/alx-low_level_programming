#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int main()
{
	char *goal;
	
	char home[] = "mnasdlkbsdfadklbjfsdkblsdfjbadwssdfnlfdg lndsfgljkbfgdfgadsfgj k;dfdgadsfj k;gdasfgadsfgjbadfgadsfkgafgadsfgaddfg/bfasdfgkadsfgadfgadfgadfgadfgandfgadfadfgadfgadfgadnf;gadfgadfgadfgadfgadfadfgadsfgadfghdaf";
	goal = _strdup(home);
	if (goal == NULL)
	{
		puts("not available");
		return (1);
	}
	puts(goal);
	return (0);

}
