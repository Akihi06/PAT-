//1051 �����˷�


//#include<bits/stdc++.h>             //ans1 
//using namespace std;
//int main()
//{
//	double r1,p1,r2,p2;
//	cin>>r1>>p1>>r2>>p2;
//	double a,b;
//	a=cos(p1)*cos(p2)-sin(p1)*sin(p2);	
//	b=cos(p1)*sin(p2)+cos(p2)*sin(p1);
////�״�㣺����2λ����C/C++�ﱣ��С��λ�����ǰ������������ԭ����У����Ե�ʵ�����鲿��(-0.005,0)ʱ�����-0.00��
////��-0.00��Ȼ�ǲ�����ģ�Ӧ�����0.00��ͬ���鲿Ӧ�����0.00i����
//	a*=r1*r2;
//	b*=r1*r2;
//	if(a>-0.005&&a<0)	
//		cout<<"0.00";	
//	else
//	{	
//		printf("%.2lf",a);	
//	}	
//	if(b>-0.005&&b<0)
//		cout<<"+0.00i";
//	else if(b<=-0.005)
//		printf("%.2lfi",b);  //����ֱ��������� 
//	else 
//		printf("+%.2lfi",b);
//	return 0;
//}





//#include <iostream>                          //ans2 
//#include<cmath>
//#include<stdio.h>
//using namespace std;
//
//int main()
//{
//    double R1,P1,R2,P2,a,b;
//    cin>>R1>>P1>>R2>>P2;
//    a=R1*R2*(cos(P1)*cos(P2)-sin(P1)*sin(P2));
//    b=R1*R2*(cos(P1)*sin(P2)+sin(P1)*cos(P2));
//    //���Ե�2��3��ע���
//    if(abs(a)<0.05)
//        a=0;
//    if(abs(b)<0.05)
//        b=0;
//    if(b>=0)
//        printf("%.2f+%.2fi\n",a,b);
//    else
//        printf("%.2f%.2fi\n",a,b);
//    return 0;
//}






//1052 ������


//#include<bits/stdc++.h>
//using namespace std;
//vector<string> a[5];
////������ÿ��Ԫ�ص������� vector<string>��
////������a��ÿ��Ԫ�ر�������һ�����Դ洢����ַ����Ķ�̬���� 
//int main()
//{
//	for(int i = 1; i <= 3; i++)  //�� �� �� 
//	{
//		string s;
//		getline(cin, s);
//		int len = s.length();
//		string temp;
//		for(int j = 0; j < len; j++)
//		{
//			if(s[j] == '[')
//			{
//				temp.clear();//clear������������ַ����е������ַ���ʹ�䳤�ȱ�Ϊ0 
//				while(j<len&&s[j+1]!=']')
//				{
//					j++;	
//					temp+=s[j];			
//				}
//			}		
//			if(s[j] == ']')
//			{
//				a[i].push_back(temp);//��vector��ĩβ���һ��Ԫ�� 
//			}
//		}
//	}
//	int t;
//	cin >> t;
//	for(int i = 1; i <= t; i++)
//	{
//		int x, y, z, k, m;	 	
//		cin >> x >> y >> z >> k >> m;
//		if(x <= 0 || x > a[1].size() || y <= 0 || y > a[2].size() ||z <= 0 || z > a[3].size() || k <= 0 || k > a[2].size() ||m <= 0 || m > a[1].size()) 
//		{
//			cout << "Are you kidding me? @\\/@" << endl;
//		} 
//		else 
//		{
//			cout << a[1][x - 1] << '(' << a[2][y - 1] << a[3][z - 1]<< a[2][k - 1] << ')' << a[1][m - 1] << endl;
//			//�����Ǵ�0��ʼ�� 
//		}
//	}
//	return 0;
//}










//1053 ס��������



//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	//int n,e,d,may=0,sure=0,k;
//	double n,e,d,may=0,sure=0,k;
//	double x; 
//	cin>>n>>e>>d;
//	for(int i=0;i<n;i++)
//	{
//		cin>>k;
//		int cnt=0;
//		for(int i=1;i<=k;i++)
//		{
//			cin>>x;
//			if(x<e)cnt++;
//		}
//		if(cnt*2>k)
//		{
//			if(k>d)sure++;
//			else may++;
//		}
//	}
//	double ans1=may*1.0*100/n;                    //*100Ŷ 
//	double ans2=sure*1.0*100/n;
//	printf("%.1lf%% %.1lf%%",ans1,ans2);
//	
//	return 0;
// } 







