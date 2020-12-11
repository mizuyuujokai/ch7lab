#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996) 
typedef struct _student {
	char name[5];
	int ch;
	int en;
	int ma;
	int sum;
	float avg;

}student;

int main() {

	student data[5];
	FILE *stream1;
	FILE *stream2;
	stream1 = fopen("D://gradedata.txt", "r");
	stream2 = fopen("D://gradeoutput.txt", "w");

	if (stream1 == NULL || stream2 == NULL) {
		printf("檔案開啟失敗\n");
	}
	else {
		fprintf(stream2, "姓名\t國文\t英文\t數學\t綜合\t平均\n");
		for (int i = 0; i < 5; i++) {
			fscanf(stream1, "%s", data[i].name);
			if (i == 2) {
				fscanf(stream1, "\t\t%d", &data[i].ch);
			}
			else {
				fscanf(stream1, "\t%d", &data[i].ch);
			}
			fscanf(stream1, "\t%d", &data[i].en);
			fscanf(stream1, "\t%d", &data[i].ma);

			data[i].sum = data[i].ch + data[i].en + data[i].ma;
			data[i].avg = data[i].sum / 3.0;
			fprintf(stream2, "%s\t%d\t%d\t%d\t%d\t%.2f\n", data[i].name, data[i].ch,
				data[i].en, data[i].ma, data[i].sum, data[i].avg);
		}
		fclose(stream1);
		fclose(stream2);
	}
	system("pause");
	return 0;
}