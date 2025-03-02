//1031 查验身份证


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
//			sum+=(a[i]-'0')*point[i];                             //a[]	是char类型的！！！！记得要 -'0'
//		}
//		sum%=11;
//		if(mp[sum]!=a[len-1])
//		{
//			flag++;
//			for(int i=0;i<=17;i++)     //共18位 
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
//	else return false；
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
//				di=false;			      //前17位是否存在非数字字符 
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










//1032 挖掘机技术哪家强


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
//	int a[100005]={0}; //初始化为0，或者直接放在162行，默认为0 
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
//    int n,sum[MAXN] = {0};//数组sum[]下标为学校编号
//    scanf("%d",&n);
//    int maxnum = 1;//最大编号
//    for(int i = 0; i < n; i++){
//        int num,score;
//        scanf("%d%d",&num,&score);
//        sum[num] += score;//编号为num的学校的总分累加
//        if(maxnum < num){
//            maxnum = num;//更新最大编号
//        }
//    }
//    int maxs,maxn;//maxs为最高总分，maxn为最高总分对应的学校编号
//    maxs = sum[maxnum];//最高总分初始化为最大编号学校的总分
//    maxn = maxnum;//学校编号初始化
//    for(int i = 1; i <= maxnum; i++){//查找总分最高的学校编号
//        if(maxs < sum[i]){
//            maxs = sum[i];//更新最高总分
//            maxn = i;//更新最高总分学校的编号
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





//1033 旧键盘打字


//#include<bits/stdc++.h>                               //ans1 
//using namespace std;
//map<char,bool> mp;
//int main()
//{
//	string a,b;
//	getline(cin,a);        //第一行可能有空格，是空行，要用getline 
//	getline(cin,b);
//	bool flag=false;
//	for(int i=0;i<a.length();i++)
//	{
//		mp[a[i]]=true;                                    //可以用map，也可以新建一个字符数组来存坏掉的键 
//		if(a[i]>='a'&&a[i]<='z')mp[a[i]-32]=true;
//		if(a[i]>='A'&&a[i]<='Z')mp[a[i]+32]=true;
//		if(a[i]=='+')
//		{
//			for(char xx='A';xx<='Z';xx++)                //学习这里char的用法
//			//char本质是整数类型，可以进行自增操作
//			//char c='A';c+=1;此时c的值就会变成 'B'
//			//char类型在表达式中会自动转换为整数类型。
//			//int num='A';这里'A'就从char类型转换为int类型 
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








//1034 有理数四则运算


#include<iostream>
//using namespace std;
//
//long long a, b, c, d;
//
////gcd(t1, t2)的作用是计算t1和t2的最大公约数
//long long gcd(long long t1, long long t2) {
//	return t2 == 0 ? t1 : gcd(t2, t1%t2);                  //辗转相除怎么写  
//}
//
////func(m, n)的作用是对m/n的分数进行化简
//void func(long long m, long long n) {
//	if (m * n == 0) {
//		printf("%s", n == 0 ? "Inf" : "0");
//		return;
//	}
//	bool flag = ((m < 0 && n > 0) || (m > 0 && n < 0));    //不用m*n：防止数据过大 
//	m = abs(m); n = abs(n);
//	long long x = m / n;    //整数部分 
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
//	m = m - x * n;               //真分数的分子 
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
//	             //除数 余数 
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
//	scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);                             //注意格式！！！！！！！！！！！ 
//	func(a,b);printf(" + "); func(c,d);printf(" = ");func(a * d + b * c, b * d); printf("\n");;
//	func(a,b);printf(" - "); func(c,d);printf(" = ");func(a * d - b * c, b * d); printf("\n");
//	func(a,b);printf(" * "); func(c,d);printf(" = ");func(a*c,b*d);printf("\n");
//	func(a,b);printf(" / "); func(c,d);printf(" = ");func(a*d,b*c);
//	
//	return 0;
// } 









//1035 插入与归并


////真正的归并算法它是一个递归过程。
////也就是先排左边一半，把左边的完全排列成正确的顺序之后，再排右边一半的。
////而不是左右两边一起排列的。
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
//    for (i = 0; i < n - 1 && b[i] <= b[i + 1]; i++);//有序有多少项 
//    for (j = i + 1; a[j] == b[j] && j < n; j++);
//    if (j == n) {
//        cout << "Insertion Sort" << endl;
//        sort(a, a + i + 2);
//    } else {
//        cout << "Merge Sort" << endl;
//        int k = 1, flag = 1;
////			k用于控制归并排序中每次合并的子数组的大小，初始化为1
////flag标志当前是否已经达到了正确的排序状态，flag==1表示未达到 
//        while(flag) {
//            flag = 0;
//            for (i = 0; i < n; i++) {
//                if (a[i] != b[i])//一直到结果与b数组（目标排序结果）一致  //判断一致后，还要再来一轮才再次判断 
//                    flag = 1;
//            }
//            k = k * 2;//将k的值翻倍，这样下一次归并合并的子数组大小会增大 
//            for (i = 0; i < n / k; i++)
//                    //分组归并 
//                sort(a + i * k, a + (i + 1) * k);//对每个子数组排序 
//                
//            sort(a + n / k * k, a + n);//对最后一个可能大小不同的子数组进行排列
//			//n/k：能完整划分出大小为k的子数组的个数，a + n / k * k前面完整子数组末尾
//			//sort函数的第二个参数表示排序范围的结束地址的下一个位置
//			//此处0—n-1 
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
//			//a+n/k*k是前面完整子数组占据末尾位置再往后一个位置，也就是最后一个可能大小不同的子数组的起始地址 
//			//每个子数组大小就是k，*k就是前面的地址 
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
			else sort(b+i,b+i+len);	//再迭代一次	
		}		
		for(int i=1;i<n;i++)
		{		
			cout<<b[i]<<" ";	
		}		
		cout<<b[n];	
	}	
	
	return 0;
}

























































