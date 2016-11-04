/*
 * Copyright(C) 2016 Matheus Alcântara Souza <matheusalcantarasouza@gmail.com>
 * 
 * DMI-T50 Electric Multimeter Crawler
 */

#ifndef _EMMC_H_
#define _EMMC_H_

	#define MAX_REQUEST_LEN 1024

	typedef struct {
		double voltage;
		double current;
		double apparentPower;
		double realPower;
		double powerFactor;
		double frequency;
		double reactivePower;
	} emmc_data_t;

	typedef struct {
		double current;
		double realPower;
		double powerFactor;
		double none; /* To be discovered... */
		double averageVoltage;
	} emmc_totals_t;
	
	/* HTTP requests functions */
	void buildSocket(int *socket_file_descriptor);

	void buildAddress(struct sockaddr_in *myaddr);

	void connectAndRead(int *socket_file_descriptor, struct sockaddr_in *myaddr, 
	                      char request[MAX_REQUEST_LEN], int request_len, char *data);

	/* Energy data reading functions */


#endif /* _EMMC_H_ */