////1001 �����˲�������(3n+1)����
//
//#include<stdio.h>
//int main()
//{
//	int n;
//	int ans=0;
//	scanf("%d",&n);
//	while(n!=1)
//	{
//		if(n%2==0) 
//		{
//			n/=2;
//			ans++;
////			continue;
//		}
//		else
//		{
//			n=(3*n+1)/2;
//			ans++;
////			continue;
//		}
//	}
//	printf("%d",ans);
//	return 0;
// } 







//1002 д�������            ans1 


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[105];
//	int sum=0,count=0;
//	int num[100];
////	char a[10000]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"}; 
////   [Error] too many initializers for 'char [100]'  �ռ�ԶԶ������������������ʾ��ʼ��ֵ̫�࣬�޷����䶨��������С 
// //lingռ��5���ֽڣ�����'\0'�� 
//	char a[][5]= {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
//	while(scanf("%s",str)!=EOF);
//	for(int i=0;i<strlen(str);i++)
//	{
////		sum+=str[i];
//		sum+=str[i]-'0';
//	}
//	while(sum)
//	{
//		num[count++]=sum%10;
//		sum/=10;
//	}
//	for(int j=count-1;j>=1;j--)
//		printf("%s ",a[num[j]]);
//	printf("%s",a[num[0]]);
//	
//	
//	return 0;
//}

//                                                       ans2

//#include<bits/stdc++.h>
//using namespace std;
//map<int,string> mp;
//char st[105];
//int b[1005];
//void init()
//{
//	mp[1]="yi",mp[2]="er",mp[3]="san",mp[4]="si",mp[5]="wu",
//	mp[6]="liu",mp[7]="qi",mp[8]="ba",mp[9]="jiu",mp[0]="ling";
//}
//int main()
//{
//	init();
//	scanf("%s",st);
//	int sum=0;
//	for(int i=0;i<strlen(st);i++)
//	{
//		sum+=st[i]-'0';
//	}
//	int cnt=0;
//	while(sum)
//	{
//		b[cnt++]=sum%10;    //b[++cnt]=ans%10;
//		sum/=10;
//	}
//	for(int i=cnt-1;i>=1;i--)     //for(int i=cnt;i>=2;i--)
//	{
//		cout<<mp[b[i]]<<" ";
//	}
//	cout<<mp[b[0]];              //cout<<mp[b[1]];
//	return 0;
//}







//1003 ��Ҫͨ����



//#include<stdio.h>
// 
//int main(void) {
//    int n, k, flag;
//    char ch;
//    
//    scanf("%d", &n);
//    getchar();    //��������scanf��Ļس���
//    while ( n-- ) {
//    	int a[3] = {0};    //ÿ�ֶ�Ҫ�Ѹ��������㡣
//    	k = 0, flag = 1;
//        /*��P��TΪ�ָ�㣬ͳ��Pǰ��PT֮�䡢T���A�ĸ���*/
//    	while ( ( ch = getchar() ) != '\n' ) {    //���س�˵��һ������������ϡ�
//            if ( ch == 'A' )	a[k]++;    //ͳ��Pǰ��A�ĸ���������a[0].
//            else if ( ch == 'P' && k == 0 )	k = 1;    //ͳ��PT֮���A�ĸ���������a[1].
//            else if ( ch == 'T' && k == 1 )	k = 2;    //ͳ��T���A�ĸ���������a[2].
//            else    flag = 0;    //����PAT֮����ַ������flagΪ0.
//        }
//        /*�Ƿ���PAT��Ϊ���ַ� && ��û��T && PT֮����û��A && PǰA��PT֮��A == T��A*/
//        if ( flag && k == 2 && a[1] && a[0] * a[1] == a[2] )	printf("YES\n");
//        else	printf("NO\n");
//    }
//	
//    return 0;
//}









//1004 �ɼ�����
////#include<bits/stdc++.h>
//#include<iostream>
//#include <algorithm>
//                                            //ans1
//using namespace std;
////#include<stdio.h>
//struct node
//{
//	char name[15];
//	char xuehao[15];
//	int score;
//	
//}student[1005];
//
//bool cmp(node x,node y)                 //ע�ⲻ��node.x��node.y 
//{
//	return x.score>y.score;
//}
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++)
//	{
//		scanf("%s %s %d",student[i].name,student[i].xuehao,&student[i].score);
//	}
//	sort(student,student+n,cmp);
//	printf("%s %s\n",student[0].name,student[0].xuehao);
//	printf("%s %s",student[n-1].name,student[n-1].xuehao);
//	return 0;
//}




//#include<bits/stdc++.h>                             //ans2
//using namespace std;
//struct node
//{	string name;	
//	string id;
//	int score;
//};
//	node stu[1005];
//bool cmp(node x,node y)
//{
//	return x.score>y.score;
//}
//int main()
//{	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{	
//		cin>>stu[i].name>>stu[i].id>>stu[i].score;	
//	}
//		sort(stu+1,stu+n+1,cmp);	
//		cout<<stu[1].name<<" "<<stu[1].id<<endl;	
//		cout<<stu[n].name<<" "<<stu[n].id<<endl;	
//		return 0;
//}










//1005 ����(3n+1)����

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[105];
	int vis[100005];
	int n;
	int x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; 
	}
	for(int i=0;i<n;i++)
	{
		int x=a[i];
		while(x!=1)
		{
		//	if(a[i]==1)break;
			if(x%2==0){
				x=x/2;
				if(vis[x]==1){
				break;
			}
			vis[x]=1;
		}
		else
		{
			x=(x*3+1)/2;
			if(vis[x]==1){
				break;
			}
			vis[x]=1;
		}
		}
	}
	sort(a,a+n);//Ĭ������
	int t=0;
	for(int i=n-1;i>=0;i--)                //ע��n-1��i-- 
	{
		if(vis[a[i]]==0)
		{
			if(t==0)
			{
				cout<<a[i];
				t=1;
			}
			else
			{
				cout<<" "<<a[i];
			}
		}
	 } 
	return 0;
 } 
 
























