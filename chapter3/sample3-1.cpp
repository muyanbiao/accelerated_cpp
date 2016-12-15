// 计算学生成绩：期末考试成绩 - 40%; 期中考试成绩 - 20%; 家庭作业成绩 - 40%
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;

int main()
{
	// 请求输入并读入学生的姓名
	cout << "Please enter your first name: ";

	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	//请求输入并读入期中和期末成绩
	cout << "Please enter your midterm and final exam grades: ";
	double midterm, finalterm;
	cin >> midterm >> finalterm;
	cout << endl;

	// 请求输入家庭作业成绩
	cout << "Enter all your homework grades, followed by end-of-file: ";

	cout << endl;
	// 到目前为止，读到的家庭作业成绩的个数及总和
	int count = 0;
	double sum = 0;

	// 将家庭作业成绩读到变量x中
	double x;

	// 不变式
	// 到目前为止，我们已经读到了count个家庭作业成绩
	// 而且sum等于头count个成绩的总和
	while (cin >> x){
		++count;
		sum += x;
	}

	// 输出结果
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
	<< 0.2 * midterm + 0.4 * finalterm + 0.4 * sum / count
	<< setprecision(prec) << endl;

	return 0;
	
}
