//1031 �������֤


//#include<bits/stdc++.h>                                           ans1 
//using namespace std;
//char a[1005];
//char b[100][20];
//map<int,char> mp;
//int point[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//void init()
//{
//	mp[0]='1',mp[1]='0',mp[2]='X',mp[3]='9',mp[4]='8',mp[5]='7';
//	mp[6]='6',mp[7]='5',mp[8]='4',mp[9]='3',mp[10]='2';
// } 
//int main()
//{
//	init();
//	int n;
//	cin>>n;
//	int flag=0;
//	while(n--)
//	{
//		int sum=0;
//		scanf("%s",a);
//		int len=strlen(a);
//		for(int i=0;i<=17;i++)
//		{
//	//		sum+=a[i]*point[i];
//			sum+=(a[i]-'0')*point[i];                             //a[]	��char���͵ģ��������ǵ�Ҫ -'0'
//		}
//		sum%=11;
//		if(mp[sum]!=a[len-1])
//		{
//			flag++;
//			for(int i=0;i<=17;i++)     //��18λ 
//			{
//				b[flag][i]=a[i];
//			}
//		}
//	}
//	
//	
//	if(!flag)cout<<"All passed";
//	
//	else{
//		for(int i=1;i<=flag;i++)
//			{
//				cout<<b[i]<<endl;
//			}
//	}
//	
//	return 0;
//}



//#include<bits/stdc++.h>                                                 //ans2
//using namespace std;
//char a[1005];
//int point[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//map<int,char> mp;
//void init()
//{	mp[0]='1',mp[1]='0',mp[2]='X',mp[3]='9',mp[4]='8',mp[5]='7',mp[6]='6';
//	mp[7]='5',mp[8]='4',mp[9]='3',mp[10]='2';
//}
//bool isdigit(char x)
//{	if(x>='0'&&x<='9') return true;	
//	else return false��
//}
//int main()
//{	
//	init();	
//	int t;	
//	cin>>t;	
//	bool flag=false;	
//	while(t--)
//	{		
//		bool di=true;		
//		int sum=0;		
//		scanf("%s",a);		
//		int len=strlen(a);		
//		for(int i=0;i<len-1;i++)
//		{		
//			if(!isdigit(a[i]))
//			{			
//				di=false;			      //ǰ17λ�Ƿ���ڷ������ַ� 
//			}			
//			sum+=(a[i]-'0')*point[i];	
//		}		
//		sum%=11;		
//		if(mp[sum]!=a[len-1]||!di)
//		{			
//			for(int i=0;i<len;i++) cout<<a[i];			
//			cout<<endl;			
//			flag=true;		
//		}	
//	}	
//	if(!flag) cout<<"All passed"<<endl;	
//	
//	return 0;
//}




//#include <bits/stdc++.h>                                         //ans3
//using namespace std;
//int main (void){
//    int cnt[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//    string M={'1','0','X','9','8','7','6','5','4','3','2'};
//    int n;
//    cin>>n;
//    int f=0;
//    while(n--){
//        string num;
//        cin>>num;
//        int sum=0;
//        int flag=1;
//        for(int i=0;i<17;i++)
//		{
//            if(num[i]>='0'&&num[i]<='9'){
//                sum=sum+cnt[i]*(num[i]-'0');
//            }
//			else{
//                flag=0;
//                f=1;
//                break;
//            }
//        }
//        
//        if(flag==0){
//            cout<<num<<endl;
//        }
//		else{
//            sum%=11;
//            if(M[sum]!=num[17]){
//                cout<<num<<endl;
//                f=1;
//            }
//        }
//    }
//    if(f==0){
//        cout<<"All passed";
//    }
//    return 0;
//}










//1032 �ھ�������ļ�ǿ


//#include<bits/stdc++.h>
//using namespace std;
////int a[100005];
//struct node
//{
//	int id,score;
//}sch[100005];
//bool cmp(node x,node y)
//{
//	return x.score>y.score;
//}
//int main()
//{
//	int n,maxn=0;
//	int a[100005]={0}; //��ʼ��Ϊ0������ֱ�ӷ���162�У�Ĭ��Ϊ0 
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		int x,y;
//		cin>>x>>y;
//		a[x]+=y;
//		maxn=max(x,maxn);
//	}
//	for(int i=1;i<=maxn;i++)
//	{
//		sch[i].id=i;
//		sch[i].score=a[i];
//	}
//	sort(sch+1,sch+maxn+1,cmp);
//	cout<<sch[1].id<<" "<<sch[1].score;
//	return 0;
//}


