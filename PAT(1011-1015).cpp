//1011 A+B �� C

//2^31��Լ��10^9.331
//2^10��1024��ԼΪ10^3,��ԼΪ��10^3��^3=10^9
//ע�������ĿҪ��������� [-2��31�η�,2��31�η�] �ڵ� 3 ������ A��B �� C��
//���ж� A+B �Ƿ���� C��Ҳ����a,b,c�����������ᳬ��int�ķ�Χ����
//Ϊint�ķ�Χ��[-2��31�η�,2��31�η�-1] ������Ӧ���ó�����long long


//#include <stdio.h>
//int main()
//{
//    int n;
//    long long int a,b,c;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        scanf("%lld%lld%lld",&a,&b,&c);
//        if((a+b)>c)
//            printf("Case #%d: true\n",i);
//        else
//            printf("Case #%d: false\n",i);
//    }
//    return 0;
//}










//1012 ���ַ���



//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int num=0;
//	int a=0,b=0,c=0,e=0;
//	float sum=0,cnt=0;
//	float d=0.0;
//	int flag=1;
//	int c1=0,c2=0,c3=0,c4=0,c5=0;
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&num);
//		if(num%5==0&&num%2==0) 
//		{
//			a+=num;
//			c1++;
//		}
//		if(num%5==1) 
//		{
//			b+=num*flag;
//			flag*=-1;
//			c2++;
//		}
//		if(num%5==2)
//		{
//			c++;
//			c3++;
//		}
//		if(num%5==3)
//		{
//			sum+=num;
//			cnt++;
//			c4++;
//		}
//		if(num%5==4)
//		{
//			if(num>e)e=num;
//			c5++;
//		}
//	}
//	
////	printf("%d %d %d %.1f %d",a,b,c,sum/cnt,e);
//	if(c1>0)printf("%d ",a);
//	else printf("N ");
//	if(c2>0)printf("%d ",b);
//	else printf("N ");
//	if(c3>0)printf("%d ",c);
//	else printf("N ");
//	if(c4>0)printf("%.1f ",sum/cnt);
//	else printf("N ");
//	if(c5>0)printf("%d",e);
//	else printf("N");
//	return 0;
//}
//
////ע�⣺�ر�ϸ�ڣ������һ�����Ե㣨b���������0���ǲ����N����Ϊ������ǿ���Ϊ0�ģ���
////�����ǿ���ʹ��һ��check�����������ô���й�b����









//1013 ������



//#include<stdio.h>                               
//#include <stdbool.h>
//bool isSushu(int n)
//{
//	if(n==0||n==1)return false;
//	for(int i=2;i*i<=n;i++)
//	{
//		if(n%i==0)return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int a[100005];
//	int k=0;
////	for(int i=2;i<10000;i++)
////	{
////		if(isSushu(i))a[k++]=i;
////	}
//	int i=2;
//	while(1)
//	{
//		if(isSushu(i))a[k++]=i;
//		i++;
//		if(k==10000)break;                 //ע����10000�������������10000���ڵ����� 
//	}
//	int m,n;
//	scanf("%d %d",&m,&n);
//	int cnt=0;
//	for(int i=m-1;i<=n-1;i++)
//	{
//		cnt++;                                 //����Ҫ��cnt�Ž�ÿ��if�ֻҪÿ��ѭ����1���� 
//		if(i==n-1)printf("%d",a[i]);
//		else if(cnt%10==0)
//		{
//			printf("%d",a[i]);
//			printf("\n");
//		}
//		else printf("%d ",a[i]);
//		
//		
//	}
//	return 0;
//}











//1014 ����Ħ˹��Լ��


