//1021 个位数统计

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	char n[1005];          //10^1000
//	cin>>n;
//	//scanf("%s",n);也可以 
//	int a[10]={0};
//	for(int i=0;i<strlen(n);i++)
//	{
//		a[n[i]-'0']++;
//	}
////	sort(a,a+10);
//	for(int i=0;i<=9;i++)
//	{
//		if(a[i]!=0){
//			printf("%d:%d\n",i,a[i]);
//		}
//	}
//	
//	return 0;
// } 





//1022 D进制的A+B


//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	long long int a,b,c;
//	int d;
//	cin>>a>>b>>d;
////scanf("%lld %lld %d",&a,&b,&d);
//	c=a+b;
////	int ans[10000005];
////int类型通常占4个字节，理论上大约能开200万个元素，实际能开的大小会小于这个值，可能在100多w个元素左右 
//	int ans[10005];
//	int cnt=0;
//	while(c)
//	{
//		ans[++cnt]=c%d;
//		c/=d;
//	}
//	if(a==0&&b==0) cout<<0;
//	
//	else 
//	for(int i=cnt;i>=1;i--)
//	{
//		cout<<ans[i];
//	}
//	
//	return 0;
// } 






//1023 组个最小数



//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a[10];
//	for(int i=0;i<=9;i++)
//	{
//		cin>>a[i];
//	}
//	int minn=0;
//	for(int i=1;i<=9;i++)
//	{
////		if(a[i]!=0) minn=i,break;
////	[Error] expected primary-expression before 'break'
////C++中，break不能这样和其他语句通过逗号连接在一起 
//		if(a[i]!=0) 
//		{
//			minn=i;
//			break;
//		}
//	}
//	cout<<minn;
//	a[minn]--;
//	for(int i=0;i<=9;i++)
//	{
//		while(a[i]--)                   //学习这里 
//		{
//			cout<<i;
//		}
//	}
//	return 0;
// } 










//1024 科学计数法



//#include<bits/stdc++.h>
//using namespace std;                                      //ans1
//
//int main()
//{
//	char a[100000];
//	char a1[10000];
//	char a2[10000];
//	scanf("%s",a);
//	int len=strlen(a);
//	int flag=0,dot=0,index=0;
//	for(int i=0;i<len;i++)
//	{
//		if(a[i]=='E') flag=i;
//		if(a[i]=='.') dot=i;
//	}
//	if(a[0]=='-')cout<<'-';
//	char sgn=a[flag+1];
//	for(int i=1;i<dot;i++)	a1[i-1]=a[i];
//	for(int i=dot+1;i<flag;i++)	a2[i-(dot+1)]=a[i]; 
////	for(int i=len-1;i>=flag+2;i--)index=index*10+(a[i]-'0');          典型错误！！！！！！！！ 
//	for(int i=flag+2;i<len;i++)index=index*10+(a[i]-'0');
////		cout<<index<<endl;
//	int len1=strlen(a1);
//	int len2=strlen(a2);
//	if(sgn=='+'&&index>=len2){
//		for(int i=0;i<len1;i++)cout<<a1[i];
//		for(int i=0;i<len2;i++)cout<<a2[i];
//		int b=index-len2;
//		while(b){
//			cout<<'0';
//			b--;
//		}
//	}
//	else if(sgn=='+'&&index<len2){
//		
//		//int b=len2-index;
//		for(int i=0;i<len1;i++)cout<<a1[i];
//		for(int i=0;i<index;i++)cout<<a2[i];
//		cout<<'.';
//		for(int i=index;i<len2;i++)cout<<a2[i];
//	}
//	else if(sgn=='-'&&index>=len1){
//		int b=index-len1;
//		cout<<"0.";
//		while(b){
//			cout<<'0';
//			b--;
//		}
//		for(int i=0;i<len1;i++)cout<<a1[i];
//		for(int i=0;i<len2;i++)cout<<a2[i];
//	}
////	else  //sgn=='-'&&index<len1
////	{
////		int b=len1-index;
////		
////	}
//	return 0;
// } 










