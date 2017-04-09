//  Copyright 2017 The CCIR Authors. All rights reserved.
//  Use of this source code is governed by a BSD-style
//  license that can be found in the LICENSE file.

// +build ignore

#undef assert

#ifdef NDEBUG
#define assert(ignore) ((void)0)
#else
#define assert(x) (void)((x) ? 0 : (__builtin_fprintf(stderr, "%s:%s: assertion failure in %s: %s\n", __FILE__, __LINE__, __func__, #x), __builtin_abort(), 0), 0)
#endif				/* NDEBUG */