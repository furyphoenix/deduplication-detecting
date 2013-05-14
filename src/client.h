/*
 * These duplication's socket client side.
 * 
 * @filename: server.h
 * @project: deduplication
 * 
 * @protocol: Public domain
 * @version: 1.0
 * @author: Firstboy
 * @date: 2012-07-20
 */

#ifndef _DEDUPLICATION_CLIENT_H_
#define _DEDUPLICATION_CLIENT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include "common.h"

int dup_client(const char* host, 
	int port, 
	f_simhash_split_method	simhash_split, 
	uint64_t hashcode, 
	PSimhashNode* p_phashcode, 
	int* p_count, 
	uint64_t hashflag);

#ifdef __cplusplus
}
#endif

#endif /* _DEDUPLICATION_CLIENT_H_ */
