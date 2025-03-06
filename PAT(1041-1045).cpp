//1041 考试座位号



//#include<bits/stdc++.h>                            //wrong ans 
//using namespace std;
//struct node
//{
//	long long int id;
//	int s,k;
//}s[1005];
//int main()
//{
//	int n;
//	int p[10005];
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		scanf("%lld %d %d",&s[i].id,&s[i].s,&s[i].k);
//		p[s[i].s]=s[i].s;   //p[2]==2,但s[p[2]]==s[2]，对应的不一定是第二个输入的 
//		cout<<p[s[i].s]<<endl;
//	}
//	int m;
//	cin>>m;
//	while(m--)
//	{
//		int x;
//		cin>>x;
//		cout<<p[x]<<' ';
//		cout<<s[p[x]].id<<' '<<s[p[x]].k<<endl;
//	}
//	return 0;
//}



////思路分析：
////- 利用试机座位号作为数组下标来存储考生信息，这样在查询时可直接定位，时间复杂度降为 O(1)。
////代码实现：
//                                                          //wrong2 
//#include <stdio.h>
//
//struct ppl {
//    char code[17];
//    int b;
//};
//
//int main() {
//    int n, m, temp;
//    struct ppl s[1001];
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        int a;
//        scanf("%s %d %d", s[a].code, &a, &s[a].b);        //刚刚问题就出在这里，应该是把试机号码作为下标 
//        //                还没有a，会报错 
//    }
//    scanf("%d", &m);
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &temp);
//        printf("%s %d\n", s[temp].code, s[temp].b);
//    }
//    return 0;
//}
//
////- 输入考生信息：通过循环读取考生信息，利用试机座位号a作为下标直接存储考生信息到 s数组。
////- 查询输出：循环读取要查询的试机座位号 temp，直接通过 s[temp] 输出对应的准考证号和考试座位号。




////用结构体存每个学生的数据，再创一个数组s,用来存从试机号反应他是第几个学生，
////s[试机号]=i,在查询时，输入试机号m,s[m]就代表他是第几个(i)，再stu[i]
//#include<bits/stdc++.h>
//using namespace std;
//struct student{
//	string id;
//	int a,b;
//}stu[1005];
//int s[1005];
//int main(){
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>stu[i].id>>stu[i].a>>stu[i].b;
//		s[stu[i].a]=i;                           //刚刚的错误是在这里
//		                                          // 刚刚写的是s[stu[i].a]=stu[i].a
//		                                          //存从试机号反应他是第几个学生，因为stu【i】的下标是“ta是第几个学生” 
//	}
//	int k;
//	cin>>k;
//	for(int i=0;i<k;i++){
//		int m;cin>>m;
//		cout<<stu[s[m]].id<<" "<<stu[s[m]].b<<endl;
//	}
//	return 0;
//}



//#include <iostream>
//using namespace std;                                     //ans1 
//int main() {
//	 string stu[1005][2], s1, s2;;
//	 int n, m, t;
//	 cin >> n;
//	 for(int i = 0; i < n; i++) {
//		 cin >> s1 >> t >> s2;      //先另存一下就好了 
//		 stu[t][0] = s1;
//		 stu[t][1] = s2;
//	 }
//	 cin >> m;
//	 for(int i = 0; i < m; i++) {
//		 cin >> t;
//		 cout << stu[t][0] << " " << stu[t][1] << endl;
//	 }
//	 return 0;
//}




//#include<bits/stdc++.h>              //ans2 
//using namespace std;
//map<int,string>mpid;
//map<int,int>mpnum;
//int main()
//{
//	int t;
//	cin>>t;
//	for(int i=1;i<=t;i++)
//	{
//		string id;
//		int x,y;
//		cin>>id>>x>>y;
//		mpid[x]=id;
//		mpnum[x]=y;
//	}
//	int m;
//	cin>>m;
//	for(int i=1;i<=m;i++)
//	{
//		int x;
//		cin>>x;
//		cout<<mpid[x]<<" "<<mpnum[x]<<endl;
//	}
//	
//	return 0;
// } 







