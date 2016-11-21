/*
 * Copyright(C) 2016 Matheus Alcântara Souza <matheusalcantarasouza@gmail.com>
 */

#include <stdio.h>
#include "emmc_power.h"

int main(int argc, char **argv)
{
	int i;
	int a, b, c, power;
	printf("  EMMC_POWER - DMI-T50 test started...\n");
	
	emmc_power_init(0);

	i = 0;
	while (i < 10) {
		a = i;
		b = i * 2;
		c = a + b;
	}
	printf("oi\n");
	power = emmc_power_end();
	
	printf("power measured: %f\n", power*0.000001);

	return (0);
}
