//1021 ��λ��ͳ��

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	char n[1005];          //10^1000
//	cin>>n;
//	//scanf("%s",n);Ҳ���� 
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





//1022 D���Ƶ�A+B


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
////int����ͨ��ռ4���ֽڣ������ϴ�Լ�ܿ�200���Ԫ�أ�ʵ���ܿ��Ĵ�С��С�����ֵ��������100��w��Ԫ������ 
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






//1023 �����С��



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
////C++�У�break�����������������ͨ������������һ�� 
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
//		while(a[i]--)                   //ѧϰ���� 
//		{
//			cout<<i;
//		}
//	}
//	return 0;
// } 










//1024 ��ѧ������



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
////	for(int i=len-1;i>=flag+2;i--)index=index*10+(a[i]-'0');          ���ʹ��󣡣������������� 
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










//#include <bits/stdc++.h>	// ����ͷ�ļ�
//using namespace std;                                                //ans2
//
//string str, s_numi, s_numf; // �ֱ�洢 ԭ�ַ�����E֮ǰ���֡�E֮������ 
//int signf, i_numf, posE, posDot;	//�ֱ�ָ�����š�ָ����������ʽ��'E' ��λ�á�С�����λ�� 
//
//int main()
//{
//	getline(cin, str);	// �����ַ���
//	posE = str.find("E");	// �ҵ��ַ� 'E' ��ζ��
//	posDot = 2;	// ��ʼʱС�����������ַ����±�Ϊ2�ĵط� 
//	if(str[0] == '-') printf("-");	//��str��һ���ַ�Ϊ����ʱֱ��������� 
//	for(int i=1; i<posE; i++)
//	{
//		if(str[i]!='.') s_numi.insert(s_numi.end(), str[i]);
//		else continue;
//	}	// �� 'E' ֮ǰ�����ִ��� s_numi �� 
//	if(str[posE+1] == '+') signf = 1;
//	else signf = -1;	// ��ָ�������� 1�� -1 ����ʽ���� signf �� 
//	for(int i=posE+2; i<str.length(); i++)	// ��ָ�������ַ��� s_numf �� 
//	{
//		s_numf.insert(s_numf.end(), str[i]);
//	}
//	sscanf(s_numf.c_str(), "%d", &i_numf); // �� s_numf תΪ���ͱ��� i_numf 
//	i_numf *= signf;	// ��ָ�����Ϸ��� 
//	posDot += i_numf;	// �ı�С����λ�� 
//	if(posDot <= 1) 	// ��һ����� 
//	{
//		printf("0.");
//		for(int i=posDot; i<=0; i++) printf("0");	// ����ǰ����
//		for(int i=0; i<s_numi.length(); i++) printf("%c", s_numi[i]);
//		return 0;
//	}
//	if(posDot>1 && posDot<=s_numi.length())	// �ڶ������ 
//	{
//		for(int i=1; i<posDot; i++) printf("%c", s_numi[i-1]);
//		printf(".");
//		for(int i=posDot-1; i<s_numi.length(); i++) printf("%c", s_numi[i]);
//		return 0;
//	}
//	if(posDot > s_numi.length())	// ��������� 
//	{
//		for(int i=0; i<s_numi.length(); i++) printf("%c", s_numi[i]);
//		for(int i=s_numi.length()+1; i<posDot; i++) printf("0");	// ��������
//		return 0;
//	}
//	return 0;	// ������� 
//}










//1025 ��ת����



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




//����Ŀ�����ó�����ʵÿ���ڵ�ĺ��ַ������һ��ַ��ǰ��ַ��������ֻ��Ҫÿ����ַ��ǰ��ַ��ok�ˣ���β����ַһֱΪ-1����
//���Խ�ǰ��ַ�͵���ÿһ�ڵ�ĵ�ַ��Ȼ�󴴽�һ���������飬�±�Ϊǰ��ַ��ֵΪ���ַ������һ����ַ���飬��ź��ַ��
//Ȼ����нڵ�����ӣ�ʵ��Ϊ��ַ�����ӣ�����ŵ�list���顣
//ֱ�ӶԵ�ַ���з�ת��ʵ�ʾ��ǶԽڵ���з�ת��������Ͳ���Ҫ���Ǹ������⣨��Ϊ���и���û�������ַ����
//������ʱע����ַ������һ�ڵ��ǰ��ַ��

//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//using namespace std;
//int main()
//{
//    int first, k, n, temp;
//    cin >> first >> n >> k;
//    int data[100005], next[100005], list[100005];
//    //ÿ���ڵ������ ��һ�ڵ�ĵ�ַ  �ڵ�ĵ�ַ˳�� 
//    for (int i = 0; i < n; i++) {
//        cin >> temp;
//        cin >> data[temp] >> next[temp];
//    }
//    int sum = 0;//��һ�����е�����Ľ�㶼�����õģ��Ӹ�������
//    //list��Ӧ˳��Ľڵ㣨�Ե�ַ��ʾ��
//    while (first != -1) {
//        list[sum++] = first;      //����ǰ�ڵ�ĵ�ַfirst�浽list�����sumλ�� 
//        first = next[first];      //next����洢��ÿ���ڵ��Ӧ����һ���ڵ�ĵ�ַ��ͨ��next[first]���Ի�ȡ��ǰ�ڵ�first����һ���ڵ�ĵ�ַ�����丳��first���Ӷ�ʵ������ı��� 
//    }
//    //ֱ�ӶԵ�ַ��ת��������Ϊ�Խڵ㷴ת
//    for (int i = 0; i < (sum - sum % k); i += k) {
//        reverse(list + i * k, list + i * k + k);
//    }
//    //ע�����
//    for (int i = 0; i < sum - 1; i++) {
//        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
//    }
//    printf("%05d %d -1", list[sum - 1], data[list[sum - 1]]);
//    return 0;
//}





































