//#include <cstdio>
//#define MAXN 100002
//using namespace std;
//int main()
//{
//    int n,sum[MAXN] = {0};//����sum[]�±�ΪѧУ���
//    scanf("%d",&n);
//    int maxnum = 1;//�����
//    for(int i = 0; i < n; i++){
//        int num,score;
//        scanf("%d%d",&num,&score);
//        sum[num] += score;//���Ϊnum��ѧУ���ܷ��ۼ�
//        if(maxnum < num){
//            maxnum = num;//���������
//        }
//    }
//    int maxs,maxn;//maxsΪ����ܷ֣�maxnΪ����ֶܷ�Ӧ��ѧУ���
//    maxs = sum[maxnum];//����ֳܷ�ʼ��Ϊ�����ѧУ���ܷ�
//    maxn = maxnum;//ѧУ��ų�ʼ��
//    for(int i = 1; i <= maxnum; i++){//�����ܷ���ߵ�ѧУ���
//        if(maxs < sum[i]){
//            maxs = sum[i];//��������ܷ�
//            maxn = i;//��������ܷ�ѧУ�ı��
//        }
//    }
//    printf("%d %d",maxn,maxs);
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int n,max=0;
//	scanf("%d",&n);
//	int a[n+1]= {0},temp,score;
//	for (int i=1; i<n+1; i++) {
//		scanf("%d %d",&temp,&score);
//		a[temp]+=score;
//		if (a[i]>a[max])
//			max=i;
//	}
//	printf("%d %d",max,a[max]);
//	return 0;
//}





//1033 �ɼ��̴���


//#include<bits/stdc++.h>                               //ans1 
//using namespace std;
//map<char,bool> mp;
//int main()
//{
//	string a,b;
//	getline(cin,a);        //��һ�п����пո��ǿ��У�Ҫ��getline 
//	getline(cin,b);
//	bool flag=false;
//	for(int i=0;i<a.length();i++)
//	{
//		mp[a[i]]=true;                                    //������map��Ҳ�����½�һ���ַ��������滵���ļ� 
//		if(a[i]>='a'&&a[i]<='z')mp[a[i]-32]=true;
//		if(a[i]>='A'&&a[i]<='Z')mp[a[i]+32]=true;
//		if(a[i]=='+')
//		{
//			for(char xx='A';xx<='Z';xx++)                //ѧϰ����char���÷�
//			//char�������������ͣ����Խ�����������
//			//char c='A';c+=1;��ʱc��ֵ�ͻ��� 'B'
//			//char�����ڱ��ʽ�л��Զ�ת��Ϊ�������͡�
//			//int num='A';����'A'�ʹ�char����ת��Ϊint���� 
//			{
//				mp[xx]=true;
//			} 
//		}
//	}
//	for(int i=0;i<b.length();i++)
//	{
//		if(!mp[b[i]]){
//			cout<<b[i];
//			flag=true;
//		}
//	}
//	if(!flag)cout<<endl;
//	return 0;
// } 



//#include<iostream>                      //ans2 
//using namespace std;
//char c[300];
//int main(){
//	string a,b;
//	getline(cin,a);
//	getline(cin,b);
//	for(int i=0;i<a.length();i++){
//		c[a[i]]=1;
//		if(a[i]>='A'&&a[i]<='Z'){
//			c[a[i]-'A'+'a']=1;
//		}
//		if(c['+']==1){
//			for(int l='A';l<='Z';l++){
//				c[l]=1;
//			}
//		}
//	}
//	for(int i=0;i<b.length();i++){
//		if(c[b[i]]==1){
//			
//		}else{
//			cout<<b[i];
//		}
//	}
//    cout<<endl;
//	return 0;
//}








//1034 ��������������


