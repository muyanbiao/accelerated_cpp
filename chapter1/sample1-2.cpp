//请求用户输入姓名，然后产生一个带框架的问候语句
#include <iostream>
#include <string>

int main()
{
	std::cout << "Please enter your first name:";
	std::string name;
	std::cin >> name;

	//构造我们将要输入的信息
	const std::string greeting = "Hello, " + name + "!";

	//构建输出的第2行和第4行
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";

	//构建输出的第1行和第5行
	const std::string first(second.size(), '*');

	//输出全部内容
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " + greeting + " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;
	
	return 0;
}
