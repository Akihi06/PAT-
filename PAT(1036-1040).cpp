//1036 跟奥巴马一起编程


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	char c;
//	cin>>n>>c;
//	int len=(n+1)/2;                    //学习这里的四舍五入 
//	for(int i=1;i<=len;i++)         
//	{
//		for(int j=1;j<=n;j++)
//		{
//			if(i==1||i==len||j==1||j==n)cout<<c;  //正方形怎么画 
//			else cout<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
// } 





//1037 在霍格沃茨找零钱

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int g1,s1,k1,g2,s2,k2;
//	int n1,n2;
//	scanf("%d.%d.%d",&g1,&s1,&k1);
//	scanf("%d.%d.%d",&g2,&s2,&k2);
//	n1=(g1*17+s1)*29+k1,n2=(g2*17+s2)*29+k2;
//	int n=n2-n1;
//	if(n>=0){
//		cout<<n/(17*29)<<'.'<<(n%(17*29))/29<<'.'<<n%29;
//	}
//	else{
//		n=abs(n);
//		cout<<'-'<<n/(17*29)<<'.'<<(n%(17*29))/29<<'.'<<n%29;
//	}
//	return 0;
// } 









//1038 统计同成绩学生


//#include<bits/stdc++.h>           //ans1        
//using namespace std;
//int main()
//{
//	int n,k;
//	cin>>n;
//	int a[100005],b[10005]={0};           //注意10^5，开大一点，否则段错误 
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//		b[a[i]]++;
//	}
//	cin>>k;
//	while(k--) //先用后减小 
//	{
//		int x;
//		cin>>x;
//		if(k==0)cout<<b[x];
//		else cout<<b[x]<<' ';
//	}
//	
//	return 0;
//}




//#include<bits/stdc++.h>
//using namespace std;                  //ans2 
//int a[100005];
//map<int,int> mp;
//int main()
//{
//	int n;	
//	cin>>n;	
//	for(int i=1;i<=n;i++) 
//		cin>>a[i],mp[a[i]]++;	
//	int k,x;	
//	cin>>k;	
//	for(int i=1;i<k;i++)
//	{	
//		cin>>x;		
//		cout<<mp[x]<<" ";
//	}	
//	cin>>x;	
//	cout<<mp[x];	
//	return 0;
//}







//1039 到底买不买


//#include<bits/stdc++.h>                  //ans1
//using namespace std;
//int main()
//{
//	char a[10005],b[10005];
//	scanf("%s %s",a,b);
//	int cnt=0;
//	int lena=strlen(a),lenb=strlen(b);
//	for(int i=0;i<lena;i++)
//	{
//		for(int j=0;j<lenb;j++)
//		{
//			if(a[i]==b[j]&&a[i]!=',')
//			{
//				a[i]=',';
//				b[j]='.';
//				cnt++;
//				if(cnt==lenb)break;
//			}
//		}
//	}
//	if(cnt==lenb)cout<<"Yes"<<" "<<lena-lenb;
//	else cout<<"No"<<" "<<lenb-cnt;
//	
//	return 0;
// } 


//#include<bits/stdc++.h>
//using namespace std;                         //ans2
//string a,b;
//int main()
//{	
//	int cnt=0;	
//	cin>>a>>b;	
//	int lena=a.size(),lenb=b.size();	
//	for(int i=0;i<lenb;i++)
//	{	
//		for(int j=0;j<lena;j++)
//		{		
//			if(b[i]==a[j])
//			{			
//				a[j]='+';			
//				b[i]='+';		
//			}		
//		}	
//	}
//	bool flagb=true;	
//	for(int i=0;i<lenb;i++)
//	{	
//		if(b[i]!='+') 
//			flagb=false,++cnt;	
//	}	
//	if(!flagb)
//	{	
//		cout<<"No"<<" "<<cnt;
//	}	
//	else
//	{	
//		for(int i=0;i<lena;i++)
//		{		
//			if(a[i]!='+') ++cnt;		
//		}		
//		cout<<"Yes"<<" "<<cnt;	
//	}	
//	return 0;
//}








