#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)//求字符串长度，不希望它被改变
//{
//	assert(str != NULL);
//	int i = 0;
//	while (*str != '\0')
//	{
//		str++;
//		i++;
//
//	}
//	return i;
//}
//
//int main()
//{
//	char arr[] =  "asasfafawfsf";
//	int len = my_strlen(arr);
//	printf("%d\0", len);
//	return 0;
//
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//5  7
//	int i = 1;
//	for (i = 1;; i++)
//	{
//		if (a*i % b == 0)
//		{
//			printf("%d", a * i);
//			break;
//		}
//	}
//
//	return 0;
//}


#include<stdio.h>
#include<string.h>
//字符串倒置
void reverse(char*left,char*right)
{
	while (left < right)
	{
		char tmp = 0;
	    tmp = *left;
	    *left = *right;
	    *right = tmp;
	    left++;
	    right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets_s(arr);//获取字符串
	int len = strlen(arr);//求字符串长度
	reverse(arr, arr + len - 1);

	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end!='\0')
		{
			end++;
		}
		reverse(start, end-1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}

	printf("%s\n", arr);
	return 0;
}