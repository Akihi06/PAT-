//1056 ������ĺ�



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






//1057 ����Ҽ

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
//		if(sum%2) num1++;		     //����ת�� 
//		else num0++;	
//		sum/=2;	
//	}	
//	cout<<num0<<" "<<num1;	
//	return 0;
//}







//1058 ѡ����


//#include<bits/stdc++.h>
//typedef struct //��Ŀ	
//{
//	int score;//��ֵ
//	int right_cnt;//��ȷѡ�����	
//	char right[6];//������ȷѡ��	
//	int wrong;//����Ĵ���
//} question;
//int main()
//{
//	int N, M, max_error = 0;//ѧ����������ѡ����������������	
//	scanf("%d %d", &N, &M);	
//	question q[M+1];	
//	for(int i = 1; i < M + 1; i++) //�����ѡ��
//	{		
//		int cnt, j = 0;//ѡ����������ã�		
//		scanf("%d %d %d", &q[i].score, &cnt, &q[i].right_cnt);		
//		q[i].wrong = 0;//��ʼ������Ĵ���		
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
//	for (int i = 0; i < N; i++) //������	
//	{
//		int grades = 0, cnt, j;//ѧ���÷֣�ѡ�����		
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
//			if (cnt == q[j].right_cnt && strcmp(choose, q[j].right) == 0) //�����ȷ�����Ϸ���
//			                            //��ȷ���0��С��-1������1 
//			{		
//				grades += q[j].score;			
//			} 
//			else //������ͳ�ƴ������
//			{			
//				q[j].wrong++;			
//			}			
//			if (max_error < q[j].wrong) 
//			{			
//				max_error = q[j].wrong;			
//			}			
//			getchar();//����س���ո�		
//		}		
//		printf("%d\n", grades);	
//	}	
//	if (max_error == 0) //û�д���
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









//1059 C���Ծ���




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
//	int N, K;//���������콱����
//	cin >> N;
//	string temp;
//	map<string, int> reword, geted;//��¼������,��¼�콱����
//	for (int i = 1; i <=N; i++) {//�����Ǵ�1��ʼ�ģ�
//		cin >> temp;
//		reword[temp] = i;
//	}
//	cin >> K;
//	for (int i =0; i < K; i++) {
//		cin >> temp;
//		cout << temp << ": ";
//		if (reword.count(temp)) {//��
//			if (geted.count(temp))//���콱
//				cout << "Checked";
//			else {//δ�콱
//				if (reword[temp] == 1)//��һ��
//					cout << "Mystery Award";
//				else if (isPrime(reword[temp]))//������
//					cout << "Minion";
//				else//������
//					cout << "Chocolate";
//				geted[temp] = 1;//�Ǽ�Ϊ���콱
//			}
//		}
//		else//δ��
//			cout << "Are you kidding?";
//		cout << endl;
//	}
//}








//1060 ��������


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
	sort(a+1, a+1+n);//����	
	int temp=0;	
	for(int i=1; i<=n; i++)
	{	
		if(a[i]>n-i+1) 
		       //�Ӻ���ǰ�������� 
		{		
			temp=n-i+1;			
			break;		
		}	
	}	
	cout<<temp<<endl;	
	return 0;
}

















































































