//1026 ��������ʱ��


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a,b;
//	int c=100;
//	cin>>a>>b;
//	int time,hh,mm,ss;
//	time=int((b-a)*1.0/100+0.5);           //ѧϰ�������������
//	//����ע��Ҫ *1.0��ֹ�����С���Ŀ���//����Ҳ�����ڶ���a��bʱֱ�Ӷ���Ϊdouble���͵� 
//	hh=time/3600;	
//	mm=time%3600/60;                     //ѧϰ�������ôȡ����	
//	ss=time%60;
//	
//	printf("%02d:%02d:%02d",hh,mm,ss);
//	
//	return 0;
// } 






//1027 ��ӡɳ©


//#include <stdio.h>
//int main()
//{
//	int n;
//	char c;
//	int i = 0, j = 0, k = 0, sum = 1;//��Ϊn����������n����Ϊ1����ɳ©������һ�У���sumֱ�Ӵӵ�һ�еķ�������ʼ�ۼӣ��������к�ʱ��Ҳ�����ټ���һ��
//	scanf("%d %c", &n, &c);//�������ݣ��Կո����
//	//1 3 5 7 9 ���� 2i-1 - �°벿�֣�ÿ�з��������ı仯����
//	//2i-1 2i-3 ���� 3 1���ϰ벿�ֺ��°벿�ֵ�1���ظ��ģ� - �°벿�֣�ÿ�з��������ı仯����
//	//��������ѭ��һ�����չ����sum>nʱ��ѭ����������sum<n�����ֵ����µĹ���ӡÿ�еĿո�ͷ���
//	for(i=2;(sum+2*(2*i-1))<=n;i++)//i��ʾĿǰ׼���ӵ��²�Ĳ�š���Ҫ�ӵڶ��㣬�²�Ҫ�õķ�����Ϊ2*(2*2-1)=6
//	{
//		sum += 2 * (2 * i - 1);//�����Ŀǰ���õ�ɳ©�ܹ�Ҫ�õ����ٷ���
//	}
//	//��ʱѭ�����������һ���жϷ������㹻����²�Ĳ����i-1(���һ���ж�ͨ���󣬼����²㣬i++���ٽ����жϣ��ж�ʧ�ܣ�����������²㣬���Դ�ʱi����߿���Ӳ�Ŵ�1)
//	//��Ϊ����Ҫѭ����ӡ���㣬�ȴ�����Ŵ�ӡ��1�㣬����Ҫ��1���ӡ������š�����Ҫʹ��n��סi�������
//	sum=n-sum;//�洢���������ɳ©�²�ķ��ŵ�����
//    n = i - 1;//�洢����к�
//	for (i = i - 1; i >= 1; i--)//i�����㿪ʼ��ӡ��һֱ��ӡ����1�У��������ϰ벿�ִ�ӡ���
//	{
//		j = n - i;//���㱾�пո�����ÿ�ж���һ��������ÿ��ѭ����Ҫ����һ�飩
//		while (j--)	printf(" ");//ÿСһ�㣬��������ǰ��Ҫ��һ���ո�
//		k = 2 * i - 1;//��ǰ��Ҫ����ķ�����
//		while (k--) printf("%c",c);
//		printf("\n");
//	}
//	for (i = 2; i <= n; i++)//i��2�㿪ʼ��ӡ
//	{
//		j = n - i;
//		while (j--)	printf(" ");//ÿСһ�㣬��������ǰ��Ҫ��һ���ո�
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
////	for(i=1;sum<n;i++)       //��i���ж�sum<=n,ִ��ѭ���壬���i++ 
////	{
////		sum+=2*(2*i-1); 
////		cout<<sum<<" "<<i<<endl;
////	}
////	cout<<i<<endl;
//	for(i=2;sum+2*(2*i-1)<=n;i++)          //���ж��ܲ��ܼӸ�sum���ټ� 
//	{
//		sum+=2*(2*i-1);                    //���ִ����ѭ�����i++�����жϲ�ִ��ѭ�� 
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
//			ans=n-(2*(i-1)*(i-1)-1);	//�к�Ϊi-1		
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









//1028 �˿��ղ�


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
//				swap(maxn,t);		                   //ѧϰ�����swap����node	
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
//	int n;//n����
//	cin>>n;
//	string name[n];//������������飬����û˵����ĸҪ��д 
//	//������һ�������˼�룬�������ա�2002/09/27������һ�����ַ�����Ȼ����ȥ�Ƚ� 
//	//int year[n];   //������������
//	//int month[n];  //����·ݵ�����
//	//int day[n];    //������ӵ����� 
//	string minbir="2014/09/06";
//	string maxbir="1814/09/06";
// 
//	string bir[n];
//	int num=0;//������¼��Ч���յĸ��� 
//	string minbir1=minbir;//������¼������������С��
//	string maxbir1=maxbir;//������¼�������������� 
//	int max=0;
//	int min=0; 
//	for(int i=0;i<n;i++)
//	{
//		cin>>name[i]>>bir[i];
//		if(bir[i]>=maxbir&&bir[i]<=minbir)  //���պϷ� 
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










