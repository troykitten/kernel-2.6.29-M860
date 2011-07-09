/******************************************************************************

  Copyright (C), 2001-2011, Huawei Tech. Co., Ltd.

 ******************************************************************************
  File Name     : VirtSerilaPortDataStructDef.h
  Version       : Initial Draft
  Description   : Virtual serial port date struct define
    Modification: Created file

******************************************************************************/
#ifndef _VIRT_SERIAL_PORT_DATA_STRUCT_DEF_H_
#define _VIRT_SERIAL_PORT_DATA_STRUCT_DEF_H_

#ifdef T_ARM
#include "stdint.h"
#endif

/* virtual serial port message head define */
typedef struct _virt_port_package_head_
{
    uint32_t    unLen;      /* package lenth */
}VirtPortPackageHd;

#endif /* END _VIRT_SERIAL_PORT_DATA_STRUCT_DEF_H_ */

