//1041 ������λ��



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
//		p[s[i].s]=s[i].s;   //p[2]==2,��s[p[2]]==s[2]����Ӧ�Ĳ�һ���ǵڶ�������� 
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



////˼·������
////- �����Ի���λ����Ϊ�����±����洢������Ϣ�������ڲ�ѯʱ��ֱ�Ӷ�λ��ʱ�临�ӶȽ�Ϊ O(1)��
////����ʵ�֣�
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
//        scanf("%s %d %d", s[a].code, &a, &s[a].b);        //�ո�����ͳ������Ӧ���ǰ��Ի�������Ϊ�±� 
//        //                ��û��a���ᱨ�� 
//    }
//    scanf("%d", &m);
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &temp);
//        printf("%s %d\n", s[temp].code, s[temp].b);
//    }
//    return 0;
//}
//
////- ���뿼����Ϣ��ͨ��ѭ����ȡ������Ϣ�������Ի���λ��a��Ϊ�±�ֱ�Ӵ洢������Ϣ�� s���顣
////- ��ѯ�����ѭ����ȡҪ��ѯ���Ի���λ�� temp��ֱ��ͨ�� s[temp] �����Ӧ��׼��֤�źͿ�����λ�š�




////�ýṹ���ÿ��ѧ�������ݣ��ٴ�һ������s,��������Ի��ŷ�Ӧ���ǵڼ���ѧ����
////s[�Ի���]=i,�ڲ�ѯʱ�������Ի���m,s[m]�ʹ������ǵڼ���(i)����stu[i]
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
//		s[stu[i].a]=i;                           //�ոյĴ�����������
//		                                          // �ո�д����s[stu[i].a]=stu[i].a
//		                                          //����Ի��ŷ�Ӧ���ǵڼ���ѧ������Ϊstu��i�����±��ǡ�ta�ǵڼ���ѧ���� 
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
//		 cin >> s1 >> t >> s2;      //�����һ�¾ͺ��� 
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







//1042 �ַ�ͳ��



//#include<bits/stdc++.h>
//using namespace std;
//map<char,int>mp;
//int main()
//{
//	string a;
//	getline(cin,a);           //�пո���getline 
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







//1043 ���PATest




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
//			if(mp['P']) flag=true,mp['P']--,cout<<'P';		 //���������������0���Ͳ���������ģ�һֱ��0�� 
//			if(mp['A']) flag=true,mp['A']--,cout<<'A';		
//			if(mp['T']) flag=true,mp['T']--,cout<<'T';		
//			if(mp['e']) flag=true,mp['e']--,cout<<'e';		
//			if(mp['s']) flag=true,mp['s']--,cout<<'s';		
//			if(mp['t']) flag=true,mp['t']--,cout<<'t';		
//			if(!flag) break;	
//		}
////	while(maxn--)
////	{
//////		while(mp['P']--)cout<<'P'<<' '<<mp['P']<<endl;      һֱ���p��ֱ��������p������� 
////
//////		if(mp['P']--)cout<<'P'<<' '<<mp['P']<<endl;          //��Ȼ��һ�λ��Ϊ0������Ϊ��������û���꣬���������ɸ��ļ������
////
//////		while(mp['P']--){
//////			cout<<'P';                           // //��Ȼ��һ�λ��Ϊ0������Ϊ��������û���꣬���������ɸ��ļ������
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







//1044 ��������


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
//			//stoi���������ڽ��ַ���ת��Ϊint���� 
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
//			for(int i=0;i<13;i++)  //0-12һ��13���� 
//			{
//				if(s==Mars_num2[i]) num+=i*13;
//			}
//			char ch=getchar(); //���õ������ֻ��һλ�����ģ����������ĵ�һ���ַ�
//			//��Ϊ���ֻ��һλ���ʼ�Ѿ������ˣ�����Ҫô�����ո�˵�����滹������Ҫô��ʲô��û�ж��� 
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
//        cout << spark[a / 13];   //��λ�� 
//    }
//    if(a / 13 && a % 13){       //ת��Ϊ��λ���λ�������� 
//        cout << " ";
//    }
//    if(a % 13 || a == 0){        //ֻҪ��λ�������ǰ����жϺ���� 
//        cout << earth[a % 13];
//    }
//}
//
//void spark2earth(){
//    int temp_1 = 0, temp_2 = 0;
//    string s1, s2;
//    if(len_s == 4){                                                         //substr���� ��ȡ�ַ����ĺ��� 
//        s1 = s.substr(0, 4);                                               //ѧϰ����������ͷ������ַ��� 
//        //��һ������0��ʾ���ַ���s����ʼλ�ã�����Ϊ0����ʼ��ȡ
//		// �ڶ�������3��ʾ��ȡ���ַ�����Ϊ3���ַ�
//		//���᷵���ַ���s������0��ʼ������3���ַ���ɵ����ַ��� 
//    }else if(len_s > 4){
//        s1 = s.substr(0, 3);
//        s2 = s.substr(4);
//        //ֻ������һ������4����ʾ���ַ���s������Ϊ4��λ�ÿ�ʼ����ȡ���ַ�����ĩβ��
//		//���ش�����4��ʼ��ʣ�������ַ���ɵ����ַ��� 
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










//1045 ��������



#include<bits/stdc++.h>                                                   //ans1
using namespace std;
//ǰ׺��  ��¼����ÿ��λ��֮ǰ�����ֵ��ÿ��λ��֮�����Сֵ
//�����Ԫ������Ԫ����ô��Ӧ�ñ���ߵ����ֵ�󣬱��ұߵ���СֵС
//ע�����ұߵ���Сֵ��ʱ��Ҫ������
//5 4 3 2 1Խ��ԽС��Ȼû���� Խ����ֵԽС�����ϸ��� 
//1 2 3 4 5  ����������������ң����ұߵġ���Сֵ һֱ��1������ʵ���� 
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
	
	//ע��Ҫ��minn��һ���ϴ�ĳ�ֵ 
	//��Ҫע�������n+5���������ֵ Ĭ����0��
	//��ô������Сֵʱ����minn[i+1] �Ƚϣ��ʼ�����0�Ļ��������Сֵȫ��0 
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
//	//vector���� 
//	for(int i=0; i<N; i++) {
//		scanf("%d",&a[i]);
//		v.push_back(a[i]);
//	}
//	sort(v.begin(),v.end());
//	for(int i=0; i<N; i++) {
////		cout<<endl<<" max ="<<max<<endl; 
//		if(a[i]==v[i] && a[i]>max)	cnt++;     //1 2 3 4 5
////��֤�ǵ�ǰ�ұ���Сֵ   ��������ֵ	                                       //1 3 2 4 5 
//		else v[i]=-1;   //��ǲ�����Ԫ��ֵ 
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























