//#include<bits/stdc++.h> 
//using namespace std;
//map<char,string> mp;
//void init()
//{
//	mp['A']="MON";mp['B']="TUE";mp['C']="WED";mp['D']="THU";mp['E']="FRI";mp['F']="SAT";mp['G']="SUN";
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	init();
//	char a[65],b[65],c[65],d[65];
//	char xq,shi,fen;
//	int flag=0;
//	scanf("%s %s %s %s",a,b,c,d);
//	int len1=strlen(a),len2=strlen(c);
//	if(strlen(a)<strlen(b)) len1=strlen(b);
//	if(strlen(c)<strlen(d)) len2=strlen(d);
//	for(int i=0;i<len1;i++)
//	{
//		if(flag==0&&a[i]==b[i])
//		{
//			xq=a[i];
//			flag++;
//		 } 
//		if(flag==1&&a[i]==b[i])
//		{
//			shi=a[i];
//		}
//	} 
//	for(int i=0;i<len2;i++)
//	{
//		if(c[i]==d[i]) fen=i; 
//	} 
//	cout<<mp[xq]<<' ';
////	switch(xq)
////	{
////		case 'A':xq="MON";break;
////		case 'B':xq="TUE";break;
////		case 'C':xq="WED";break;
////		case 'D':xq="THU";break;
////		case 'E':xq="FRI";break;
////		case 'F':xq="SAT";break;
////		case 'G':xq="SUN";break;
////		//[Error] invalid conversion from 'const char*' to 'char' [-fpermissive]
////		//xq��char���͵ģ�ֻ�ܴ��浥���ַ�������ֱ�Ӵ洢�ַ��� 
////	}
//	
//	return 0;
// } 



                                                                     //ans1

//#include<iostream>
//#include<iomanip>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//
//int main()
//{
//	string s[4];
//	int n = 4, k = 0;
//	bool flag = true;
//
//	while (k < n) {
//		cin >> s[k];
//		k++;
//	}
//	int min2 = min(s[0].size(), s[1].size());
//
//	string week[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
//
//	for (int i = 0; i < min2; i++)
//	{
//		//�� 1 ����ͬ�� ��дӢ����ĸ
//		if (s[0][i] == s[1][i] && flag) 
//		{
//			if (s[0][i] > 64 && s[1][i] < 72) {
//				cout << week[s[0][i] - 65] << " ";
//				flag = false;
//			}
//		}
//		//�� 2 ����ͬ���ַ�����Χ�ǣ�0��9��A��N���ֱ��Ӧ0��23��
//		//����Ҫ����ע�⣬�ڶ��Եķ�ΧҪ�ڵ�һ�Եĺ���
//		else if (s[0][i] == s[1][i] && !flag) 
//		{
//			if (s[0][i] < 65)
//				cout << "0" << s[0][i] << ":";  
//			else if (s[0][i] >= 65 && s[0][i] <= 78) 
//				cout << s[0][i] - 55 << ":";
//			else
//				continue;
//
//			break;
//		}
//	}
//	
//		int min1 = min(s[2].size(), s[3].size());
//		//����
//		char m;
//		int mnum = 0;
//		for (int i = 0;i < min1;i++) {
//			if (s[2][i] == s[3][i]) {
//				if ((s[2][i] >= 'a' && s[2][i] <= 'z') || (s[2][i] >= 'A' && s[2][i] <= 'Z'))
//				{
//					m = s[0][i];
//					mnum = i;
//					break;
//				}
//			}
//		}
//
//		if ((9 >= mnum) && (mnum >= 0))
//			cout << "0" << mnum;
//		else cout << mnum;
//
//
//
//		return 0;
//	}



																								//ans2




