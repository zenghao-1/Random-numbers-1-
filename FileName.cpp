#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#define randomInt(x) rand()%(x)
#define randomDouble(x,y) (double)rand()/RAND_MAX

using namespace std;

int main()
{
	srand((double)time(0));//长生随机种子，0也可以替换成NULL
	for (int i = 0; i < 1; i++)
	{
		cout << randomInt(10) << " ";
	}

	for (int i = 0; i < 1; i++)
	{
		//setprecision(n)，保留几位小数，就让n等于几；采用四舍五入法
		//fixed是设置补0
		cout << setprecision(1) << randomDouble(0.0, 2.0) << " ";//输出时使用setprecision()和fixed进行精度控制和补0,可以提前声明，也可以直接写在输出流中
	}

  //其他的随机数的范围通式
	///*产生一定范围随机数的通用表示公式是：

	//	要取得[0, n)  就是rand（）% n     表示 从0到n - 1的数
	
	//	要取得[a, b)的随机整数，使用(rand() % (b - a)) + a;
	//  要取得[a, b]的随机整数，使用(rand() % (b - a + 1)) + a;
	//  要取得(a, b]的随机整数，使用(rand() % (b - a)) + a + 1;
    //  通用公式:a + rand() % n；其中的a是起始值，n是整数的范围。
    //  要取得a到b之间的随机整数，另一种表示：a + (int)b * rand() / (RAND_MAX + 1)。
    //  要取得0～1之间的浮点数，可以使用rand() / double(RAND_MAX)。*/

}