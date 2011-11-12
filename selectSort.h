#include <fstream>
#include <stdio.h>
using namespace std;
template <class Type>
class SelectSort
{
  private:
    int length;
  public:
    Type* data;
    SelectSort<Type>(int len);
    void Sort();
    void Print();
};

  template <class Type>
SelectSort<Type>::SelectSort(int len)
{
  length=len;
  data=new Type[length];
}

  template <class Type>
void SelectSort<Type>::Print()
{
  for(int i=0;i<length;i++)
    cout<<data[i]<<",";
  cout<<endl;
}

  template <class Type>
void SelectSort<Type>::Sort()
{
  int smallIndex=0;
  for(int i=0;i<length;i++)
  {
    smallIndex=i;
    // after this process, smallIndex is pointing to the smallest one
    for(int j=i+1;j<length;j++)
      if(data[smallIndex]>data[j])
        smallIndex=j;
    if(smallIndex!=i)
    {
      data[smallIndex]^=data[i];
      data[i]^=data[smallIndex];
      data[smallIndex]^=data[i];
    }
  }
}
