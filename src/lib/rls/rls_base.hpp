//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include "rls_pdu.hpp"

#include <lib/rrc/rrc.hpp>

namespace rls
{

struct PduInfo
{
    OctetString pdu;
    rrc::RrcChannel rrcChannel{};
    int64_t sentTime{};
};

enum class ERlfCause
{
    PDU_ID_EXISTS,
    PDU_ID_FULL
};

} // namespace rls