#include<iostream>
//using namespace std;
//
//long long a, b, c, d;
//
////gcd(t1, t2)�������Ǽ���t1��t2�����Լ��
//long long gcd(long long t1, long long t2) {
//	return t2 == 0 ? t1 : gcd(t2, t1%t2);                  //շת�����ôд  
//}
//
////func(m, n)�������Ƕ�m/n�ķ������л���
//void func(long long m, long long n) {
//	if (m * n == 0) {
//		printf("%s", n == 0 ? "Inf" : "0");
//		return;
//	}
//	bool flag = ((m < 0 && n > 0) || (m > 0 && n < 0));    //����m*n����ֹ���ݹ��� 
//	m = abs(m); n = abs(n);
//	long long x = m / n;    //�������� 
//	if (flag == 1) {
//		cout << "(-";
//	}
//	if (x != 0) 
//		cout << x;
//	if (m % n == 0) {
//		if (flag) printf(")");
//		return;
//	}
//	if (x != 0) {
//		cout << " ";
//	}
//	m = m - x * n;               //������ķ��� 
//	long long t = gcd(m, n);
//	m = m / t; n = n / t;
//	cout << m << "/" << n;
//	if (flag)
//		cout << ")";
//}
//
//
//int main() {
//	scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
//	func(a, b);cout << " + ";func(c, d);printf(" = ");func(a * d + b * c, b * d); printf("\n");
//	func(a, b); printf(" - "); func(c, d); printf(" = "); func(a * d - b * c, b * d); printf("\n");
//	func(a, b); printf(" * "); func(c, d); printf(" = "); func(a * c, b * d); printf("\n");
//	func(a, b); printf(" / "); func(c, d); printf(" = "); func(a * d, b * c);
//}





//#include<bits/stdc++.h>
//using namespace std;
//long long int gcd(long long int x,long long int y)
//{
//	return y==0?x:gcd(y,x%y);
//	             //���� ���� 
//}
//
//void func(long long int m,long long int n)
//{	
//	if(m*n==0)
//	{
//		printf("%s",n==0?"Inf":"0");
//		return;
//	}
//	bool flag=((m>0&&n<0)||(m<0&&n>0));
//	m=abs(m);
//	n=abs(n);
//	long long int x=m/n;
//	if(flag){
//		cout<<"(-";
//	}
//	if(x!=0)
//		cout<<x;
//	if(m%n==0){
//		if(flag)cout<<")";
//		return;
//	}
//	if(x!=0){
//		cout<<" ";
//	}
//	m=m-x*n;
//	long long int t=gcd(m,n);
//	m=m/t,n=n/t;
//	cout<<m<<"/"<<n;
//	if(flag)
//		cout<<")";
//}
//
//
//int main()
//{
//	long long int a,b,c,d;
//	scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);                             //ע���ʽ���������������������� 
//	func(a,b);printf(" + "); func(c,d);printf(" = ");func(a * d + b * c, b * d); printf("\n");;
//	func(a,b);printf(" - "); func(c,d);printf(" = ");func(a * d - b * c, b * d); printf("\n");
//	func(a,b);printf(" * "); func(c,d);printf(" = ");func(a*c,b*d);printf("\n");
//	func(a,b);printf(" / "); func(c,d);printf(" = ");func(a*d,b*c);
//	
//	return 0;
// } 









//1035 ������鲢


