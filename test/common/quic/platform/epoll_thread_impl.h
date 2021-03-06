#pragma once

// NOLINT(namespace-envoy)

// This file is part of the QUICHE platform implementation, and is not to be
// consumed or referenced directly by other Envoy code. It serves purely as a
// porting layer for QUICHE.

#include "quiche_platform_impl/quiche_thread_impl.h"

namespace epoll_server {

using EpollThreadImpl = quiche::QuicheThreadImpl;

} // namespace epoll_server
