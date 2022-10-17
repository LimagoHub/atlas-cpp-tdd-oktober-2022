#include <iostream>
#include "calculator_impl.h"
#include "calculator_logger.h"
#include "calc_client.h"

int main()
{
	calculator_impl calc;
	calculator_logger logger{ calc };
	calc_client client{logger};
	client.go();
}