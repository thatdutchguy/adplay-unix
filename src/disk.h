/*
 * AdPlay/UNIX - OPL2 audio player
 * Copyright (C) 2001, 2002 Simon Peter <dn.tlp@gmx.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  
 */

#ifndef H_DISK
#define H_DISK

#include <fstream>
#include <binwrap.h>
#include "output.h"

class DiskWriter: public EmuPlayer
{
public:
  DiskWriter(const char *filename, unsigned char nbits, unsigned char nchannels,
	     unsigned long nfreq);
  virtual ~DiskWriter();

protected:
  virtual void output(const void *buf, unsigned long size);

private:
  binowstream	*f;
  ofstream	out;
  unsigned long samplesize;
};

#endif
