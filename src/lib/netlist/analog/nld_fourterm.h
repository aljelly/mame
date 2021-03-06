// license:GPL-2.0+
// copyright-holders:Couriersud

#ifndef NLD_FOURTERM_H_
#define NLD_FOURTERM_H_

///
/// \file nld_fourterm.h
///

#include "netlist/nl_setup.h"

// ----------------------------------------------------------------------------------------
// Macros
// ----------------------------------------------------------------------------------------

#define VCCS(name)                                                            \
		NET_REGISTER_DEV(VCCS, name)

#define CCCS(name)                                                            \
		NET_REGISTER_DEV(CCCS, name)

#define VCVS(name)                                                            \
		NET_REGISTER_DEV(VCVS, name)

#define CCVS(name)                                                            \
		NET_REGISTER_DEV(CCVS, name)

#define LVCCS(name)                                                           \
		NET_REGISTER_DEV(LVCCS, name)

#endif // NLD_FOURTERM_H_
