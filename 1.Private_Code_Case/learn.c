//һ���۰�����㷨ѧϰ��ʵ�� 
//1:������ִ�� 
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
		printf("�ҵ���,�±���%d\n", mid);
	else
		printf("�Ҳ���\n");
}
//2:�������� 
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
		 return mid;//�ҵ��ˣ������±�
	 }
	  return -1;//�Ҳ���
}
/*�����ַ�����غ���
1���ַ�������
ͷ�ļ���string.h
�﷨/ԭ�ͣ�
char* strcpy(char* strDestination, const char* strSource);

����˵����
strDestination��Ŀ���ַ�����
strSource��Դ�ַ�����

2����ʼ�������Ӧ���ڴ�
char str[10];
char *p = str
memset(str, 0, sizeof(str));  //ֻ��дsizeof(str), ����дsizeof(p)

3�����ַ������ȣ����鳤��
arr[]="welcome"
a = sizeof(arr)//����"\0"
b = strlng(arr)//������"\0"
a = b+1��\0��
*/