//1042 字符统计



//#include<bits/stdc++.h>
//using namespace std;
//map<char,int>mp;
//int main()
//{
//	string a;
//	getline(cin,a);           //有空格，用getline 
//	int len=a.length();
//	for(int i=0;i<len;i++)
//	{
//		if(a[i]>='A'&&a[i]<='Z')a[i]+=32;
//		if(a[i]>='a'&&a[i]<='z')mp[a[i]]++;
//	 } 
//	 int maxn=-1;
//	 char c;
//	 for(int i='a';i<='z';i++)
//	 {
//	 	if(mp[i]>maxn)
//		{		
//		 	maxn=mp[i];			
//			c=char(i);		
//		}
//	 }
//	cout<<c<<" "<<maxn;
//	return 0;
// } 







//1043 输出PATest




//#include<bits/stdc++.h>                                   //ans1
//using namespace std;
//map<char,int>mp;
//int main()
//{
//	char a[10005];
//	scanf("%s",a);
//	int maxn=0;
//	int len=strlen(a);
//	for(int i=0;i<len;i++)
//	{
//		if(a[i]=='P'||a[i]=='A'||a[i]=='T'||a[i]=='e'||a[i]=='s'||a[i]=='t')
//		{
//			mp[a[i]]++;
////			cout<<a[i]<<cout<<mp[a[i]]<<endl;
////			maxn=max(maxn,mp[a[i]]);
//		}
//	} 
//		while(1)
//		{	
//			bool flag=false;		
//			if(mp['P']) flag=true,mp['P']--,cout<<'P';		 //这样如果括号里是0，就不会对它更改，一直是0； 
//			if(mp['A']) flag=true,mp['A']--,cout<<'A';		
//			if(mp['T']) flag=true,mp['T']--,cout<<'T';		
//			if(mp['e']) flag=true,mp['e']--,cout<<'e';		
//			if(mp['s']) flag=true,mp['s']--,cout<<'s';		
//			if(mp['t']) flag=true,mp['t']--,cout<<'t';		
//			if(!flag) break;	
//		}
////	while(maxn--)
////	{
//////		while(mp['P']--)cout<<'P'<<' '<<mp['P']<<endl;      一直输出p，直到把所有p都输出完 
////
//////		if(mp['P']--)cout<<'P'<<' '<<mp['P']<<endl;          //虽然有一次会减为0，但因为最多次数还没用完，后面它会变成负的继续输出
////
//////		while(mp['P']--){
//////			cout<<'P';                           // //虽然有一次会减为0，但因为最多次数还没用完，后面它会变成负的继续输出
//////			break;
//////		}
////		while(mp['A']--){
////			cout<<'A';
////			break;
////		}
////		while(mp['T']--)
////		{
////			cout<<'T'; 
////			break;
////			}    
////		while(mp['e']--){
////			cout<<'e';
////			break;
////		}
////		while(mp['s']--){
////			cout<<'s';
////			break;
////		}
////		while(mp['t']--){
////			cout<<'t';
////			break;
////		}
////	} 
//	
//	return 0;
// } 







//#include <cstdio>
//#include <cstring>                                 //ans2
//
//int main(){
//	int hashTable[6] = {};
//	char dict[6] = {'P', 'A', 'T', 'e', 's', 't'};
//	char str[10010];
//	scanf("%s", str);
//	
//	int len = strlen(str);
//	int sum = 0;
//	for(int i=0; i<len; i++){
//		for(int j=0; j<6; j++){
//			if(str[i] == dict[j]){
//				sum++;
//				hashTable[j]++;
//				break;
//			}
//		}
//	}
//	
//	while(sum != 0){
//		for(int i=0; i<6; i++){
//			if(hashTable[i] != 0){
//				printf("%c", dict[i]);
//				hashTable[i]--;
//				sum--;
//			}
//		}
//	}
//	
//	
//	return 0;
//}







//1044 火星数字


