//1016 ����A+B


//#include<stdio.h>
//int main()
//{
//	int a,b,da,db,cnta=0,cntb=0,pa=0,pb=0;  //long long int ������ 
//	scanf("%d %d %d %d",&a,&da,&b,&db);
//	while(a)
//	{
//		if((a%10)==da) //cnta++;
//		pa=pa*10+da; 
//		a/=10;
//	}
//	while(b)
//	{
//		if((b%10)==db)//cntb++;
//		pb=pb*10+db; 
//		b/=10;
//	}
////	for(int i=1;i<=cnta;i++)
////	{
////		pa*=10;
////		pa+=da;
////	}
////	for(int i=1;i<=cntb;i++)
////	{
////		pb*=10;
////		pb+=db;
////	}
//	printf("%d",pa+pb);
//	return 0;
// } 




//1017 A����B


//#include<bits/stdc++.h>                                        //ans1 
//using namespace std;
//int main()
//{
////	string a[1005];
//	char a[1005];
//	int b;
//	int q[1005];
//	//��ֱ����int������char��q�����ǰ���һλһλ��������ÿһλ�����ᳬ��int�ķ�Χ
//	//��intҲ������ 
////	int r=0;
//	scanf("%s",a);
//	cin>>b;
//	int temp=0,cnt=0;
//	for(int i=0;i<strlen(a);i++)
//	{
//		temp=temp*10+(a[i]-'0');
////		q[cnt++]=temp/b;
//		q[++cnt]=temp/b;
//		temp%=b;
//	}
////	int i=0;
////	if(q[i]==0&&cnt!=1)i++;//ȥ��ǰ��0 
//	int i=1;
//	if(q[i]==0&&cnt!=1)i++;
//	//��0��������ߣ��Һ��滹���������֣�cnt��=1�� 
//	//������0101����һ��0��ȥ�����ڶ���0��Ȼ�������������㣬�����0ǰ���1�����ѭ���� 
//	//�����ڳ���Ϊ��λ���ĳ�����������ֻ��һ��0 
//	for(;i<=cnt;i++)
//	{
//		cout<<q[i];
//	 } 
//	cout<<" "<<temp; 
//	return 0;	
//}



                                                                  //ans2
//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//    char A[1000];
//    int B;
// 
//    scanf("%s%d", A, &B);
// 
//    int R = 0;
// 
//    int i = 0;
//    int flag = 0;
//    int temp_Q = 0;
//    
//    while (A[i] != '\0')
//    {
//        temp_Q = R + ((A[i]) - '0');
//        R = temp_Q % B;
// 
//        temp_Q = temp_Q / B;
//        R = R * 10;
// 
//        i++;
// 
//        if (!flag && temp_Q == 0)
//        {                                  //ȥ��ǰ��0 
//            continue;
//        }
//        printf("%d", temp_Q);
//        
//        flag = 1;
//    }
// 
// 
//    if(!flag)
//        printf("%d", 0);
//    
// 
// 
//    printf(" %d", R / 10);   //���һ��ѭ��r���ǡ�10��������� 
//} 








//1018 ���Ӽ�����




//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int a1=0,a2=0,a3=0,b1=0,b2=0,b3=0;
//	int ac=0,aj=0,ab=0,bc=0,bj=0,bb=0;
//	char a,b;
//	for(int i=1;i<=n;i++)
//	{
//		cin>>a>>b;
//		if(a=='C')
//		{
//			if(b=='C') a2++,b2++;
//			else if(b=='J')a1++,b3++,ac++;
//			else a3++,b1++,bb++;
//		 } 
//		 else if(a=='J')
//		 {
//			if(b=='C')a3++,b1++,bc++;
//			else if(b=='J')a2++,b2++;
//			else  a1++,b3++,aj++;
//		 }
//		 else// if(a=='B')
//		 {
//		 	if(b=='C') a1++,b3++,ab++;
//			else if(b=='J')a3++,b1++,bj++;
//			else a2++,b2++;
//		 }
//	}
//	cout<<a1<<" "<<a2<<" "<<a3<<endl;
//	cout<<b1<<" "<<b2<<" "<<b3<<endl;
//	
//	if(ac>=aj&&ac>ab)cout<<'C'<<" ";
//	else if(aj>ac&&aj>ab)cout<<'J'<<" ";
//	else if(ab>=ac&&ab>=aj)cout<<'B'<<" ";
//	
//	if(bc>=bj&&bc>bb)cout<<'C';                      //������� 
//	else if(bj>bc&&bj>bb)cout<<'J';                 //Ϊɶ������c>=j,j>=c�͹����� 
//	else if(bb>=bc&&bb>=bj)cout<<'B';                 //���һ�ֶ�ûӮ�����B 
//	                                                //����ⲻΨһ�����������ĸ����С�Ľ� 
//	return 0;
// } 