//#include <bits/stdc++.h>	// 万能头文件
//using namespace std;                                                //ans2
//
//string str, s_numi, s_numf; // 分别存储 原字符串、E之前数字、E之后数字 
//int signf, i_numf, posE, posDot;	//分别指数符号、指数的整数形式、'E' 的位置、小数点的位置 
//
//int main()
//{
//	getline(cin, str);	// 读入字符串
//	posE = str.find("E");	// 找到字符 'E' 的味道
//	posDot = 2;	// 初始时小数点在整个字符串下标为2的地方 
//	if(str[0] == '-') printf("-");	//当str第一个字符为负号时直接输出负号 
//	for(int i=1; i<posE; i++)
//	{
//		if(str[i]!='.') s_numi.insert(s_numi.end(), str[i]);
//		else continue;
//	}	// 将 'E' 之前的数字存在 s_numi 中 
//	if(str[posE+1] == '+') signf = 1;
//	else signf = -1;	// 将指数符号以 1与 -1 的形式存在 signf 中 
//	for(int i=posE+2; i<str.length(); i++)	// 将指数存在字符串 s_numf 中 
//	{
//		s_numf.insert(s_numf.end(), str[i]);
//	}
//	sscanf(s_numf.c_str(), "%d", &i_numf); // 将 s_numf 转为整型变量 i_numf 
//	i_numf *= signf;	// 将指数带上符号 
//	posDot += i_numf;	// 改变小数点位置 
//	if(posDot <= 1) 	// 第一种情况 
//	{
//		printf("0.");
//		for(int i=posDot; i<=0; i++) printf("0");	// 在数前补零
//		for(int i=0; i<s_numi.length(); i++) printf("%c", s_numi[i]);
//		return 0;
//	}
//	if(posDot>1 && posDot<=s_numi.length())	// 第二种情况 
//	{
//		for(int i=1; i<posDot; i++) printf("%c", s_numi[i-1]);
//		printf(".");
//		for(int i=posDot-1; i<s_numi.length(); i++) printf("%c", s_numi[i]);
//		return 0;
//	}
//	if(posDot > s_numi.length())	// 第三种情况 
//	{
//		for(int i=0; i<s_numi.length(); i++) printf("%c", s_numi[i]);
//		for(int i=s_numi.length()+1; i<posDot; i++) printf("0");	// 在数后补零
//		return 0;
//	}
//	return 0;	// 完结撒花 
//}










//1025 反转链表



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int first, k, n, temp;
	cin >> first >> n >> k;
	int data[100005], next[100005], list[100005];
	for (int i = 0; i < n; i++) 
	{	
		cin >> temp;
		cin >> data[temp] >> next[temp];
	}
	int sum = 0;
	while (first != -1) 
	{
		list[sum++] = first;
		first = next[first];
	}
	for (int i = 0; i < sum - sum % k; i += k)
	reverse(list + i, list + i + k);
	for (int i = 0; i < sum - 1; i++)
		printf("%05d %d %05d\n", list[i], data[list[i]], list[i+1]);
		
	printf("%05d %d -1", list[sum - 1], data[list[sum - 1]]);
	
	return 0;
}




//对题目分析得出，其实每个节点的后地址就是下一地址的前地址，故我们只需要每个地址的前地址就ok了（而尾部地址一直为-1）。
//可以将前地址就当作每一节点的地址，然后创建一个数据数组，下标为前地址，值为后地址，另外一个地址数组，存放后地址。
//然后进行节点的连接，实际为地址的连接，并存放到list数组。
//直接对地址进行反转（实际就是对节点进行反转），这里就不需要考虑更新问题（因为其中根本没包括后地址）。
//最后输出时注意后地址就是下一节点的前地址。

//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//using namespace std;
//int main()
//{
//    int first, k, n, temp;
//    cin >> first >> n >> k;
//    int data[100005], next[100005], list[100005];
//    //每个节点的数据 下一节点的地址  节点的地址顺序 
//    for (int i = 0; i < n; i++) {
//        cin >> temp;
//        cin >> data[temp] >> next[temp];
//    }
//    int sum = 0;//不一定所有的输入的结点都是有用的，加个计数器
//    //list对应顺序的节点（以地址表示）
//    while (first != -1) {
//        list[sum++] = first;      //将当前节点的地址first存到list数组的sum位置 
//        first = next[first];      //next数组存储了每个节点对应的下一个节点的地址，通过next[first]可以获取当前节点first的下一个节点的地址，将其赋给first，从而实现链表的遍历 
//    }
//    //直接对地址反转，本质上为对节点反转
//    for (int i = 0; i < (sum - sum % k); i += k) {
//        reverse(list + i * k, list + i * k + k);
//    }
//    //注意输出
//    for (int i = 0; i < sum - 1; i++) {
//        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
//    }
//    printf("%05d %d -1", list[sum - 1], data[list[sum - 1]]);
//    return 0;
//}





































































