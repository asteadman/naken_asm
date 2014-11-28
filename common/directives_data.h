/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2010-2014 by Michael Kohn
 *
 */

#ifndef _DIRECTIVES_DATA_H
#define _DIRECTIVES_DATA_H

#include "assembler.h"

int parse_db(struct _asm_context *asm_context, int null_term_flag);
int parse_dc16(struct _asm_context *asm_context);
int parse_dc32(struct _asm_context *asm_context);
int parse_dc64(struct _asm_context *asm_context);
int parse_dc(struct _asm_context *asm_context);
int parse_dq(struct _asm_context *asm_context);
int parse_ds(struct _asm_context *asm_context, int size);
int parse_resb(struct _asm_context *asm_context, int size);

#endif

