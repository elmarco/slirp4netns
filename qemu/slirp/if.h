/*
 * Copyright (c) 1995 Danny Gasparovski.
 *
 * Please read the file COPYRIGHT for the
 * terms and conditions of the copyright.
 */

#ifndef IF_H
#define IF_H

#define IF_COMPRESS	0x01	/* We want compression */
#define IF_NOCOMPRESS	0x02	/* Do not do compression */
#define IF_AUTOCOMP	0x04	/* Autodetect (default) */
#define IF_NOCIDCOMP	0x08	/* CID compression */

/* Changed from QEMU: IF_MTU and IF_MRU are no longer hard-coded; see Slirp->if_mtu and Slirp->if_mru */
#define	IF_COMP IF_AUTOCOMP	/* Flags for compression */

/* 2 for alignment, 14 for ethernet */
#define IF_MAXLINKHDR (2 + ETH_HLEN)

#endif
