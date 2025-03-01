//1026 程序运行时间


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a,b;
//	int c=100;
//	cin>>a>>b;
//	int time,hh,mm,ss;
//	time=int((b-a)*1.0/100+0.5);           //学习这里的四舍五入
//	//并且注意要 *1.0防止结果是小数的可能//或者也可以在定义a，b时直接定义为double类型的 
//	hh=time/3600;	
//	mm=time%3600/60;                     //学习这里的怎么取分钟	
//	ss=time%60;
//	
//	printf("%02d:%02d:%02d",hh,mm,ss);
//	
//	return 0;
// } 






//1027 打印沙漏


//#include <stdio.h>
//int main()
//{
//	int n;
//	char c;
//	int i = 0, j = 0, k = 0, sum = 1;//因为n是正整数，n至少为1，则沙漏至少有一行，则sum直接从第一行的符号数开始累加，后面检测行号时，也不必再检测第一行
//	scanf("%d %c", &n, &c);//接收数据，以空格相隔
//	//1 3 5 7 9 …… 2i-1 - 下半部分，每行符号数量的变化规律
//	//2i-1 2i-3 …… 3 1（上半部分和下半部分的1是重复的） - 下半部分，每行符号数量的变化规律
//	//可以设置循环一层层拓展，当sum>n时，循环结束，按sum<n的最大值情况下的规格打印每行的空格和符号
//	for(i=2;(sum+2*(2*i-1))<=n;i++)//i表示目前准备加的新层的层号。如要加第二层，新层要用的符号数为2*(2*2-1)=6
//	{
//		sum += 2 * (2 * i - 1);//计算出目前布置的沙漏总共要用到多少符号
//	}
//	//此时循环结束，最后一次判断符号数足够添加新层的层号是i-1(最后一次判断通过后，加了新层，i++。再进行判断，判断失败，不足以添加新层，所以此时i比最高可添加层号大1)
//	//因为后面要循环打印各层，先从最大层号打印到1层，后又要从1层打印到最大层号。所以要使用n记住i的最大层号
//	sum=n-sum;//存储不足以组成沙漏新层的符号的数量
//    n = i - 1;//存储最大行号
//	for (i = i - 1; i >= 1; i--)//i从最大层开始打印，一直打印到第1行，把整个上半部分打印完成
//	{
//		j = n - i;//计算本行空格数（每行都不一样，所以每轮循环都要计算一遍）
//		while (j--)	printf(" ");//每小一层，符号序列前面要多一个空格
//		k = 2 * i - 1;//当前行要输出的符号数
//		while (k--) printf("%c",c);
//		printf("\n");
//	}
//	for (i = 2; i <= n; i++)//i从2层开始打印
//	{
//		j = n - i;
//		while (j--)	printf(" ");//每小一层，符号序列前面要多一个空格
//		k = 2 * i - 1;
//		while (k--) printf("%c", c);
//		printf("\n");
//	}
//	printf("%d",sum);
//	return 0;
//}





//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	char c;
//	cin>>n>>c;
//	int i=0,j=0;
////	int sum=1;
//	int sum=-1;
////	for(i=1;sum<=n;i++)
////	for(i=1;sum<n;i++)       //先i，判断sum<=n,执行循环体，最后i++ 
////	{
////		sum+=2*(2*i-1); 
////		cout<<sum<<" "<<i<<endl;
////	}
////	cout<<i<<endl;
//	for(i=2;sum+2*(2*i-1)<=n;i++)          //先判断能不能加给sum，再加 
//	{
//		sum+=2*(2*i-1);                    //最后执行完循环体后，i++，再判断不执行循环 
//	}
////	if(sum>n) sum-= 2*(2*(i-1)-1);
////	cout<<sum<<endl;
//	int h=i-1;
////	cout<<h<<endl;
////	int h=i-1;
//	sum=n-sum;
////	cout<<sum<<endl;
//	for(i=h;i>=1;i--)
//	{
//		j=h-i;
//		while(j--)cout<<' ';
//		int k=2*i-1;
//		while(k--)cout<<c;
//		cout<<endl;
//	}
//	for(i=2;i<=h;i++)
//	{
//		j=h-i;
//		while(j--)cout<<' ';
//		int k=2*i-1;
//		while(k--)cout<<c;
//		cout<<endl;
//	 } 
//	
//	cout<<sum;
//	
//	return 0;
//}





//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{	
//	int n,temp=0,ans=0;	
//	char c;	
//	cin>>n>>c;	
//	for(int i=1;i<=n;i++)
//	{	
//		if(2*i*i-1>n)
//		{		
//			temp=i-1;			
//			ans=n-(2*(i-1)*(i-1)-1);	//行号为i-1		
//			break;		
//		}	
//	}	
//	for(int i=1;i<=temp;i++)
//	{		
//		for(int j=1;j<i;j++) 
//		cout<<' ';	
//		for(int j=1;j<=2*(temp-i)+1;j++) 
//			cout<<c;		
//		cout<<endl;	
//	}	
//	for(int i=2;i<=temp;i++)
//	{	
//		for(int j=1;j<=temp-i;j++) cout<<' ';		
//		for(int j=1;j<=2*i-1;j++) cout<<c;		
//		cout<<endl;	
//	}	
//	if(n==1) cout<<c<<endl;
//	cout<<ans<<endl;	
//	
//	return 0;
//}