//#include<stdlib.h>
//#include<iostream>
//#include<stdio.h>
//#include<string.h>                                 //ans2 
//#include<map>
//#include<set>
//#include<vector>
//#include<algorithm>
//#include<utility>
//using namespace std;
//int judge(char a,char b)
//{
//    switch (a)
//    {
//    case 'B':                                    //switch������char�� 
//        if(b=='B')return 3;
//        else if(b=='C')return 1;
//        else return 2;
//        break;
//    case 'C':
//        if(b=='C')return 3;
//        else if(b=='J')return 1;
//        else return 2;
//        break;
//    case 'J':
//        if(b=='J')return 3;
//        else if(b=='B')return 1;
//        else return 2;
//        break;
//    }
//    return 4;
//}
//int main()
//{
//#ifdef ONLINE_JUDGE
//#else 
//    freopen("in.txt","r",stdin);
//#endif
//char a,b;
//int n;
//int x[3],y[3];memset(x,0,sizeof(x));memset(y,0,sizeof(y));
//map<char,int>mp;map<int,char>mp1;
//mp['B']=1;mp1[1]='B';
//mp['C']=2;mp1[2]='C';
//mp['J']=3;mp1[3]='J';
//int m[7];memset(m,0,sizeof(m));
//cin>>n;
//while (n--)
//{
//    cin>>a>>b;
//    switch(judge(a,b))
//    {
//        case 1:
//            x[0]++;y[2]++;
//            m[mp[a]]++;
//        case 2:
//            x[2]++;y[0]++;
//            m[mp[b]+3]++;
//            break;
//        case 3:
//            x[1]++;y[1]++;
//            break;
//    }
//}
// int i,max=0, s=-1;
//    cout<<x[0]<<' '<<x[1]<<' '<<x[2]<<endl;
//    cout<<y[0]<<' '<<y[1]<<' '<<y[2]<<endl;
//   for(i=1;i<=3;i++)
//    {   
//        if(max<m[i]){max=m[i];s=i;}
//    }
//    if(max!=0)cout<<mp1[s]<<' ';else cout<<"B ";
//    max=0;
//for(i=1;i<=3;i++)    
//        if(max<m[i+3]){max=m[i+3];s=i;}
//if(max!=0)cout<<mp1[s]<<endl;else cout<<"B"<<endl;
//return 0;
//}














//1019 ���ֺڶ�

//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
////	char a[5],b[5];
//	int a[5];
//	int n;
//	cin>>n;
//	for(int i=1;i<=4;i++)
//	{
//		a[i]=n%10;
//		n/=10;
//	}
////	sort(a+1,a+5,cmp);
//	
//	while(1)
//	{
//		sort(a+1,a+5);//sort Ĭ������ 0 1 2 3
//		int maxn=0,minn=0; 
////		if(a[1]==a[2]&&a[1]==a[3]&&a[1]==a[4])printf("%04d - %04d = %04d",a[1],a[1],a[1]);
//		for(int i=1;i<=4;i++)minn=minn*10+a[i];
//		for(int i=4;i>=1;i--)maxn=maxn*10+a[i];
//		int ans=maxn-minn;
//		printf("%04d - %04d = %04d\n",maxn,minn,ans);   //%04d��֤���Ҳ����0000 
////		if(ans==6174)break;
//		if(ans==6174||ans==0) break;
//		for(int i=1;i<=4;i++)
//		{
//			a[i]=ans%10;
//			ans/=10;
//		}
//	}
//	return 0;
// } 









//1020 �±�



#include<bits/stdc++.h>

using namespace std;
struct node
{
	float kucun;
	float jiege;
	float liyi;
}a[1000];
bool cmp(node x,node y)
{
	return x.liyi>y.liyi;
}
int main()
{
	int n,d;
	cin>>n>>d;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].kucun;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].jiege;
		a[i].liyi=a[i].jiege/a[i].kucun;
	}
	sort(a+1,a+n+1,cmp);    //���潵�� 
//	if(a[1].kucun>=n) printf("%.2f",n*a[1].liyi);
//	else if(a[1].kucun<n&&(a[1].kucun+a[2].kucun)>=n)
//		printf("%.2f",a[1].jiege+(n-a[1].kucun)*a[2].liyi);
//	else if
	int i=1;
	float lirun=0.0;
//	while(1)
//	{                                         //�δ��󣺳�ʱ�ˡ������������������ر�󣬱����п�����while��1��û�취���� 
//			if(a[i].kucun>=d) 
//			{
//				lirun+=d*a[i].liyi;
//				break;
//			//	printf("%.2f",lirun);
//			}
//			else 
//			{
//				lirun+=a[i].jiege;
//				d=d-a[i].kucun;
//				i++;
//			}
//	}
	for(int i=1;i<=n;i++)
	{
		if(a[i].kucun>=d) 
			{
				lirun+=d*a[i].liyi;
				break;
			//	printf("%.2f",lirun);
			}
			else 
			{
				lirun+=a[i].jiege;
				d=d-a[i].kucun;
			}
	}
		printf("%.2f",lirun);
	return 0;
}

































































