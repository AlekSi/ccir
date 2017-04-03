//  Copyright 2017 The CCIR Authors. All rights reserved.
//  Use of this source code is governed by a BSD-style
//  license that can be found in the LICENSE file.

// +build ignore

#ifndef _CTYPE_H_
#define _CTYPE_H_

typedef __LOCALE_TYPE__ locale_t;

int isprint(int c);
int tolower(int c);

#endif				/* _CTYPE_H_ */
