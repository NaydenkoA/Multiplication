#include"AditionalFunctions.h"
#include"MatrixGenerator.h"
#include"MultithreadingProduct.h"
#include"ShtrassenMethod.h"

int main() {
	vector<vector <int>> a = GenerateMatrix(3,0.1);
	vector<vector <int>> b = GenerateMatrix(3,0.1);
	vector<vector <int>> x;
	int t;
	x = ShtrassenMethod(a,b);
	ShowMatrix(x);
	cout << endl;
	ShowMatrix(DotProduct(a, b));
	return 0;
}