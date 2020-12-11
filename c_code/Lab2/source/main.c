#include<stdio.h>
#include<stdlib.h>

struct clientData
{
	int ac;
	char la;
	char fi;
	double ba;

};

int main(void) {
	FILE *pread, *pwrite;
	FILE *cfprt;
	int cnt = 0;
	struct clientData client = { 0,"","",0.0 };

	pread = fopen("C://credit.txt", "r");
	if (NULL == pread) {
		return 0;
	}
	pwrite = fopen("C://credit_bin.txt", "wb");
	if (NULL == pwrite)
	{
		fclose(pread);
		return 0;
	}
	while (!feof(pread))
	{
		fscanf(pread,"%d%s%s%lf",&client.ac,client.la)
	}
}