//1028 人口普查


//#include<bits/stdc++.h>
//using namespace std;
//struct node
//{
//	string name;
//	int y,m,d;
//	int age;
//};
//
//node maxn={"",3000,99,9};
//node minn={"",0,0,0};
//node limit_time={"",1814,9,6};
//node now_time={"",2014,9,6};
//
//int check(node a,node b)
//{	int suma=a.y*4000+a.m*40+a.d;	
//	int sumb=b.y*4000+b.m*40+b.d;	
//	if(suma>sumb) return 1;	
//	if(suma==sumb) return 0;	
//	if(suma<sumb) return -1;
//}
//
//int main()
//{
//	int t,cnt=0;
//	cin>>t;
//	for(int i=1;i<=t;i++)
//	{
//		node x;
//		cin>>x.name>>x.y;
//		getchar();
//		cin>>x.m;
//		getchar();
//		cin>>x.d;
//		if(check(x,now_time)<=0&&check(x,limit_time)>=0)
//		{		
//			++cnt;			
//			if(check(x,maxn)==-1)
//			{			
//				node t=x;				
//				swap(maxn,t);		                   //学习这里的swap交换node	
//			}			
//			if(check(x,minn)==1)
//			{			
//				node t=x;				
//				swap(minn,t);			
//			}	
//		}
//	}
//	if(cnt==0) cout<<0;	
//	else cout<<cnt<<" "<<maxn.name<<" "<<minn.name;
//	return 0;
// } 




//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;//n个人
//	cin>>n;
//	string name[n];//存放姓名的数组，题中没说首字母要大写 
//	//这里有一个精妙的思想，就是生日“2002/09/27”看成一整个字符串，然后拿去比较 
//	//int year[n];   //存放年龄的数组
//	//int month[n];  //存放月份的数组
//	//int day[n];    //存放日子的数组 
//	string minbir="2014/09/06";
//	string maxbir="1814/09/06";
// 
//	string bir[n];
//	int num=0;//用来记录有效生日的个数 
//	string minbir1=minbir;//用来记录五人中年龄最小的
//	string maxbir1=maxbir;//用来记录五人中年龄最大的 
//	int max=0;
//	int min=0; 
//	for(int i=0;i<n;i++)
//	{
//		cin>>name[i]>>bir[i];
//		if(bir[i]>=maxbir&&bir[i]<=minbir)  //生日合法 
//		{
//			num++;
//			if(bir[i]<minbir1)
//			{
//				minbir1=bir[i];
//				min=i;
//			}
//			if(bir[i]>maxbir1)
//			{
//				maxbir1=bir[i];
//				max=i;
//			}
//		} 
//	} 
// 
//	cout<<num<<" "<<name[min]<<" "<<name[max];
//	return 0;
//}










//1029 旧键盘


//#include<bits/stdc++.h>

//#include<iostream>
//#include<cstring>
//#include<map>
// 
//using namespace std;
//char trans(char x)
//{
//	if(x>='a'&&x<='z')x-=32;
//	return x;
//}
//map<char,int> mp;
//int main()
//{
//	char a[85],b[85];
//	scanf("%s %s",a,b);
//	int len2=strlen(b);
//	int cnt=0;
//	for(int i=0;i<strlen(a);i++)
//	{
//		a[i]=trans(a[i]);
//		b[cnt]=trans(b[cnt]);
////		mp[a[i]]=0;                               //int类型默认是0.如果这一行存在，那么每次循环这里都重新变成0，之前做的标记失效 
////		if(cnt==len2)break;
////测试点4答案错误是因为while的判断条件只能写i<a.length()，不能写i<a.length()&&j<b.length()
////因为第二串字符串可能会在最后位置有打不出来的字符，会导致提前达到第二个字符串的长度从而跳出循环
//		if(a[i]==b[cnt]){
//			cnt++;
//			continue;
//		}
//		else{
////			a[i]=trans(a[i]);
//			if(!mp[a[i]])cout<<a[i];
//			mp[a[i]]++;
////			if(!mp[a[i]])cout<<a[i];          之前放在这里的。前面是mp++，这样永远都不会输出 
//			
////			cnt++;
//		}
//	}
//	return 0;
//}







