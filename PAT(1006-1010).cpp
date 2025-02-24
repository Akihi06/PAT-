//1006 换个格式输出整数


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
//	for(int i=1;i<=ge;i++) cout<<i;          //注意这里是1到ge，因为是从1开始输出，不是0 
//	return 0;
//}










//1007 素数对猜想

//#include<bits/stdc++.h>                               //超时了 
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
//			for(int j=i+1;j<=n;j++)                    //这里没有必要全部来一遍，或者试试先把素数全部选出来 
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
//int isSushu(int n)  //判断一个正整数n是否为素数
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
//    int count = 0;  //素数对个数
//    int A[10000];  //A数组用来存储所有的素数
//    int k=0;
//    for(int i=2;i<=n;i++)  //计算从2到n的所有素数，保存在数组A中
//    {
//    	if(isSushu(i)==1)
//    	   A[k++]=i;
//	}
//	for(int i=0;i<k-1;i++)  //遍历A数组，若相邻两个素数之差为2则满足题意，count+1
//	{
//		if(A[i+1]-A[i]==2)
//		  count++;
//	}
//    cout<<count;
//}
	
 







//1008 数组元素循环右移问题



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
//	for(int i=n-m;i<n;i++) printf("%d ",a[i]);  //先输出最后面挪到前面的部分 
//	for(int i=0;i<n-m-1;i++) printf("%d ",a[i]);
//	printf("%d",a[n-m-1]);
//
//	return 0;
//}








//1009 说反话


//#include<stdio.h>
//#include<string.h>                           //ans1
// 
//int main()
//{
//	int num=0;
//	char ans[90][90];
//	while(scanf("%s",ans[num])!=EOF)               //学习这里的输入 //最后要Ctrl+Z结束输入 
//	//scanf读了一个单词，然后进入循环体 
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
//	for(int i=r;i>=0;i--)           //最后一个单词后面没有空格，所以前面r得到的值就是单词数，不用r-1 
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
//	//num[]数组记录空格的位置,空格后面的字母是单词的开始字母 
//	for(int i=len-1; i>=0; i--)
//	{
//		if(str[i]==' ')
//		{
//			num[j++]=i;
//		}
//	}
//	
//	//下面两个循环进行输出 
//	for(int k=0; k<j; k++)//k标记j的位置 
//	{
//		if (k==0)//输出最后一个单词 
//		{
//			for(int m=num[k]+1; m<len; m++)
//			{
//				printf("%c",str[m]);
//			}
//			printf(" ");
//		}
//		else//将中间单词（将除首尾外）输出 
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













//1010 一元多项式求导

#include<stdio.h>
int main()
{
	int di,index;
	int count=0;
	while(scanf("%d %d",&di,&index)!=EOF)                 //学习这里的输入和结束输入（^Z） 
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
//		else if(n == 1 && a == 0)//特判
//		{
//			cout<<0<<' '<<0;
//		}
//		if (cin.get() == '\n')
//		//cin.get()会读取输入流里的下一个字符（空格/换行，只当遇到换行会break） 
//			break;
//	}
// 
//	return 0;
//}







