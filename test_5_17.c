 #define _CRT_SECURE_NO_WARNINGS  1
//文件的随机读写
#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(pf, -2, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//int pos = ftell(pf);
//	//printf("%d\n", pos);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//int main()
//{
//	//feof(); //- end of file - 文件结束标志
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//strerror - 把错误码对应的错误信息的字符串地址返回
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe\n");
//		return 0;
//	}
//	//读文件
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

typedef struct
{
	int a;// 0 - 3 
	char b;// 
	short c;// 
	short d;
}AA_T;
int main()
{
	printf("%d\n", sizeof(AA_T));
	
	return 0;
}