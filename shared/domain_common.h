#include <stdlib.h>
#include <libvirt/libvirt.h>
#include <stdio.h>
//
// Created by saka on 9/13/17.
//

#ifndef PROJECT_1_DOMAIN_COMMON_H
#define PROJECT_1_DOMAIN_COMMON_H

struct DomainArray{
    virDomainPtr *domains;
    int size;
};

struct DomainArray getActiveDomains(virConnectPtr conn);

virConnectPtr connectToKVM();

#endif //PROJECT_1_DOMAIN_COMMON_H
