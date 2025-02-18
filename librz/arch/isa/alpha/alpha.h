// SPDX-FileCopyrightText: 2024 Anton Kochkov <anton.kochkov@gmail.com>
// SPDX-License-Identifier: LGPL-3.0-only

#include <rz_types.h>
#include <capstone.h>

#ifndef RZ_ALPHA_H
#define RZ_ALPHA_H

typedef struct {
	csh h;
	cs_mode mode;
	cs_insn *insn;
	ut32 count;
	ut32 word;
	RzPVector /*<RzAsmTokenPattern *>*/ *token_patterns;
} RzAsmAlphaContext;

#endif // RZ_ALPHA_H
