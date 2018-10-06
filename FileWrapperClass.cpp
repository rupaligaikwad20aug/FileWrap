#include<iostream>
using namespace std;

class FileWrap
{
	private:
		int fd;
		char fname[80];
		int fmode;
	public:
		FileWrap(char* filename, char *mode = "read");
		FileWrap(FileWrap &ref)
		{

		}
		~FileWrap()
		{

		}
		void readfile(int size);
		void readfile(int size, int form);
		void writefile(char *str)
		{

		}
		int FileGetPosition()
		{

		}
		int FileChangePosition()
		{

		}
		void printInfo()
		{

		}
		friend void operator +(FileWrap obj1, FileWrap obj2);
		friend bool operator ==(FileWrap obj1, FileWrap obj2);

};

int main()
{


}