//#include<bits/stdc++.h>
////#include<cstring> 
//using namespace std;
////map<int,string>mp1;
////map<int,string>mp2;
////map<string,int>mp;
////void init()
////{
////	mp[0]="tret",mp[1]="jan",mp[2]="feb",mp[3]="mar",
////}
//string Mars_num1[13] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
//string Mars_num2[13] = {"","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
//int main()
//{
//	int n;
//	cin>>n;
//	int p=n;
//	string s;
//	while(p--)
//	{
//		cin>>s;
//	//	if(s>='0'&&s<='9')
//		//[Error] no match for 'operator>=' (operand types are 'std::string {aka std::basic_string<char>}' and 'char')
//		if(s[0]<='9'&&s[0]>='0')
//		{
//		//	int x=s-'0';
//			//[Error] no match for 'operator-' (operand types are 'std::string {aka std::basic_string<char>}' and 'char')
//			int x=stoi(s);
//			//stoi函数，用于将字符串转换为int类型 
//			int l=x%13;
//			int h=x/13;
//			if(h!=0)
//			{
//				cout<<Mars_num2[h];
//				if(l!=0)
//				{
//					cout<<" ";
//					cout<<Mars_num1[l];
//				}	
//			}
//			else cout<<Mars_num1[l];
//		}
//		else
//		{
//			int num=0;
//			for(int i=0;i<13;i++)  //0-12一共13个数 
//			{
//				if(s==Mars_num2[i]) num+=i*13;
//			}
//			char ch=getchar(); //不用担心如果只有一位火星文，读到了它的第一个字符
//			//因为如果只有一位，最开始已经读到了，这里要么读到空格说明后面还有数，要么就什么都没有读到 
//			if(ch==' ')
//			{
//				cin>>s;
//			}
//			for(int i=0;i<13;i++)
//			{
//				if(s==Mars_num1[i])num+=i;
//			}
//			cout<<num;
//		}
//		cout<<"\n";
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//string Mars_num1[13] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
//string Mars_num2[13] = {"","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
//int main()
//{
//	int n;
//	cin>>n;
//	string s;
//	int p=n;
//	while(p--)
//	{
//		cin>>s;
//		if(s[0]<='9'&&s[0]>='0')
//		{
//			int x=stoi(s);
//			int h=x/13;
//			int l=x%13;
//			if(h!=0)
//			{
//				cout<<Mars_num2[h];
//				if(l!=0)
//				{
//					cout<<" ";
//					cout<<Mars_num1[l];
//				}
//			}
//			else cout<<Mars_num1[l];
//		}	
//		else 
//		{
//			int ans=0;		
//			for(int i=0;i<13;i++)
//				if(Mars_num2[i]==s)ans+=(i*13);
//			char ch=getchar();
//			if(ch==' ') cin>>s;		
//			for(int i=0;i<13;i++)
//				if(Mars_num1[i]==s)ans+=i;
//			cout<<ans;	
//		}
//		cout<<"\n";
//	}
//}



//#include <bits/stdc++.h>
//using namespace std;
//
//string earth[] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
//string spark[] = {" ", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
//string s;
//int len_s;
//
//void earth2spark(int a){
//    if(a / 13){
//        cout << spark[a / 13];   //高位数 
//    }
//    if(a / 13 && a % 13){       //转换为高位后低位还有数字 
//        cout << " ";
//    }
//    if(a % 13 || a == 0){        //只要低位即输出，前面的判断后输出 
//        cout << earth[a % 13];
//    }
//}
//
//void spark2earth(){
//    int temp_1 = 0, temp_2 = 0;
//    string s1, s2;
//    if(len_s == 4){                                                         //substr函数 截取字符串的函数 
//        s1 = s.substr(0, 4);                                               //学习这里的索引和返回子字符串 
//        //第一个参数0表示从字符串s的起始位置（索引为0）开始截取
//		// 第二个参数3表示截取的字符长度为3个字符
//		//它会返回字符串s从索引0开始的连续3个字符组成的子字符串 
//    }else if(len_s > 4){
//        s1 = s.substr(0, 3);
//        s2 = s.substr(4);
//        //只传入了一个参数4，表示从字符串s的索引为4的位置开始，截取到字符串的末尾，
//		//返回从索引4开始的剩余所有字符组成的子字符串 
//    }else{
//        s1 = s.substr(0, 3);
//    }
//    for(int i = 1; i < 13; i++){
//        if(s1 == earth[i] || s2 == earth[i]){
//            temp_2 = i;
//        }
//        if(s1 == spark[i]){
//            temp_1 = i;
//        }
//    }
//    cout << temp_1 * 13 + temp_2;
//}
//
//int main(){
//    int n;
//    cin >> n;
//    getchar();
//    for(int i = 0; i < n; i++){
//        getline(cin, s);
//        len_s = s.length();
//        if(s[0] >= '0' && s[0] <= '9'){
//            earth2spark(stoi(s));
//        }else{
//            spark2earth();
//        }
//        cout << endl;
//    }
//    return 0;
//}