//#include<bits/stdc++.h>
//using namespace std;
//char st[5][105];        //�����ά���������ַ� 
//int len[5];
//map<int,string> mp;
//void init()
//{	
//	mp[1]="MON",mp[2]="TUE",mp[3]="WED",mp[4]="THU",mp[5]="FRI",mp[6]="SAT",mp[7]="SUN";
//}
//int main()
//{	
//	init();
//	int dd=0,hh=0,rr=0;
//	for(int i=1;i<=4;i++)
//	{	scanf("%s",st[i]);	             //����scanf����˵��ո������ 
//		len[i]=strlen(st[i]);	
//	}	
//	bool flag1=true,flag2=true;	
//	for(int i=0;i<min(len[1],len[2]);i++)
//	{	char a,b;	
//		a=st[1][i];	
//		b=st[2][i];	
//		if(a==b&&a>='A'&&a<='G'&&flag1)
//		{		
//			dd=a-'A'+1,flag1=false;		
//			continue;		
//		}		
//		if(dd&&a==b&&flag2)
//		{		
//			if(a>='A'&&a<='N')
//			hh=a-'A'+10,flag2=false;		
//			else if(a>='0'&&a<='9') hh=a-'0',flag2=false;		
//		}	
//	}	
//	for(int i=0;i<min(len[3],len[4]);i++)
//	{	
//		char a,b;	
//		a=st[3][i];		
//		b=st[4][i];		
//		if(a==b&&((a>='a'&&a<='z')||(a>='A'&&a<='Z')))
//		{	
//			rr=i;		
//			break;		
//		}	
//	}	
//	cout<<mp[dd]<<" ";
//	printf("%02d:%02d",hh,rr);
//
//	return 0;
//}




//#include<bits/stdc++.h>
//using namespace std;
//char str[5][105];
//int len[5];
//map<int,string> mp;
//void init()
//{
//	mp[1]="MON",mp[2]="TUE",mp[3]="WED",mp[4]="THU",mp[5]="FRI",mp[6]="SAT",mp[7]="SUN";
//}
//int main()
//{
//	init();
//	int day=0,hour=0,fen=0;
//	for(int i=0;i<4;i++)
//	{
//		scanf("%s",str[i]);
//		len[i]=strlen(str[i]);
//	}
//
//	bool flag1=true,flag2=true;
//	for(int i=0;i<min(len[0],len[1]);i++)
//	{
//		if(flag1&&str[0][i]>='A'&&str[0][i]<='G'&&str[0][i]==str[1][i])
//		{
//			//int day=mp[str[0][i]-'A'+1];
//			//[Error] cannot convert 'std::map<int, std::basic_string<char> >::mapped_type {aka std::basic_string<char>}' to 'int' in initialization
//			day=str[0][i]-'A'+1,flag1=false;
//			continue;
//		}
//		if(!flag1&&flag2&&str[0][i]==str[1][i])
//		{
//			if(str[0][i]>='A'&&str[0][i]<='N')hour=str[0][i]-'A'+10,flag2=false;
//			else if(str[0][i]>='0'&&str[0][i]<='9')hour=str[0][i]-'0',flag2=false;
//			
//		//	flag2=0;
//		}
//		
//	}
//	
//	for(int i=0;i<min(len[2],len[3]);i++)
//	{
//		if(str[2][i]==str[3][i]&&((str[2][i]>='a'&&str[2][i]<='z')||(str[2][i]>='A'&&str[2][i]<='Z')))
//		{
//			//int fen=i;	
//			//	[Error] 'fen' was not declared in this scope  //�ֲ����������������if����� 
//			fen=i; 
//			break;
//		}
//	}
//	
////	printf("%s %02d:%02d",day,hour,fen);
//	//	[Error] cannot pass objects of non-trivially-copyable type 'std::string {aka class std::basic_string<char>}' through '...'
//	//string���Ͳ����������%s 
//	 
////	printf("%s %02d:%02d",day.c_str(),hour,fen);                 //����һ
////����������cout���string
//	cout<<mp[day]<<" ";
//	printf("%02d:%02d",hour,fen); 
//	return 0;
//}







