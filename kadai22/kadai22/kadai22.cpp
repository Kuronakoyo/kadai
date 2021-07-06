#include<stdio.h>
int kadai1();
int kadai2();
int kadai3();

int main()
{
	kadai1();
}
//課題１
struct sVector2
{
  public:
	double x;
	double y;
};
int kadai1()
{
	sVector2 kadai1;
	kadai1.x = 1.0;
	kadai1.y = 2.0;

	printf("Xの座標は%lf\n", kadai1.x);
	printf("Yの座標は%lf\n", kadai1.y);

	return 0;
}

//課題２
struct ssVector2
{
private:
	double x;
	double y;
public:
	void GetVector2(double x, double y);

	double GetVecX() { return x; }
	double GetVecY() { return y; }
};
int kadai2()
{
	ssVector2 kadai2;
	kadai2.GetVector2(5, 6);


	printf("Xの座標は%lf\n", kadai2.GetVecX());
	printf("Yの座標は%lf\n", kadai2.GetVecY());

	return 0;
}

void ssVector2::GetVector2(double x, double y)
{
	this->x = x;
	this->y = y;
}


//課題3
struct sssVector3
{
private:
	double x;
	double y;
	double z;
public:
	void GetVector3(double x, double y, double z);

	double GetVecX() { return x; }
	double GetVecY() { return y; }
	double GetVecZ() { return z; }
};
int kadai3()
{
	sssVector3 kadai3;

	// 代入
	kadai3.GetVector3(2.0, 3.0, 5.0);

	printf("Xの座標%lf", kadai3.GetVecX());
	printf("Yの座標%lf", kadai3.GetVecY());
	printf("Zの座標%lf", kadai3.GetVecZ());

	return 0;
}
void sssVector3::GetVector3(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
