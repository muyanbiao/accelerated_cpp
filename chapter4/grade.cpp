#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "Student_info.h"

using std::domain_error;
using std::vector;

// 根据学生的期中考试，期末考试以及家庭作业成绩来计算总成绩
double grade(double midterm, double finalterm, double homeword)
{
	return 0.2 * midterm + 0.4 * finalterm + 0.4 * homework;
}

// 根据期中，期末考试成绩以及保存家庭作业成绩的向量来计算学生的总成绩
// 这个函数不用复制它的参数，因为median已经为它完成了这个工作
double grade(double midterm, double finalterm, const vector<double>& hw)
{
	if(hw.size == 0)
		throw domain_error("student has done none homework");
	return grade(midterm, finalterm, median(hw));
}

// 计算某个学生的总成绩
double grade(const Student_info& s)
{
	return grade(s.midterm, s.finalterm, s.homework);
}
