// Autores: Andrei Gabriel Vlasceanu [839756] & Andrés Yubero Segura [842236]

#include "store.h"
#include "logger.h"
#include <complex>
#include <iostream>

using namespace std;

int main()
{
	Logger<double> temp_log("temperature",
							{new StoreLast<double>,
							 new StoreMax<double>,
							 new StoreMin<double>,
							 new StoreRange<double>,
							 new StoreAvg<double>(0)});
	temp_log.push(16.0);
	temp_log.push({17.5, 25.0, 20.5});
	temp_log.log();

	Logger<complex<double>> ornt_log("orientation",
									 {new StoreLast<complex<double>>,
									  new StoreMax<complex<double>>,
									  new StoreMin<complex<double>>,
									  new StoreRange<complex<double>>,
									  new StoreAvg<complex<double>>(0)});
	ornt_log.push({{0, 1.5}, {3.0}, {2.5, 1.0}});
	ornt_log.log();

	Logger<vector<double>> pstn_log("position",
									{new StoreLast<vector<double>>,
									 new StoreMax<vector<double>>,
									 new StoreMin<vector<double>>,
									 new StoreRange<vector<double>>,
									 new StoreAvg<vector<double>>({0, 0})});
	pstn_log.push({{0, 1.5}, {3.0, 0.0}, {2.5, 1.0}});
	pstn_log.log();

	return 0;
}
