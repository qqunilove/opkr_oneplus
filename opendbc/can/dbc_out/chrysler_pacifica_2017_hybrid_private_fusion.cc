#include "common_dbc.h"

namespace {

const Signal sigs_512[] = {
    {
      .name = "COUNTER",
      .start_bit = 51,
      .msb  = 51,
      .lsb = 48,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "zeros_0",
      .start_bit = 3,
      .msb  = 3,
      .lsb = 8,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "status0",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 4,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "unknown_0",
      .start_bit = 23,
      .msb  = 23,
      .lsb = 16,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "increasing",
      .start_bit = 31,
      .msb  = 31,
      .lsb = 32,
      .size = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "zeros_1",
      .start_bit = 47,
      .msb  = 47,
      .lsb = 52,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_514[] = {
    {
      .name = "COUNTER",
      .start_bit = 43,
      .msb  = 43,
      .lsb = 40,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig3",
      .start_bit = 31,
      .msb  = 31,
      .lsb = 24,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "increasing",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 44,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_544[] = {
    {
      .name = "COUNTER",
      .start_bit = 51,
      .msb  = 51,
      .lsb = 48,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "REL_ACCEL",
      .start_bit = 3,
      .msb  = 3,
      .lsb = 8,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "track_id",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 4,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "REL_SPEED",
      .start_bit = 19,
      .msb  = 19,
      .lsb = 24,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "status1",
      .start_bit = 23,
      .msb  = 23,
      .lsb = 20,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig2",
      .start_bit = 33,
      .msb  = 33,
      .lsb = 40,
      .size = 10,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "status2",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 34,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "zeros",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_576[] = {
    {
      .name = "COUNTER",
      .start_bit = 51,
      .msb  = 51,
      .lsb = 48,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "sig0",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 0,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig1",
      .start_bit = 15,
      .msb  = 15,
      .lsb = 16,
      .size = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig2",
      .start_bit = 31,
      .msb  = 31,
      .lsb = 32,
      .size = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "zeros",
      .start_bit = 47,
      .msb  = 47,
      .lsb = 52,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_608[] = {
    {
      .name = "COUNTER",
      .start_bit = 51,
      .msb  = 51,
      .lsb = 48,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "REL_ACCEL",
      .start_bit = 3,
      .msb  = 3,
      .lsb = 8,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "track_id",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 4,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "REL_SPEED",
      .start_bit = 19,
      .msb  = 19,
      .lsb = 24,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "status1",
      .start_bit = 23,
      .msb  = 23,
      .lsb = 20,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig2",
      .start_bit = 33,
      .msb  = 33,
      .lsb = 40,
      .size = 10,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "status2",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 34,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "zeros",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_640[] = {
    {
      .name = "COUNTER",
      .start_bit = 51,
      .msb  = 51,
      .lsb = 48,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "sig0",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 0,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig1",
      .start_bit = 15,
      .msb  = 15,
      .lsb = 16,
      .size = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig2",
      .start_bit = 31,
      .msb  = 31,
      .lsb = 32,
      .size = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "zeros",
      .start_bit = 47,
      .msb  = 47,
      .lsb = 52,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_644[] = {
    {
      .name = "COUNTER",
      .start_bit = 51,
      .msb  = 51,
      .lsb = 48,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "REL_ACCEL",
      .start_bit = 3,
      .msb  = 3,
      .lsb = 8,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "track_id",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 4,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "REL_SPEED",
      .start_bit = 19,
      .msb  = 19,
      .lsb = 24,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "status1",
      .start_bit = 23,
      .msb  = 23,
      .lsb = 20,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig2",
      .start_bit = 33,
      .msb  = 33,
      .lsb = 40,
      .size = 10,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "status2",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 34,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "zeros",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_648[] = {
    {
      .name = "COUNTER",
      .start_bit = 51,
      .msb  = 51,
      .lsb = 48,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "sig0",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 0,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig1",
      .start_bit = 15,
      .msb  = 15,
      .lsb = 16,
      .size = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig2",
      .start_bit = 31,
      .msb  = 31,
      .lsb = 32,
      .size = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "zeros",
      .start_bit = 47,
      .msb  = 47,
      .lsb = 52,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_652[] = {
    {
      .name = "COUNTER",
      .start_bit = 51,
      .msb  = 51,
      .lsb = 48,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "REL_ACCEL",
      .start_bit = 3,
      .msb  = 3,
      .lsb = 8,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "track_id",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 4,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "REL_SPEED",
      .start_bit = 19,
      .msb  = 19,
      .lsb = 24,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "status1",
      .start_bit = 23,
      .msb  = 23,
      .lsb = 20,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig2",
      .start_bit = 33,
      .msb  = 33,
      .lsb = 40,
      .size = 10,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "status2",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 34,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "zeros",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_656[] = {
    {
      .name = "COUNTER",
      .start_bit = 51,
      .msb  = 51,
      .lsb = 48,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "sig0",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 0,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig1",
      .start_bit = 15,
      .msb  = 15,
      .lsb = 16,
      .size = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "sig2",
      .start_bit = 31,
      .msb  = 31,
      .lsb = 32,
      .size = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "zeros",
      .start_bit = 47,
      .msb  = 47,
      .lsb = 52,
      .size = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_672[] = {
    {
      .name = "NEW_SIGNAL_1",
      .start_bit = 9,
      .msb  = 9,
      .lsb = 16,
      .size = 10,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_2",
      .start_bit = 45,
      .msb  = 45,
      .lsb = 52,
      .size = 10,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_674[] = {
    {
      .name = "REL_SPEED",
      .start_bit = 17,
      .msb  = 17,
      .lsb = 24,
      .size = 10,
      .is_signed = false,
      .factor = 0.2857,
      .offset = -146.278,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_676[] = {
    {
      .name = "REL_SPEED",
      .start_bit = 17,
      .msb  = 17,
      .lsb = 24,
      .size = 10,
      .is_signed = false,
      .factor = 0.2857,
      .offset = -146.278,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_678[] = {
    {
      .name = "REL_SPEED",
      .start_bit = 17,
      .msb  = 17,
      .lsb = 24,
      .size = 10,
      .is_signed = false,
      .factor = 0.2857,
      .offset = -146.278,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_680[] = {
    {
      .name = "REL_SPEED",
      .start_bit = 17,
      .msb  = 17,
      .lsb = 24,
      .size = 10,
      .is_signed = false,
      .factor = 0.2857,
      .offset = -146.278,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_682[] = {
    {
      .name = "REL_SPEED",
      .start_bit = 17,
      .msb  = 17,
      .lsb = 24,
      .size = 10,
      .is_signed = false,
      .factor = 0.2857,
      .offset = -146.278,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_684[] = {
    {
      .name = "REL_SPEED",
      .start_bit = 17,
      .msb  = 17,
      .lsb = 24,
      .size = 10,
      .is_signed = false,
      .factor = 0.2857,
      .offset = -146.278,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_686[] = {
    {
      .name = "REL_SPEED",
      .start_bit = 17,
      .msb  = 17,
      .lsb = 24,
      .size = 10,
      .is_signed = false,
      .factor = 0.2857,
      .offset = -146.278,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_688[] = {
    {
      .name = "REL_SPEED",
      .start_bit = 17,
      .msb  = 17,
      .lsb = 24,
      .size = 10,
      .is_signed = false,
      .factor = 0.2857,
      .offset = -146.278,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_690[] = {
    {
      .name = "REL_SPEED",
      .start_bit = 17,
      .msb  = 17,
      .lsb = 24,
      .size = 10,
      .is_signed = false,
      .factor = 0.2857,
      .offset = -146.278,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_692[] = {
    {
      .name = "REL_SPEED",
      .start_bit = 17,
      .msb  = 17,
      .lsb = 24,
      .size = 10,
      .is_signed = false,
      .factor = 0.2857,
      .offset = -146.278,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_706[] = {
    {
      .name = "COUNTER",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 18,
      .msb  = 18,
      .lsb = 24,
      .size = 11,
      .is_signed = false,
      .factor = 0.005,
      .offset = -1000.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 34,
      .msb  = 34,
      .lsb = 40,
      .size = 11,
      .is_signed = false,
      .factor = 0.073,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_708[] = {
    {
      .name = "COUNTER",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 18,
      .msb  = 18,
      .lsb = 24,
      .size = 11,
      .is_signed = false,
      .factor = 0.005,
      .offset = -1000.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 34,
      .msb  = 34,
      .lsb = 40,
      .size = 11,
      .is_signed = false,
      .factor = 0.073,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_710[] = {
    {
      .name = "COUNTER",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 18,
      .msb  = 18,
      .lsb = 24,
      .size = 11,
      .is_signed = false,
      .factor = 0.005,
      .offset = -1000.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 34,
      .msb  = 34,
      .lsb = 40,
      .size = 11,
      .is_signed = false,
      .factor = 0.073,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_712[] = {
    {
      .name = "COUNTER",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 18,
      .msb  = 18,
      .lsb = 24,
      .size = 11,
      .is_signed = false,
      .factor = 0.005,
      .offset = -1000.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 34,
      .msb  = 34,
      .lsb = 40,
      .size = 11,
      .is_signed = false,
      .factor = 0.073,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_714[] = {
    {
      .name = "COUNTER",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 18,
      .msb  = 18,
      .lsb = 24,
      .size = 11,
      .is_signed = false,
      .factor = 0.005,
      .offset = -1000.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 34,
      .msb  = 34,
      .lsb = 40,
      .size = 11,
      .is_signed = false,
      .factor = 0.073,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_716[] = {
    {
      .name = "COUNTER",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 18,
      .msb  = 18,
      .lsb = 24,
      .size = 11,
      .is_signed = false,
      .factor = 0.005,
      .offset = -1000.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 34,
      .msb  = 34,
      .lsb = 40,
      .size = 11,
      .is_signed = false,
      .factor = 0.073,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_718[] = {
    {
      .name = "COUNTER",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 18,
      .msb  = 18,
      .lsb = 24,
      .size = 11,
      .is_signed = false,
      .factor = 0.005,
      .offset = -1000.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 34,
      .msb  = 34,
      .lsb = 40,
      .size = 11,
      .is_signed = false,
      .factor = 0.073,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_720[] = {
    {
      .name = "COUNTER",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 18,
      .msb  = 18,
      .lsb = 24,
      .size = 11,
      .is_signed = false,
      .factor = 0.005,
      .offset = -1000.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 34,
      .msb  = 34,
      .lsb = 40,
      .size = 11,
      .is_signed = false,
      .factor = 0.073,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_722[] = {
    {
      .name = "COUNTER",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 18,
      .msb  = 18,
      .lsb = 24,
      .size = 11,
      .is_signed = false,
      .factor = 0.005,
      .offset = -1000.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 34,
      .msb  = 34,
      .lsb = 40,
      .size = 11,
      .is_signed = false,
      .factor = 0.073,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_724[] = {
    {
      .name = "COUNTER",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 52,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CHECKSUM",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::CHRYSLER_CHECKSUM,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 18,
      .msb  = 18,
      .lsb = 24,
      .size = 11,
      .is_signed = false,
      .factor = 0.005,
      .offset = -1000.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 34,
      .msb  = 34,
      .lsb = 40,
      .size = 11,
      .is_signed = false,
      .factor = 0.073,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};

const Msg msgs[] = {
  {
    .name = "unknown_200",
    .address = 0x200,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_512),
    .sigs = sigs_512,
  },
  {
    .name = "unknown_202",
    .address = 0x202,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_514),
    .sigs = sigs_514,
  },
  {
    .name = "a_1",
    .address = 0x220,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_544),
    .sigs = sigs_544,
  },
  {
    .name = "b_1",
    .address = 0x240,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_576),
    .sigs = sigs_576,
  },
  {
    .name = "a_2",
    .address = 0x260,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_608),
    .sigs = sigs_608,
  },
  {
    .name = "b_2",
    .address = 0x280,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_640),
    .sigs = sigs_640,
  },
  {
    .name = "a_3",
    .address = 0x284,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_644),
    .sigs = sigs_644,
  },
  {
    .name = "b_3",
    .address = 0x288,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_648),
    .sigs = sigs_648,
  },
  {
    .name = "a_4",
    .address = 0x28C,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_652),
    .sigs = sigs_652,
  },
  {
    .name = "b_4",
    .address = 0x290,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_656),
    .sigs = sigs_656,
  },
  {
    .name = "NEW_MSG_5",
    .address = 0x2A0,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_672),
    .sigs = sigs_672,
  },
  {
    .name = "d_1",
    .address = 0x2A2,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_674),
    .sigs = sigs_674,
  },
  {
    .name = "d_2",
    .address = 0x2A4,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_676),
    .sigs = sigs_676,
  },
  {
    .name = "d_3",
    .address = 0x2A6,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_678),
    .sigs = sigs_678,
  },
  {
    .name = "d_4",
    .address = 0x2A8,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_680),
    .sigs = sigs_680,
  },
  {
    .name = "d_5",
    .address = 0x2AA,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_682),
    .sigs = sigs_682,
  },
  {
    .name = "d_6",
    .address = 0x2AC,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_684),
    .sigs = sigs_684,
  },
  {
    .name = "d_7",
    .address = 0x2AE,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_686),
    .sigs = sigs_686,
  },
  {
    .name = "d_8",
    .address = 0x2B0,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_688),
    .sigs = sigs_688,
  },
  {
    .name = "d_9",
    .address = 0x2B2,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_690),
    .sigs = sigs_690,
  },
  {
    .name = "d_10",
    .address = 0x2B4,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_692),
    .sigs = sigs_692,
  },
  {
    .name = "c_1",
    .address = 0x2C2,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_706),
    .sigs = sigs_706,
  },
  {
    .name = "c_2",
    .address = 0x2C4,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_708),
    .sigs = sigs_708,
  },
  {
    .name = "c_3",
    .address = 0x2C6,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_710),
    .sigs = sigs_710,
  },
  {
    .name = "c_4",
    .address = 0x2C8,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_712),
    .sigs = sigs_712,
  },
  {
    .name = "c_5",
    .address = 0x2CA,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_714),
    .sigs = sigs_714,
  },
  {
    .name = "c_6",
    .address = 0x2CC,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_716),
    .sigs = sigs_716,
  },
  {
    .name = "c_7",
    .address = 0x2CE,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_718),
    .sigs = sigs_718,
  },
  {
    .name = "c_8",
    .address = 0x2D0,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_720),
    .sigs = sigs_720,
  },
  {
    .name = "c_9",
    .address = 0x2D2,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_722),
    .sigs = sigs_722,
  },
  {
    .name = "c_10",
    .address = 0x2D4,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_724),
    .sigs = sigs_724,
  },
};

const Val vals[] = {
};

}

const DBC chrysler_pacifica_2017_hybrid_private_fusion = {
  .name = "chrysler_pacifica_2017_hybrid_private_fusion",
  .num_msgs = ARRAYSIZE(msgs),
  .msgs = msgs,
  .vals = vals,
  .num_vals = ARRAYSIZE(vals),
};

dbc_init(chrysler_pacifica_2017_hybrid_private_fusion)