////�����Ĺ鲢�㷨����һ���ݹ���̡�
////Ҳ�����������һ�룬����ߵ���ȫ���г���ȷ��˳��֮�������ұ�һ��ġ�
////��������������һ�����еġ�
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//    int n, a[100], b[100], i, j;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    for (int i = 0; i < n; i++)
//        cin >> b[i];
//    for (i = 0; i < n - 1 && b[i] <= b[i + 1]; i++);//�����ж����� 
//    for (j = i + 1; a[j] == b[j] && j < n; j++);
//    if (j == n) {
//        cout << "Insertion Sort" << endl;
//        sort(a, a + i + 2);
//    } else {
//        cout << "Merge Sort" << endl;
//        int k = 1, flag = 1;
////			k���ڿ��ƹ鲢������ÿ�κϲ���������Ĵ�С����ʼ��Ϊ1
////flag��־��ǰ�Ƿ��Ѿ��ﵽ����ȷ������״̬��flag==1��ʾδ�ﵽ 
//        while(flag) {
//            flag = 0;
//            for (i = 0; i < n; i++) {
//                if (a[i] != b[i])//һֱ�������b���飨Ŀ����������һ��  //�ж�һ�º󣬻�Ҫ����һ�ֲ��ٴ��ж� 
//                    flag = 1;
//            }
//            k = k * 2;//��k��ֵ������������һ�ι鲢�ϲ����������С������ 
//            for (i = 0; i < n / k; i++)
//                    //����鲢 
//                sort(a + i * k, a + (i + 1) * k);//��ÿ������������ 
//                
//            sort(a + n / k * k, a + n);//�����һ�����ܴ�С��ͬ���������������
//			//n/k�����������ֳ���СΪk��������ĸ�����a + n / k * kǰ������������ĩβ
//			//sort�����ĵڶ���������ʾ����Χ�Ľ�����ַ����һ��λ��
//			//�˴�0��n-1 
//        }
//    }
//    for (j = 0; j < n; j++) {
//        if (j != 0) printf(" ");
//        printf("%d", a[j]);
//    }
//    return 0;
//}






//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a[1005],b[1005];
//	int n,i,j;
//	cin>>n;
//	for(i=0;i<n;i++)
//		cin>>a[i];
//	for(i=0;i<n;i++)
//		cin>>b[i];
//	for(i=0;i<n-1&&b[i]<=b[i+1];i++);
//	for(j=i+1;j<n&&a[j]==b[j];j++);
//	if(j==n)
//	{
//		cout<<"Insertion Sort"<<endl;
//		sort(a,a+i+2);
//	}
//	else
//	{
//		cout<<"Merge Sort"<<endl;
//		int k=1,flag=1;
//		while(flag)
//		{
//			flag=0;
//			for(i=0;i<n;i++)
//			{
//				if(a[i]!=b[i])flag=1;
//			}
//			k=k*2;
//			for(i=0;i<n/k;i++)
//			{
//				sort(a+i*k,a+(i+1)*k);
//			}
//			sort(a+n/k*k,a+n);
//			//a+n/k*k��ǰ������������ռ��ĩβλ��������һ��λ�ã�Ҳ�������һ�����ܴ�С��ͬ�����������ʼ��ַ 
//			//ÿ���������С����k��*k����ǰ��ĵ�ַ 
//		}
//	}
//	for(j=0;j<n;j++)
//	{
//		if(j!=0)cout<<' ';
//		printf("%d",a[j]);
//	 } 
//	
//	
//	
//	return 0;
// } 





#include<bits/stdc++.h>
using namespace std;
int n,a[1005],b[1005],cnt;
int main()
{	cin>>n;	
	for(int i=1;i<=n;i++) 
		cin>>a[i];	
	for(int j=1;j<=n;j++)
		cin>>b[j];	
	for(int i=2;i<=n;i++)
	{	
		if(b[i]>=b[i-1]) cnt=i;		
		else break;	
	}	
	bool flag=true;	
	for(int i=cnt+1;i<=n;i++)
	{	
		if(a[i]!=b[i])
		{		
			flag=false;			
			break;		
		}	
	}	
	if(flag)
	{	
		cout<<"Insertion Sort"<<endl;		
		sort(a+1,a+cnt+2);		
		for(int i=1;i<n;i++)
		{		
			cout<<a[i]<<" ";	
		}		
		cout<<a[n];	
	}	
	else
	{	
		cout<<"Merge Sort"<<endl;		
		int len=99999,cnt=1;		
		for(int j=2;j<=n;j++)
		{		
			if(b[j]>b[j-1]) ++cnt;			
			else
			{			
				len=min(len,cnt);				
				cnt=1;			
			}		
		}		
		len*=2;		
		for(int i=1;i<=n;i+=len)
		{		
			if(i+len>n)
			{			
				sort(b+i,b+n+1);			
			}		
			else sort(b+i,b+i+len);	//�ٵ���һ��	
		}		
		for(int i=1;i<n;i++)
		{		
			cout<<b[i]<<" ";	
		}		
		cout<<b[n];	
	}	
	
	return 0;
}

























































