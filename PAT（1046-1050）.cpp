//1046 ��ȭ


//#include<bits/stdc++.h>               ans1
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int a[105],a1[105],b[105],b1[105];
//	int ansa=0,ansb=0;
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i]>>a1[i]>>b[i]>>b1[i];
//		if(a1[i]==b1[i])continue;
//		else{
//			int c=a[i]+b[i];
//			if(a1[i]==c)ansb++;
//			else if(b1[i]==c)ansa++;
//			else continue;
//		}
//	}
//	cout<<ansa<<' '<<ansb; 
//	return 0;
// } 




//#include<bits/stdc++.h>             ans2
//using namespace std;
//int main()
//{
//	int t,suma=0,sumb=0;	
//	cin>>t;	
//	while(t--)
//	{	
//		int a,b,c,d;		
//		cin>>a>>b>>c>>d;		
//		if(b==a+c&&d!=a+c)
//		{		
//			sumb++;	
//		}	
//		else if(b!=a+c&&d==a+c)
//		{		
//			suma++;		
//		}	
//	}	
//	cout<<suma<<" "<<sumb;	
//	return 0;
//}








//1047 ���������


//#include<bits/stdc++.h>
//using namespace std;
//struct node
//{
//	int id;
//	int score;
//}a[1005];
//int temp[1005];                           //����ֱ�Ӷ����ȫ�ֵ� 
//bool cmp(node x,node y)
//{
//	return x.score>y.score;
//}
//int main()
//{
//	int n;
//	cin>>n;
////	int temp[1005]={0};                   //�����ֺ���Ҫ�ӵ����飬һ��Ҫ����ֵΪ0�������������������������� 
////	for(int i=0;i<n;i++)
//	for(int i=1;i<=n;i++)
//	{
//		int x;
//		cin>>x;
//		getchar();
//		int y,s;
//		cin>>y>>s;
//		temp[x]+=s;                    //�����ֺ���Ҫ�ӵ����飬һ��Ҫ����ֵΪ0�������������������������� 
//	 } 
//	
//	int cnt=0;
//	for(int i=1;i<=1000;i++)
//	{
//		if(temp[i]!=0)
//		{
//			a[++cnt].id=i;
//			a[cnt].score=temp[i];
//		}
//	 } 
//	sort(a+1,a+cnt+1,cmp);
////	for(int i=1;i<=cnt;i++)cout<<a[i].id<<" "<<a[i].score<<endl;
//	cout<<a[1].id<<' '<<a[1].score;
//	return 0;
//}







//1048 ���ּ���




//                                                                   //reverse��ʹ��
//
////1��ת���� 
////ͷ�ļ�
//#include <algorithm>
////ʹ�÷���
//reverse(a, a+n);//nΪ�����е�Ԫ�ظ���
//
// //2��ת�ַ���
// //�÷�Ϊ
//reverse(str.begin(), str.end());
// 
// 
// //ʾ������
// #include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//    string str = "abcdefg";
//    //1 ��ʾδ��ת���ַ���
//    cout << str << endl;
//    //2 ��ת���飬Ȼ����ʾ
//    reverse(str.begin(), str.end());
//    cout << str << endl;
//
//
//    return 0;
//}

 

//#include<bits/stdc++.h>                                           //ans1
//using namespace std;
//map<int,char>mp;
//void init()
//{
//	for(int i=0;i<=9;i++)mp[i]=i+'0';
//	mp[10]='J',mp[11]='Q',mp[12]='K';
//}
//int main()
//{
//	init();
//	char a[105],b[105],ans[105];
//	scanf("%s %s",a,b);
//	int lena=strlen(a),lenb=strlen(b);
//	reverse(a,a+lena);
//	reverse(b,b+lenb);
//	//����lenb���������ǿ���Ĭ����ֱ�������
//	//���ǵ�lena������ʱ�򣬲���ֱ���������Ϊ��ʵ����b�ĸ�λ��0�ģ�����
//	//b������ʱ��ҲҪ��a��0������aû��ֵ/�����ֵ 
////	for(int i=0;i<lenb;i++)
////	{
////		//if(i%2==1)
////		if(i%2==0) //�Ǳ��0��ʼ����λ��0������λ 
////		           //0  1  2  3  4                              //ע����������ż����Ǳ��ϵ 
////  		          //�� ż �� ż  �� 
////		{
////			ans[i]=mp[(a[i]-'0'+b[i]-'0')%13];
////		}
////		else
////		{
////			//ans[i]=(b[i]-a[i]+10)%10;
////			ans[i]=(b[i]-a[i]+10)%10+'0';  //ע��ans[]��char���͵� 
////		}
////		cout<<i<<" "<<a[i]<<" "<<b[i]<<" "<<ans[i]<<endl;
////	}
////	reverse(ans,ans+lenb);
////	for(int i=0;i<lenb;i++)cout<<ans[i];
//
//
//	int len=max(lena,lenb);
//	for(int i=0;i<len;i++)
//	{
//		int numA=i<lena?a[i]-'0':0;
//		int numB=i<lenb?b[i]-'0':0;
//		if (i%2==0)
//		{		
//			ans[i]=mp[(numA+numB)%13];		
//		}
//		else 
//		{		
//			ans[i]=(numB-numA+10)%10+'0';		
//		}
//	 } 
//	reverse(ans,ans+len);
//	for(int i=0;i<len;i++)cout<<ans[i];
////	puts(ans); 
//	return 0;
//}







                                                               //ans2