//1054 ��ƽ��ֵ



//#include<bits/stdc++.h>
//using namespace std;
//double ans;
//bool check(string s)
//{
//	ans=0;
//	int len=s.size();
//	//��C++�У�s.size()�� s.length()�����ڻ�ȡstring���Ͷ���s�ĳ��ȣ�Ҳ�����ַ������ַ��ĸ��� 
//	int flag=1,pointcnt=0,wz;
//	bool temp=false;
//	if(s[0]=='-')flag=-1;
//	for(int i=(flag==-1?1:0);i<len;i++)
//	{
//		if(!(s[i]>='0'&&s[i]<='9')&&s[i]!='.')//����ǳ���'.'֮����ַ� 
//		{
//			return false;
//		}
//		if(s[i]>='0'&&s[i]<='9') 
//		{
//			if(!temp)     //û��С���� 
//			{
//				ans=ans*10+s[i]-'0';
//			}
//			else       //��С���� 
//			{
//				if(i-wz>2)return false;
//				ans+=(s[i]-'0')/pow(10,i-wz);
//				//3.14
//				//3û������С���㣬ֱ��Ϊ3��������С���㣬��¼λ�ã�i=2���ַ��ǡ�1����ans=3+1/10=3.1 
//			}
//		}
//		if(s[i]=='.')
//		{
//			pointcnt++;
//			wz=i;
//			if(pointcnt>1)return false;
//			temp=true;   //��С���� 
//		}
//	 } 
//	ans=flag*ans;	
//	if(ans>1000||ans<-1000) return false;	
//	else return true;
//}
//int main()
//{
//	int n,cnt=0;
//	double sum=0.0;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		string s;
//		cin>>s;
//		if(check(s))
//		{
//			sum+=ans;//ans��ȫ�ֱ��������к��������Զ������и��� 
//			cnt++;
//		}
//		else
//		{
//			cout<<"ERROR: "<<s<<" is not a legal number"<<endl;
//		}
//	}
//	if(cnt!=0)
//	{
//		if(cnt!=1) printf("The average of %d numbers is %.2lf",cnt,sum/cnt);
//		else printf("The average of %d number is %.2lf",cnt,sum/cnt);
//	}
//	else printf("The average of 0 numbers is Undefined\n");
//	
//	return 0;
//}














//1055 ������


#include<bits/stdc++.h>
using namespace std;
struct node
{
	string name;
	int h;
}a[10005];
bool cmp(node x,node y)
{
	if(x.h!=y.h)return x.h>y.h;
	else return x.name<y.name;
}
map<int,string> mp;
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		//scanf("%s %d",a[i].name,&a[i].h);
		//string���Ͳ�����scanf�е�%s��char���ͣ� 
		cin>>a[i].name>>a[i].h;
	}
	sort(a+1,a+n+1,cmp);
	int t,m=n/k,cnt=0;
	//mΪÿ�ŵ�����
	//tΪÿ��ʵ�ʵ��������Ƿ�Ϊ��һ�������� 
	for(int i=1;i<=k;i++) //��k�� 
	{	
		if(i==1) t=n%k+m;	//�����վ���һ��	
		else t=m;		
		int wz=t/2+1;     //�����վ�м�	
		if(t%2==1)
		{		
			mp[wz]=a[++cnt].name;			
			int len=0;			
			while(len<(t-1)/2)
			{			
				len++;				
				mp[wz-len]=a[++cnt].name;				
				mp[wz+len]=a[++cnt].name;		
			}		
		}		
		else
		{		
			mp[wz]=a[++cnt].name;			
			int len=0;			
			while(len<(t-1)/2)
			{			
				len++;				
				mp[wz-len]=a[++cnt].name;				
				mp[wz+len]=a[++cnt].name;		
			}			
			mp[wz-len-1]=a[++cnt].name;	
			// 1 2 3 4 5 6
			// 3 2 1 0 1 2
		}		
		for(int j=1;j<t;j++)
		{		
			cout<<mp[j]<<" ";		
		}	
		cout<<mp[t]<<endl;
	}
	return 0;
}






























