//#include<bits/stdc++.h>
//using namespace std;
//char a[1005];
//char b[1005];
//map<char,int> mp;
//char trans(char x)
//{	
//	if(x>='a'&&x<='z') x-=32;	
//	return x;
//}
//int main()
//{	
//	scanf("%s\n%s",a,b);	
//	int lena=strlen(a),lenb=strlen(b);	
//	for(int i=0;i<lena;i++)
//	{	
//		bool flag=false;		
//		a[i]=trans(a[i]);		                        //注意比较的时候不区分大小写，所以a，b全部转化为大写来比较 
//		for(int j=0;j<lenb;j++)
//		{		
//			b[i]=trans(b[i]);			
//			if(a[i]==b[j]) flag=true;                 //其实并不要求一一对应，只要a有而b没有就可以了		
//		}		
//		if(!flag&&!mp[a[i]])
//		//a有b没有  没有输出过 
//		{		
//			cout<<a[i];			
//			mp[a[i]]++;		
//		}	
//	}	
//	return 0;
//}



//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//int main(){                         
//    char str1[85];
//    char str2[85];
//    char str[85]={-1};
//    gets(str1);
//    gets(str2);
//    int k=0;
//    bool find1=false;
//    bool find2=false;
//    for( int i = 0;i < strlen(str1); i++){  //双重for循环，比较输入与实际
//        for (int j = 0; j < strlen(str2); j++){
//            if(toupper(str1[i])==toupper(str2[j]))
//                find1=true;                 //找到
//            }
//            if (!find1){
//                for(int m=0;m<strlen(str);m++){//如果没找到，看是否已保存过
//                    if (toupper(str1[i])==toupper(str[m])){
//                        find2=true;
//                    }
//
//            }
//            if (!find2){                    //没保存过则保存起来
//                str[k++]=toupper(str1[i]);
//            }
//
//        }   
//        find1=false;
//        find2=false;
//    }
//    for(int i=0;i<k;i++){
//        cout<<str[i];
//    }   
//    return 0;
//}






//1030 完美数列


#include<bits/stdc++.h>
using namespace std;
//long long int a[10005];
//long long int n,p;
//bool check(int l,int r)                                  //段错误，超时 
//{
//	if(a[r]<=a[l]*p) return true;
//	else return false;
//}
int main()
{
	long long int a[10005];
	long long int n,p;
//	int n,p;
	cin>>n>>p;
//	int a[10005];
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);     //默认升序，左小右大 
	int ans=0;
	for(int i=1;i<=n;i++)
	{
	//	for(int j=n;j>=i;j--)
//		for(int j=n;j>=i+tmp-1;j--)
		for(int j=i+ans-1;j<=n;j++) 
		{
			if(a[j]<=a[i]*p)
			{
			//	tmp=j-i+1;
			//	ans=max(ans,j-i+1); 
				if(ans<j-i+1)ans=j-i+1;
			//	if(j==n)break;         //如果j在最右边，在当前i的情况下，此时（i到j这个子数列）一定最大了， 
			}
			else break;
//			if(check(i,j))
			
		}
	}
	cout<<ans;
	return 0;
 } 



//思路：最直接的思路就是先把输入的数组进行一个从小到大的排序，
//再用一个嵌套循环语句（最左边为最小数，最右边为最大数），以此来找到最优解，
//但是这样的话测试点4、5过不去，
//测试点4是因为运行超时，测试点5则是因为m太大了，所以我们在定义时应该用long long，此时测试点5已经解决，
//再来看测试点4，如果用两个for循环从最左边起一个一个遍历的话，最坏的情况是要遍历10^10次，一般来说for循环只能承受10^8次方以内的循环，
//那这个时候就要对算法进行优化了，
//我们不妨用tmp来记录从最左边（a0）的数开始，每一次遍历后所找到的完美数列里元素的最大个数，
//再下一次开始时（a1），我们直接从j+tmp-1开始遍历，
//为什么这样呢，因为相当于要么tmp就是最后的结果，要么最后的结果比tmp大。
//此外还需要对循环进行进一步的优化，我们发现，当M>mp时，之后的遍历已经无意义了，所以当M≤mp，直接进行下一次循环即可。
//
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	long long n,m,a[100000];
//	scanf("%lld%lld",&n,&m);
//	for(int i=0;i<n;i++)
//		scanf("%lld",&a[i]);
//	sort(a,a+n);	//排序
//	int max=0,tmp=0;
//	for(int i=0;i<n;i++)
//		for(int j=i+tmp-1;j<n;j++){
//			if(a[j]<=m*a[i]){
//				tmp=j-i+1;
//				if(max<tmp)	//找到最优的解
//					max=tmp;
//			}
//            else break;	//之后的遍历无意义
//        }
//	cout <<max;
//	return 0;
//}




//#include<cstdio>
//#include<algorithm> 
//#include<iostream>
//using namespace std;
//int main()
//{
//	int m,n,i,j,max=0;
//	cin>>m>>n;
//	long a[m]; 
//	for(i=0;i<m;i++)
//	cin>>a[i];
//	sort(a,a+m);
//	for(i=0;i<m;i++)
//	{
//		for(j=i+max;j<m;j++)
//		{
//			if(a[j]>a[i]*n)
//			break;
//			if(max<j-i+1)
//			max=j-i+1;
//		}
//	}
//	
//	cout<<max;
//	return 0;
//}









































