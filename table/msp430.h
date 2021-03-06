/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2010-2015 by Michael Kohn
 *
 */

#ifndef _TABLE_MSP430_H
#define _TABLE_MSP430_H

#include <stdint.h>

#include "common/assembler.h"

enum
{
  OP_NONE,
  OP_ONE_OPERAND,
  OP_JUMP,
  OP_TWO_OPERAND,
  OP_MOVA_AT_REG_REG,
  OP_MOVA_AT_REG_PLUS_REG,
  OP_MOVA_ABS20_REG,
  OP_MOVA_INDIRECT_REG,
  OP_SHIFT20,
  OP_MOVA_REG_ABS,
  OP_MOVA_REG_INDIRECT,
  OP_IMMEDIATE_REG,
  OP_REG_REG,
  OP_CALLA_SOURCE,
  OP_CALLA_ABS20,
  OP_CALLA_INDIRECT_PC,
  OP_CALLA_IMMEDIATE,
  OP_PUSH,
  OP_POP,
};

struct _table_msp430
{
  char *instr;
  uint16_t opcode;
  uint16_t mask;
  uint8_t type;
  //uint8_t cycles;
};

extern struct _table_msp430 table_msp430[];

#endif


