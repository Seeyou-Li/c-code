//一、折半查找算法学习与实操 
//1:主函数执行 
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	int key = 7;
	int mid = 0;
	while(left<=right)
	{
		mid = (left+right)/2;
		if(arr[mid]>key)
		{
			right = mid-1;
		}
		else if(arr[mid] < key)
		{	
			left = mid+1;
		}
		else
		break;
	}
	if(left <= right)
		printf("找到了,下标是%d\n", mid);
	else
		printf("找不到\n");
}
//2:构建函数 
int bin_search(int arr[], int left, int right, int key)
{
	 int mid = 0;
	 while(left<=right)
	{
		 mid = (left+right)>>1;
		 if(arr[mid]>key)
		 {
		 	right = mid-1;
		 }
		 else if(arr[mid] < key)
		 {
			 left = mid+1;
		 }
		 else
		 return mid;//找到了，返回下标
	 }
	  return -1;//找不到
}
/*二、字符串相关函数
1、字符串复制
头文件：string.h
语法/原型：
char* strcpy(char* strDestination, const char* strSource);

参数说明：
strDestination：目的字符串。
strSource：源字符串。

2、初始化数组对应的内存
char str[10];
char *p = str
memset(str, 0, sizeof(str));  //只能写sizeof(str), 不能写sizeof(p)

3、求字符串长度，数组长度
arr[]="welcome"
a = sizeof(arr)//包含"\0"
b = strlng(arr)//不包含"\0"
a = b+1（\0）
*/
