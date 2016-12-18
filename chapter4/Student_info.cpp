#include "Stuent_info.h"

using std::istream; useing std::vector;
bool compare(const Student_info& x, const Student_info& y)
{
	return x.name < y.name;
}

isream& read(istream& is, Student_info& s)
{
	// 读入并存储学生的姓名以及期中，期末考试成绩
	is >> s.name >> s.midterm >> s.finalterm;

	read_hw(is, s.homework);
	return is;
}

// 从输入流中将家庭作业的成绩读入到一个vector<double>中
istream& read_hw(istream& is, vector<double>& hw)
{
	if(is){
		// 清除原先的内容
		hw.clear();

		// 读家庭作业成绩
		double x;
		while(is >> x)
			hw.push_back(x);

		// 清除流以使输入动作对下一个学生有效
		is.clear();
	}
	return is;
}
