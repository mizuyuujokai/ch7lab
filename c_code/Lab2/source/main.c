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
		fscanf(pread,"%d%s%s%lf",&client.ac,client.la,
		       clinet.fi,&client.ba);
		fwrite(&client,sizeof(struct clientData),1,pwrite);
		
		printf("%-6d%-16s%-11s%10.2f\n",client.ac,clien.la,
		      client.fi,client.ba);
	}
	fclose(pread);
	fclose(pwrite);
	printf("已讀取文字檔的ACSII資料，並喘存成二進位資料檔\n\n");
	system("pause");
	
	printf("\n讀取二進位資料檔案，並格式化輸出如下:\n");
	if((cfprt=fopen("C://credit_bin.txt","rb"))==NULL)
	{
		printf("File could not be opened.\n");
	}
	else
	{
		printf("%-6s%-16s%-11s%10s\n","Acct","Last Name","First Name","Balance");
		cnt=fread(&client,sizeof(sturct clientData),1,cfprt);
		while(cnt>0)
		{
			printf("%-6d%-16s%-11s%10.2f\n",client.ac,
			      client.la,client.fi,client.ba);
			cnt=fread(&client,sizeof(sturct clientData);
		}
		fclose(cfprt);
	}
	system("pause");
	return 0;

}