//1029 �ɼ���


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
////		mp[a[i]]=0;                               //int����Ĭ����0.�����һ�д��ڣ���ôÿ��ѭ�����ﶼ���±��0��֮ǰ���ı��ʧЧ 
////		if(cnt==len2)break;
////���Ե�4�𰸴�������Ϊwhile���ж�����ֻ��дi<a.length()������дi<a.length()&&j<b.length()
////��Ϊ�ڶ����ַ������ܻ������λ���д򲻳������ַ����ᵼ����ǰ�ﵽ�ڶ����ַ����ĳ��ȴӶ�����ѭ��
//		if(a[i]==b[cnt]){
//			cnt++;
//			continue;
//		}
//		else{
////			a[i]=trans(a[i]);
//			if(!mp[a[i]])cout<<a[i];
//			mp[a[i]]++;
////			if(!mp[a[i]])cout<<a[i];          ֮ǰ��������ġ�ǰ����mp++��������Զ��������� 
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
//		a[i]=trans(a[i]);		                        //ע��Ƚϵ�ʱ�����ִ�Сд������a��bȫ��ת��Ϊ��д���Ƚ� 
//		for(int j=0;j<lenb;j++)
//		{		
//			b[i]=trans(b[i]);			
//			if(a[i]==b[j]) flag=true;                 //��ʵ����Ҫ��һһ��Ӧ��ֻҪa�ж�bû�оͿ�����		
//		}		
//		if(!flag&&!mp[a[i]])
//		//a��bû��  û������� 
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
//    for( int i = 0;i < strlen(str1); i++){  //˫��forѭ�����Ƚ�������ʵ��
//        for (int j = 0; j < strlen(str2); j++){
//            if(toupper(str1[i])==toupper(str2[j]))
//                find1=true;                 //�ҵ�
//            }
//            if (!find1){
//                for(int m=0;m<strlen(str);m++){//���û�ҵ������Ƿ��ѱ����
//                    if (toupper(str1[i])==toupper(str[m])){
//                        find2=true;
//                    }
//
//            }
//            if (!find2){                    //û������򱣴�����
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






//1030 ��������


#include<bits/stdc++.h>
using namespace std;
//long long int a[10005];
//long long int n,p;
//bool check(int l,int r)                                  //�δ��󣬳�ʱ 
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
	sort(a+1,a+n+1);     //Ĭ��������С�Ҵ� 
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
			//	if(j==n)break;         //���j�����ұߣ��ڵ�ǰi������£���ʱ��i��j��������У�һ������ˣ� 
			}
			else break;
//			if(check(i,j))
			
		}
	}
	cout<<ans;
	return 0;
 } 



//˼·����ֱ�ӵ�˼·�����Ȱ�������������һ����С���������
//����һ��Ƕ��ѭ����䣨�����Ϊ��С�������ұ�Ϊ����������Դ����ҵ����Ž⣬
//���������Ļ����Ե�4��5����ȥ��
//���Ե�4����Ϊ���г�ʱ�����Ե�5������Ϊm̫���ˣ����������ڶ���ʱӦ����long long����ʱ���Ե�5�Ѿ������
//���������Ե�4�����������forѭ�����������һ��һ�������Ļ�����������Ҫ����10^10�Σ�һ����˵forѭ��ֻ�ܳ���10^8�η����ڵ�ѭ����
//�����ʱ���Ҫ���㷨�����Ż��ˣ�
//���ǲ�����tmp����¼������ߣ�a0��������ʼ��ÿһ�α��������ҵ�������������Ԫ�ص���������
//����һ�ο�ʼʱ��a1��������ֱ�Ӵ�j+tmp-1��ʼ������
//Ϊʲô�����أ���Ϊ�൱��Ҫôtmp�������Ľ����Ҫô���Ľ����tmp��
//���⻹��Ҫ��ѭ�����н�һ�����Ż������Ƿ��֣���M>mpʱ��֮��ı����Ѿ��������ˣ����Ե�M��mp��ֱ�ӽ�����һ��ѭ�����ɡ�
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
//	sort(a,a+n);	//����
//	int max=0,tmp=0;
//	for(int i=0;i<n;i++)
//		for(int j=i+tmp-1;j<n;j++){
//			if(a[j]<=m*a[i]){
//				tmp=j-i+1;
//				if(max<tmp)	//�ҵ����ŵĽ�
//					max=tmp;
//			}
//            else break;	//֮��ı���������
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









