//1045 快速排序



#include<bits/stdc++.h>                                                   //ans1
using namespace std;
//前缀和  记录下来每个位置之前的最大值、每个位置之后的最小值
//如果该元素是主元，那么它应该比左边的最大值大，比右边的最小值小
//注意找右边的最小值的时候要倒着找
//5 4 3 2 1越来越小当然没问题 越往右值越小，不断更新 
//1 2 3 4 5  这样如果从左往右找，“右边的”最小值 一直是1，但其实不是 
int main()
{
	int n;
	cin>>n;
	int a[100005],maxn[100005],minn[100005],ans[100005];
	for(int i=0;i<n;i++)
		cin>>a[i];
//	int minn=1e9;
//	int maxn=0;
	
	for(int i=0;i<n;i++)
	{
//		maxx[i]=max(a[i],a[i-1]);
		maxn[i]=max(a[i],maxn[i-1]);
	} 
	for(int i=0;i<n+5;i++)minn[i]=2e9;
	
	//注意要给minn赋一个较大的初值 
	//还要注意这里的n+5，如果不赋值 默认是0，
	//那么在找最小值时是与minn[i+1] 比较，最开始结果是0的话，最后最小值全是0 
	for(int i=n-1;i>=0;i--)
	{
		minn[i]=min(a[i],minn[i+1]); 
//		cout<<minn[i]<<endl;
	}
	int cnt=0;
 	for(int i=0;i<n;i++)
	{
	 	//if(a[i]>=maxn[i]&&a[i]<=minn[i])
	 	if(a[i]==maxn[i]&&a[i]==minn[i])
	 	{
	 		ans[++cnt]=a[i];
		 }
	} 
	cout<<cnt<<endl;
	if(cnt!=0)
	{
		sort(ans+1,ans+cnt+1); 
		for(int i=1;i<=cnt;i++)
		{
			if(i==1)cout<<ans[i];
			else cout<<" "<<ans[i];
		}
	}
	else cout<<endl;
	
	return 0; 
}







//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	int N,cnt=0,max=0,flag=0;
//	cin>>N;
//	int a[N];
//	vector <int > v;
//	//vector容器 
//	for(int i=0; i<N; i++) {
//		scanf("%d",&a[i]);
//		v.push_back(a[i]);
//	}
//	sort(v.begin(),v.end());
//	for(int i=0; i<N; i++) {
////		cout<<endl<<" max ="<<max<<endl; 
//		if(a[i]==v[i] && a[i]>max)	cnt++;     //1 2 3 4 5
////保证是当前右边最小值   是左边最大值	                                       //1 3 2 4 5 
//		else v[i]=-1;   //标记不是主元的值 
//		if(a[i]>max) max=a[i];
//	}
//	cout<<cnt<<endl;
//	for(int i=0; i<N; i++) {
//		if(v[i]>0) {
//			if(flag==1) printf(" ");
//			printf("%d",v[i]);
//			flag=1;
//		}
//	}
//	cout<<endl;
//	return  0;
//}























































