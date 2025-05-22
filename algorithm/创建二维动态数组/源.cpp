template<typename T>
class DynamicArray2D
{
private:
	T** data;
	int rows;
	int cols;
public:
	DynamicArray2D(int r, int c)
	{
		rows = r;
		cols = c;
		data = new T*[rows];
		for(int i=0; i<rows; i++)
			data[i] = new T[cols];
	}
	~DynamicArray2D()
	{
		for (int i = 0; i < rows; i++)
		{
			delete []data[i];
		}
		delete []data;
	}
	T& operator()(int i, int j)
	{
		return data[i][j];
	}
};