//1006 ������ʽ�������


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	int i=0;
//	int a[10];
//	cin>>n;
//	int bai=n/100;  //345
////	int shi=(n%100)/10;
//	int shi=(n/10)%10;    //23 2      
//	int ge=n%10;
//	for(int i=0;i<bai;i++) cout<<"B";
//	for(int i=0;i<shi;i++) cout<<"S";
//	for(int i=1;i<=ge;i++) cout<<i;          //ע��������1��ge����Ϊ�Ǵ�1��ʼ���������0 
//	return 0;
//}










//1007 �����Բ���

//#include<bits/stdc++.h>                               //��ʱ�� 
//using namespace std;
//bool sushu(int num)
//{
//	if(num==0||num==1)return false;
//	else 
//	{
//		for(int i=2;i*i<=num;i++)
//		{
//			if(num%i==0) return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	int n;
//	int cnt=0;
//	cin>>n;
//	for(int i=1;i<n;i++)
//	{
//		if(sushu(i))
//		{
//			for(int j=i+1;j<=n;j++)                    //����û�б�Ҫȫ����һ�飬���������Ȱ�����ȫ��ѡ���� 
//			{
//				if(sushu(j)&&j-i==2)cnt++;
//			}
//		}
//	}
//	cout<<cnt;
//	return 0;
// } 




//#include<bits/stdc++.h>                                            ans1
//using namespace std;
//bool sushu(int num)
//{
//	if(num==0||num==1)return false;
//	else 
//	{
//		for(int i=2;i*i<=num;i++)
//		{
//			if(num%i==0) return false;
//		}
//	}
//	return true;
//}
//int cnt=0;
//int prime[10005];
//void init(int n)
//{
//	for(int i=2;i<=n;i++)
//	{
//		if(sushu(i))
//		{
//			prime[cnt++]=i;
//		}
//	}
//}
//int main()
//{
//	int n,j=0;
//	int ans=0;
//	int a[1000];
//	cin>>n;
//	init(n);
//	for(int i=0;i<cnt;i++)
//	{
//		if(prime[i+1]-prime[i]==2) ++ans;
//	}
//	cout<<ans<<endl;
//	return 0;
// } 








//#include<iostream>                                                                ans2
//#include<cmath>
//using namespace std;
//int isSushu(int n)  //�ж�һ��������n�Ƿ�Ϊ����
//{
//	for(int i =2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		  return 0;
//	}
//	return 1;
//}
//int main()
//{
//    int n;
//    cin>>n;
//    int count = 0;  //�����Ը���
//    int A[10000];  //A���������洢���е�����
//    int k=0;
//    for(int i=2;i<=n;i++)  //�����2��n����������������������A��
//    {
//    	if(isSushu(i)==1)
//    	   A[k++]=i;
//	}
//	for(int i=0;i<k-1;i++)  //����A���飬��������������֮��Ϊ2���������⣬count+1
//	{
//		if(A[i+1]-A[i]==2)
//		  count++;
//	}
//    cout<<count;
//}
	
 







//1008 ����Ԫ��ѭ����������



//#include<stdio.h>
//int main()
//{
//	int n,m;
//	int a[105];
//	scanf("%d",&n);
//	scanf("%d",&m);
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	m=m%n;
//	for(int i=n-m;i<n;i++) printf("%d ",a[i]);  //����������Ų��ǰ��Ĳ��� 
//	for(int i=0;i<n-m-1;i++) printf("%d ",a[i]);
//	printf("%d",a[n-m-1]);
//
//	return 0;
//}








//1009 ˵����


//#include<stdio.h>
//#include<string.h>                           //ans1
// 
//int main()
//{
//	int num=0;
//	char ans[90][90];
//	while(scanf("%s",ans[num])!=EOF)               //ѧϰ��������� //���ҪCtrl+Z�������� 
//	//scanf����һ�����ʣ�Ȼ�����ѭ���� 
//	{
//		num++;
//	} 
//	for (int i=num-1;i>=0;i--)
//	{
//		printf("%s",ans[i]);
//		if(i>0)
//		{
//			printf(" ");
//		}
//	}
//	return 0;
//}


                                                       //ans2
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[90];
//	gets(str);
////	char a[r][h];
//	char a[90][90];
//	int r=0,h=0;
//	for(int i=0;i<=strlen(str)-1;i++)
//	{
//		if(str[i]!=' ')
//		{
//			a[r][h++]=str[i];
//		}
//		else
//		{
//			a[r][h]='\0';
//			r++;
//			h=0;
//		}
//	}
//	for(int i=r;i>=0;i--)           //���һ�����ʺ���û�пո�����ǰ��r�õ���ֵ���ǵ�����������r-1 
//	{
//		printf("%s",a[i]);
//		if(i>0)printf(" ");
//	}
//	return 0;
// } 
 
 

//#include<stdio.h>
//#include<string.h>                                  //ans3
// 
//int main()
//{
//	char str1[90];
//	int num[90]= {},j=0;
//	gets(str);
//	int len=strlen(str);
// 
//	//num[]�����¼�ո��λ��,�ո�������ĸ�ǵ��ʵĿ�ʼ��ĸ 
//	for(int i=len-1; i>=0; i--)
//	{
//		if(str[i]==' ')
//		{
//			num[j++]=i;
//		}
//	}
//	
//	//��������ѭ��������� 
//	for(int k=0; k<j; k++)//k���j��λ�� 
//	{
//		if (k==0)//������һ������ 
//		{
//			for(int m=num[k]+1; m<len; m++)
//			{
//				printf("%c",str[m]);
//			}
//			printf(" ");
//		}
//		else//���м䵥�ʣ�������β�⣩��� 
//		{
//			for(int m=num[k]+1; m<num[k-1]; m++)
//			{
//				printf("%c",str[m]);
//			}
//			printf(" ");
//		}
//	}
//	for(int l=0; l<num[j-1]; l++)
//	{
//		printf("%c",str[l]);
//	}
//	return 0;
//}
 


                                                          //ans4
//#include<bits/stdc++.h>
//using namespace std;
//map<int,string> mp;
//int main()
//{
//	int cnt=0;
//	string str;
//	while(cin>>str)
//	{
//		mp[cnt++]=str;
//		char ch=getchar();
//		if(ch=='\n')break;
//	}
//	for(int i=cnt-1;i>=1;i--)cout<<mp[i]<<" ";
//	cout<<mp[0];
//	return 0;
// } 













//1010 һԪ����ʽ��

#include<stdio.h>
int main()
{
	int di,index;
	int count=0;
	while(scanf("%d %d",&di,&index)!=EOF)                 //ѧϰ���������ͽ������루^Z�� 
	{
		if(index)
		{
			if(count++) putchar(' ');
			printf("%d %d",di*index,index-1);
		}
	}
	if(count==0)printf("0 0");
	
	return 0;
}




//#include <iostream>
//using namespace std;
// 
//int main() {
//	int a, b;
//	int n = 0;
//	while (cin >> a >> b) {
//		a = a * b;
//		b -= 1;
//		n++;
//		if (n == 1 && a != 0) {
//			cout << a << ' ' << b;
//		} else if (n != 1 && a != 0) {
//			cout << ' ' << a << ' ' << b;
//		}
//		else if(n == 1 && a == 0)//����
//		{
//			cout<<0<<' '<<0;
//		}
//		if (cin.get() == '\n')
//		//cin.get()���ȡ�����������һ���ַ����ո�/���У�ֻ���������л�break�� 
//			break;
//	}
// 
//	return 0;
//}







