template <class Type> class SelectSort
{
private:
	int length;

public:
	Type* data;
	SelectSort<Type>(int len);
	void Initial();
	void Sort();
	void Print();
};

template <class Type> SelectSort<Type>::SelectSort(int len)
{
	length=len;
	data=new Type[length];
}

template <class Type> void SelectSort<Type>::Initial()
{

}

template <class Type> void SelectSort<Type>::Print()
{
	for(int i=0;i<length;i++)
	{
		cout<<data[i]<<",";
	}
	cout<<endl;
}

template <class Type> void SelectSort<Type>::Sort()
{
	Type temp;
	for(int i=0;i<length;i++)
	{
		int k=i;
		for(int j=i+1;j<length;j++)
		{
			if(data[j]<data[k])
			{
				k=j;
			}
		}
		
		if(k!=i)
		{
			temp=data[k];
			data[k]=data[i];
			data[i]=temp;
		}
	}
}