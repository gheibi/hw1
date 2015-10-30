# include <iostream>
using namespace std;
/*Hello
 * This program calculates Fibonacci Numbers
 * It asks the number of 'N' and writes Fibonacci numbers until the 'N'th number
 * 
 * written by "Ali Gheibi" 29.10.2015 11:00 pm
 */
int main(){
  int f0=0,f1=1;
  int f,i,N;
  cout<<"Please let me know till which number of Fibonacci Numbers you want to see N="<<endl;
  cin>> N;
  cout<<"N0="<<f0<<endl;
  cout<<"N1="<<f1<<endl;
   for(int i=1;i<N;i+=1){
     f=f1+f0;
     f0=f1;
     f1=f;   
     cout<<"N"<<i+1<<"="<<f<<endl;
   }
  return 0;
}