//#include<stdio.h>
//#include<string.h>
// 
//void rb(char a[]){
//    int n=strlen(a);
//    for(int i=0;i<n/2;i++){
//        int temp=a[i];
//        a[i]=a[n-i-1];
//        a[n-i-1]=temp;
//    }
//}
// 
//int main(){
// 
//    char a[105],b[105],d[105]={0};
//    scanf("%s%s",a,b);
//    int len1=strlen(a);
//    int len2=strlen(b);
//    int len;
//    if(len1>len2) len=len1;
//    else len=len2;
//    int c;
//    rb(a);
//    rb(b);
//    for(int i=0;i<len;i++){
//            if(i>=len1) a[i]='0';    //�����и����
//            if(i>=len2) b[i]='0';
// 
//            if(i%2==0){
//            c=((a[i]-'0')+(b[i]-'0'))%13;
//            if(c==10)   d[i]='J';
//            else if(c==11)   d[i]='Q';
//            else if(c==12)   d[i]='K';
//            else d[i]=c+'0';
//        }
// 
//        if(i%2==1){
//            c=(b[i]-'0')-(a[i]-'0');
//            if(c<0) c+=10;
//             d[i]=c+'0';
//        }
//    }
// 
//    rb(d);
//    for(int i=0;i<len;i++) printf("%c",d[i]);
// 
//return 0;
//}






//1049 ���е�Ƭ�κ�

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
////	double a[100005];
////	double sum=0.0,temp;
//	long double a[100005];
//	long double sum=0.0,temp;
//	for(int i=0;i<n;i++)
//	{
//		cin>>temp;
//		sum+=temp*(i+1)*(n-i);
//	}
////	cout<<sum;
////	printf("%.2lf",sum);
//	printf("%.2llf",sum);
//	return 0;
//}










//1050 ��������



//#include<bits/stdc++.h>                        //ans1 
//using namespace std;
////int solve(int x)
////{	
////	int ans=1;	
////	for(int i=2;i*i<=x;i++)
////	{		
////		if(x%i==0)
////		{		
////			ans=i;		
////		}	
////	}	
////	return ans;
////}
//int ans[10005][105];        //�����ȫ�ֱ����ô���డ 
//int main()
//{
//	int N;
//	cin>>N;
//	int a[10005];
////	int ans[10005][105]={0}; //����Ҫ�ж�û�б���ǵ��Ƿ���0����ȫ������Ϊ0�� 
//	int m,n;
////	n=solve(N),m=N/n;
//	for(int i=1;i*i<=N;i++)     //��1��ʼ������������2��ʼ���г�ʱ�����Ե�𰸴��� 
//	{
//		if(N%i==0)
//		{
//		//	m=i,n=N/m;
//			n=i,m=N/n;
//			//m����n��С 
//		}
//	}
////	for (n = sqrt(N); n >= 1; n--)  //�����ң������һᳬʱ 
////	{
////		if (N % n == 0) 
////		{
////			m = N / n;
////			break;
////		}
////	}
//
//	for(int i=0;i<N;i++)
//	{
//		cin>>a[i];
//	}
//	sort(a,a+N);//���� 
//	reverse(a,a+N);
//	int x=0,y=-1;
//	int cnt=0;
//	while(cnt<N)
//	{
//		while(ans[x][y+1]==0&&y+1<n) ans[x][++y]=a[cnt++];         //ans[x][y],�����ƶ���y�仯������ 
//		while(ans[x+1][y]==0&&x+1<m) ans[++x][y]=a[cnt++];
//		while(ans[x][y-1]==0&&y-1>=0) ans[x][--y]=a[cnt++];		
//		while(ans[x-1][y]==0&&x-1>=0) ans[--x][y]=a[cnt++];
//	}
//	for(int i=0;i<m;i++)
//	{	
//		for(int j=0;j<n-1;j++)
//		{		
//			cout<<ans[i][j]<<" ";	
//		}
//		cout<<ans[i][n-1]<<endl;
//	}
//	return 0;
//}





//#include<bits/stdc++.h>                 //ans2 
//using namespace std;
//int ans[10005][105],a[10005],n,m;
//int solve(int x)
//{	
//	int ans=1;	
//	for(int i=2;i*i<=x;i++)
//	{	
//		if(x%i==0)
//		{		
//			ans=i;		
//		}	
//	}	
//	return ans;
//}
//bool flag[10005][105];
//int dx[5]={0,1,0,-1},	dy[5]={1,0,-1,0};
//void dfs(int x,int y,int cnt,bool temp)
//{
//	if(flag[x][y]) flag[x][y]=false;	
//	ans[x][y]=a[cnt];	
//	int i;	
//	if(temp&&x-1>=1&&x-1<=m&&y>=1&&y<=n&&flag[x-1][y]) dfs(x-1,y,cnt+1,1);	
//	else temp=false;	
//	for(i=0;i<4;i++)
//	{	
//		int xx=x+dx[i];		
//		int yy=y+dy[i];		
//		if(i==3) temp=true;		
//		if(xx>=1&&xx<=m&&yy>=1&&yy<=n&&flag[xx][yy]) dfs(xx,yy,cnt+1,temp);	
//	}
//}
//int main()
//{
//	int N;	
//	cin>>N;	
//	memset(flag,true,sizeof(flag));	
//	n=solve(N),m=N/n;
//	for(int i=1;i<=N;i++) cin>>a[i];	
//	sort(a+1,a+N+1);	
//	reverse(a+1,a+N+1);	
//	dfs(1,1,1,false);	
//	for(int i=1;i<=m;i++)
//	{	
//		for(int j=1;j<n;j++)
//		{		
//			cout<<ans[i][j]<<" ";	
//		}	
//		cout<<ans[i][n]<<endl;	
//	}	
//	return 0;
//}






























































