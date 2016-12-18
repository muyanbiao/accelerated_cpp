// 计算学生成绩：期末考试成绩 - 40%; 期中考试成绩 - 20%; 家庭作业成绩(用中值代替平均值) - 40%
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::sort;
using std::vector;
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
	vector<double> homework;

	// 将家庭作业成绩读到变量x中
	double x;

	// 不变式
	// 到目前为止，我们已经读到了count个家庭作业成绩
	// 而且sum等于头count个成绩的总和
	while (cin >> x){
		homework.push_back(x);
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if(size == 0){
		cout << endl << "You must enter your grades. Please try again";
		return 1;
	}

	// 对成绩进行排序
	sort(homework.begin(), homework.end());

	// 计算家庭作业的中值
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2 : homework[mid];


	// 计算并输出总成绩
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
	<< 0.2 * midterm + 0.4 * finalterm + 0.4 * median
	<< setprecision(prec) << endl;

	return 0;
	
}