//#include<bits/stdc++.h>
//using namespace std;
//char st[5][105];
//int len[5];
//map<int,string> mp;
//void init()
//{
//	mp[1]="MON",mp[2]="TUE",mp[3]="WED",mp[4]="THU",mp[5]="FRI",mp[6]="SAT",mp[7]="SUN";
//}
//int main()
//{
//	init();
//	int dd=0,hh=0,rr=0;
//	for(int i=1;i<=4;i++)
//	{
//		scanf("%s",st[i]);
//		len[i]=strlen(st[i]);
//	}
//	bool flag1=true,flag2=true;
//	for(int i=0;i<min(len[1],len[2]);i++)
//	{
//		char a,b;
//		a=st[1][i];
//		b=st[2][i];
//		if(a==b&&a>='A'&&a<='G'&&flag1)
//		{
//			dd=a-'A'+1,flag1=false;
//			continue;
//		}
//		if(dd&&a==b&&flag2)
//		{
//			if(a>='A'&&a<='N')hh=a-'A'+10,flag2=false;
//			else if(a>='0'&&a<='9')hh=a-'0',flag2=false;
//			
//		//	flag2=0;
//		}
//		
//	}
//	
//	for(int i=0;i<min(len[3],len[4]);i++)
//	{
//		char a,b;	
//		a=st[3][i];	
//		b=st[4][i];
//		if(a==b&&((a>='a'&&a<='z')||(a>='A'&&a<='Z')))
//		{			
//			rr=i;		
//			break;	
//		}
//	}
//	
//	cout<<mp[dd]<<" ";
//	printf("%02d:%02d",hh,rr); 
//	return 0;
//}















//1015 �²���

//#include<bits/stdc++.h>
//using namespace std;                              //ans1 
//struct node
//{
//	int id;
//	int de,cai;
//	int score;
//	int standard;
//	
//}a[100005],b[100005];
//bool cmp(node x,node y)
//{
//	if(x.standard!=y.standard)return x.standard>y.standard;
//	else if(x.score!=y.score)return x.score>y.score;
//	else if(x.de!=y.de)return x.de>y.de;    //�ܷ���ȣ������=�����
//	else return x.id<y.id; 
//	
//}
//int main()
//{
//	int n,l,h;
//	int cnt=0;
//	cin>>n>>l>>h;
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i].id>>a[i].de>>a[i].cai;
//		a[i].score=a[i].de+a[i].cai;
//		if(a[i].de>=l&&a[i].cai>=l)
//		{
//			b[++cnt].id=a[i].id;
//			b[cnt].de=a[i].de;
//			b[cnt].cai=a[i].cai;
//			b[cnt].score=a[i].score;
//			if(b[cnt].de>=h&&b[cnt].cai>=h) b[cnt].standard=3;
//			else if(b[cnt].de>=h&&b[cnt].cai<h) b[cnt].standard=2;
//			else if(b[cnt].de<h&&b[cnt].de>=b[cnt].cai) b[cnt].standard=1;
//			else b[cnt].standard=0;
//		}
//	}
//	cout<<cnt<<endl;
//	sort(b+1,b+cnt+1,cmp);
//	for(int i=1;i<=cnt;i++) 
//	{
//		cout<<b[i].id<<" "<<b[i].de<<" "<<b[i].cai<<endl;
//	}
//	
//	
//	return 0;
//}





#include<bits/stdc++.h>                     //ans2
using namespace std;
struct node
{
	int id;
	int flag;
	int de,cai;
	int score;
	int standard;
	
}a[100005];
bool cmp(node x,node y)                                //ѧϰ������������ 
{
	if(x.standard!=y.standard)return x.standard>y.standard;
	else if(x.score!=y.score)return x.score>y.score;
	else if(x.de!=y.de)return x.de>y.de;    //�ܷ���ȣ������=�����
	else return x.id<y.id; 
	
}
int main()
{
	int n,l,h;
	int cnt=0;
	cin>>n>>l>>h;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].id>>a[i].de>>a[i].cai;
		a[i].score=a[i].de+a[i].cai;
		a[i].flag=0;
		if(a[i].de>=l&&a[i].cai>=l)
		{
			cnt++;
			a[i].flag=1;
			if(a[i].de>=h&&a[i].cai>=h) a[i].standard=3;
			else if(a[i].de>=h&&a[i].cai<h) a[i].standard=2;
			else if(a[i].de<h&&a[i].de>=a[i].cai) a[i].standard=1;
			else a[i].standard=0;
		}
		else a[i].standard=-1;
	}
	cout<<cnt<<endl;
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++) 
	{
		if(a[i].flag==1)
		{
			cout<<a[i].id<<" "<<a[i].de<<" "<<a[i].cai<<endl;
		}
	}
	
	
	return 0;
}




































