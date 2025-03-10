//1056 组合数的和



//#include<bits/stdc++.h>
//using namespace std;
//int a[1005];
//int main()
//{	
//	int n;	
//	cin>>n;	
//	int sum=0;	
//	for(int i=1;i<=n;i++) cin>>a[i];	
//	for(int i=1;i<n;i++)
//	{	
//		for(int j=i+1;j<=n;j++)
//		{
//			sum+=(a[i]+a[j])*11;	
//		}	
//	}	
//	cout<<sum<<endl;	
//	return 0;
//}






//1057 数零壹

//#include<bits/stdc++.h>
//using namespace std;
//string st;
//int main()
//{
//	getline(cin,st);	
//	int len=st.length();	
//	int sum=0;	
//	for(int i=0;i<len;i++)
//	{	
//		if(st[i]>='a'&&st[i]<='z') sum+=st[i]-'a'+1;		
//		else
//		{		
//			if(st[i]>='A'&&st[i]<='Z') sum+=st[i]-'A'+1;	
//		}	
//	}		
//	int num0=0,num1=0;	
//	while(sum)
//	{	
//		if(sum%2) num1++;		     //进制转换 
//		else num0++;	
//		sum/=2;	
//	}	
//	cout<<num0<<" "<<num1;	
//	return 0;
//}







//1058 选择题


//#include<bits/stdc++.h>
//typedef struct //题目	
//{
//	int score;//分值
//	int right_cnt;//正确选项个数	
//	char right[6];//所有正确选项	
//	int wrong;//错误的次数
//} question;
//int main()
//{
//	int N, M, max_error = 0;//学生人数，多选题个数，最多错误次数	
//	scanf("%d %d", &N, &M);	
//	question q[M+1];	
//	for(int i = 1; i < M + 1; i++) //读入多选题
//	{		
//		int cnt, j = 0;//选项个数（无用）		
//		scanf("%d %d %d", &q[i].score, &cnt, &q[i].right_cnt);		
//		q[i].wrong = 0;//初始化错误的次数		
//		char c;		
//		while ((c = getchar()) != '\n') 
//		{		
//			if (isalpha(c)) 
//			{			
//				q[i].right[j] = c;				
//				j++;			
//			}		
//		}		
//		q[i].right[j] = '\0';	
//	}	
//	for (int i = 0; i < N; i++) //读入解答	
//	{
//		int grades = 0, cnt, j;//学生得分，选项个数		
//		for (j = 1; j < M + 1; j++) 
//		{		
//			scanf("(%d", &cnt);			
//			int k = 0;			
//			char c, choose[6];			
//			while ((c = getchar()) != ')') 
//			{			
//				if (isalpha(c)) 
//				{				
//					choose[k] = c;					
//					k++;				
//				}		
//			}			
//			choose[k] = '\0';			
//			if (cnt == q[j].right_cnt && strcmp(choose, q[j].right) == 0) //如果正确，加上分数
//			                            //相等返回0，小于-1，大于1 
//			{		
//				grades += q[j].score;			
//			} 
//			else //错误则统计错误次数
//			{			
//				q[j].wrong++;			
//			}			
//			if (max_error < q[j].wrong) 
//			{			
//				max_error = q[j].wrong;			
//			}			
//			getchar();//读入回车或空格		
//		}		
//		printf("%d\n", grades);	
//	}	
//	if (max_error == 0) //没有错题
//	{	
//		printf("Too simple");	
//	}
//	else 
//	{	
//		printf("%d", max_error);		
//		for (int i = 1; i < M + 1; i++) 
//		{		
//			if (q[i].wrong == max_error) 
//			{			
//				printf(" %d", i);		
//			}	
//		}	
//	}	
//	printf("\n");	
//	return 0;
//}









//1059 C语言竞赛




//#include <iostream>
//#include<string>
//#include<map>
//using namespace std;
//bool isPrime(int n)
//{
//	if (n <= 1)
//		return false;
//	for (int i = 2; i * i <= n; i++)
//		if (n % i == 0)
//			return false;
//	return true;
//}
//int main() {
//	int N, K;//获奖人数，领奖人数
//	cin >> N;
//	string temp;
//	map<string, int> reword, geted;//记录获奖名单,记录领奖名单
//	for (int i = 1; i <=N; i++) {//排名是从1开始的，
//		cin >> temp;
//		reword[temp] = i;
//	}
//	cin >> K;
//	for (int i =0; i < K; i++) {
//		cin >> temp;
//		cout << temp << ": ";
//		if (reword.count(temp)) {//获奖
//			if (geted.count(temp))//已领奖
//				cout << "Checked";
//			else {//未领奖
//				if (reword[temp] == 1)//第一名
//					cout << "Mystery Award";
//				else if (isPrime(reword[temp]))//素数名
//					cout << "Minion";
//				else//其他名
//					cout << "Chocolate";
//				geted[temp] = 1;//登记为已领奖
//			}
//		}
//		else//未获奖
//			cout << "Are you kidding?";
//		cout << endl;
//	}
//}








//1060 爱丁顿数


#include<bits/stdc++.h>
int a[100005];
using namespace std;
int main() 
{
	int n;	
	cin>>n;	
	for(int i=1; i<=n; i++)
	{	
		cin>>a[i];	
	}	
	sort(a+1, a+1+n);//升序	
	int temp=0;	
	for(int i=1; i<=n; i++)
	{	
		if(a[i]>n-i+1) 
		       //从后往前数的天数 
		{		
			temp=n-i+1;			
			break;		
		}	
	}	
	cout<<temp<<endl;	
	return 0;
}

















































































