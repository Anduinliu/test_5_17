 #define _CRT_SECURE_NO_WARNINGS  1
//�ļ��������д
#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//	//2.��ȡ�ļ�
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
//	//1.��λ�ļ�ָ��
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
//	//feof(); //- end of file - �ļ�������־
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
//	//strerror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe\n");
//		return 0;
//	}
//	//���ļ�
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