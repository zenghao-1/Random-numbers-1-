#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#define randomInt(x) rand()%(x)
#define randomDouble(x,y) (double)rand()/RAND_MAX

using namespace std;

int main()
{
	srand((double)time(0));//����������ӣ�0Ҳ�����滻��NULL
	for (int i = 0; i < 1; i++)
	{
		cout << randomInt(10) << " ";
	}

	for (int i = 0; i < 1; i++)
	{
		//setprecision(n)��������λС��������n���ڼ��������������뷨
		//fixed�����ò�0
		cout << setprecision(1) << randomDouble(0.0, 2.0) << " ";//���ʱʹ��setprecision()��fixed���о��ȿ��ƺͲ�0,������ǰ������Ҳ����ֱ��д���������
	}

  //������������ķ�Χͨʽ
	///*����һ����Χ�������ͨ�ñ�ʾ��ʽ�ǣ�

	//	Ҫȡ��[0, n)  ����rand����% n     ��ʾ ��0��n - 1����
	
	//	Ҫȡ��[a, b)�����������ʹ��(rand() % (b - a)) + a;
	//  Ҫȡ��[a, b]�����������ʹ��(rand() % (b - a + 1)) + a;
	//  Ҫȡ��(a, b]�����������ʹ��(rand() % (b - a)) + a + 1;
    //  ͨ�ù�ʽ:a + rand() % n�����е�a����ʼֵ��n�������ķ�Χ��
    //  Ҫȡ��a��b֮��������������һ�ֱ�ʾ��a + (int)b * rand() / (RAND_MAX + 1)��
    //  Ҫȡ��0��1֮��ĸ�����������ʹ��rand() / double(RAND_MAX)��*/

}