//1040 有几个PAT


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	char a[100005];
//	scanf("%s",a);
//	int cnt=0;
//	int n=strlen(a);
//	for(int i=0;i<n-2;i++)                          //时间复杂度太高了O（n^3） 
//	{
//		for(int j=i+1;j<n-1;j++)
//		{
//			for(int k=j+1;k<n;j++)
//			{
//				if(a[i]=='P'&&a[j]=='A'&&a[k]=='T')cnt++;
//			}
//		}
//	}
//	cnt%=1000000007;
//	cout<<cnt;
//	return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;                               //超时 
//int main()
//{
//	char a[100005];
//	scanf("%s",a);
//	int n=strlen(a);
//	int pcount[100005]={0};
//	//int pcount={0};//用于存储每个位置之前的p的个数
//	//[Error] invalid types 'int[int]' for array subscript
//	//这通常是数组的问题，我目前总结出3种可能：
//
////数组变量名不一致，或者没定义，比如你定义了一个ans数组，但是你在用的时候误写成了a数组（oj应该爆CE）
////数组空间不够，比如你要访问a[6]，可是你只定义了int a[6]数组，所以下标最多到5，定义改成7就行了。（oj应该爆RE）
////变量名和数组名重复定义，比如定义了一个int a;然后又定义了一个int a[6];数组，（oj应该爆CE吧）
//
//	if(a[0]=='P')pcount[0]=1;
//	for(int i=1;i<n;i++)
//	{
//		if(a[i]=='P')pcount[i]=pcount[i-1]+1;
//		else pcount[i]=pcount[i-1];
//	} 
//	//      A  P  P  A  P  T
//	//pcount0  1  2  2  3  3
//	//虽然这样储存的不是 每个位置之前的p的个数，而是包含这个位置上的p的个数
//	//但当这个位置上是P时，就不是A，后续也不会用上；而当这个位置是A时，p的个数和前面一样，故也方便好用 
//	long long cnt=0;
//	for(int i=0;i<n-1;i++)
//	{
//		if(a[i]=='A')
//		{
//			for(int j=i+1;j<n;j++)                         //其实没必要用双重循环 
//			{
//				if(a[j]=='T')
//				{
//					cnt+=pcount[i];
//					cnt%=1000000007;
//				}
//			}
//		}
//	 } 
//	cout<<cnt;
//	return 0; 
// } 




//#include<bits/stdc++.h>                                    //ans1 
//using namespace std;
//int sumA[100005],sumP[100005],sumT[100005];
//char a[100005];
//const int MOD = 1000000007;
//int main()
//{
//	scanf("%s",a);	
//	int len=strlen(a);	
//	for(int i=0;i<len;i++)
//	{	
//		sumA[i]+=sumA[i-1]+(a[i]=='A' ? 1 : 0);	
//		sumP[i]+=sumP[i-1]+(a[i]=='P' ? 1 : 0);		
//		sumT[i]+=sumT[i-1]+(a[i]=='T' ? 1 : 0);	
//	}	
//	int sum=0;	
//	for(int i=0;i<len;i++)
//	{	
//		if(a[i]=='A')
//		{		
//			sum=(sum+(sumP[i]*(sumT[len-1]-sumT[i]))%MOD)%MOD;	   //先p×后t	
//		}	
//	}	
//	cout<<sum;
//	return 0;
//}





//#include <iostream>                           //ans2 
//#include <string>
//?
//using namespace std;
//#define N 100001
//?
//int main() {
//    string str;
//    cin >> str;
//    int p_num = 0, pa_num = 0, pat_num = 0;
//    while (str.length() <= N) { //检查输入长度
//        for (int i = 0; i < str.length(); i++) {
//            if (str[i] == 'P') {
//                p_num++;
//                p_num %= 1000000007;
//            }
//            else if (str[i] == 'A') {
//                pa_num += p_num;
//                pa_num %= 1000000007;
//            }
//            else if (str[i]=='T') {
//                pat_num += pa_num;
//                pat_num %= 1000000007;
//            }
//        }
//        break;
//    }
//    cout << pat_num;
//    return 0;
//}

//思路：
//一个T能构建的PAT数量取决于在这个T之前PA的数量，即，每遇到一个T对应PAT的数量为PAT+=num_of_PA；同理，每遇到一个A对应PA的数量为PA+=num_of_P
//
//分析所给案例：
//
//循环演示：
//APPAPT
//初始：P=0;PA=0;PAT=0;
//循环：P++; PA+=P;  PAT+=PA;
//第一次：(A) P=0;PA=0;PAT=0; //A前面没有P，第一次作废
//第二次：(P) P=1;PA=0;PAT=0; 
//第三次：(P) P=2;PA=0;PAT=0;
//第四次：(A) P=2;PA=2;PAT=0; //遇到第一个A，PA+=num_of_P
//第五次：(P) P=3;PA=2;PAT=0; //这个P在第一个A后面，要遇到下一个A才能加进PA里面，这一步只有P++
//第六次：(T) P=3;PA=2;PAT=2; //遇见第一个T，执行PAT+=num_of_PA









#include <string>                                //ans3 
using namespace std;
int main() {
    string s;
    cin >> s;
    int len = s.length(), result = 0, countp = 0, countt = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'T')
            countt++;
    }
    for (int i = 0; i < len; i++) {
        if (s[i] == 'P') countp++;
        if (s[i] == 'T') countt--;
        if (s[i] == 'A') result = (result + (countp * countt) % 1000000007) % 1000000007;
    }
    cout << result;
    return 0;
}





   
//#include<iostream>                                 //ans4 
//using namespace std;
//int countp[100005];
//int main(){
//	string s;
//	cin>>s;
//	int cp=0,ct=0,sum=0;
//	for(int i=0;i<s.length();i++){
//		if(s[i]=='P')cp++;
//        countp[i]=cp;
//	}for(int i=s.length()-1;i>=0;i--){
//		if(s[i]=='T')ct++;
//        else if(s[i]=='A')sum=(sum+(countp[i]*ct%1000000007))%1000000007;
//    }cout<<sum;
//	return 0;
//}





































