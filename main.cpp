#include <iostream>

using namespace std;

int main()
{
  int n,i,j,p;

  cout<<"\nenter the number of rows or order of the matrix=>";
  cin>>n;
    char ch[n];
    for(i=0;i<n;i++)
        ch[i]='A'+i;
p=n;

    for(i=0;i<n;i++)
  {
           for(j=n-1;j>=0;j--)
      {
        if(i>=j)
        {
          cout<<ch[p-1];
            p--;
        }
        else p=n;
      }
      p=n;


      cout<<"\n";

  }

    return 0;
}
