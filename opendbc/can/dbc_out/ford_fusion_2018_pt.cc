#include "common_dbc.h"

namespace {

const Signal sigs_118[] = {
    {
      .name = "SteWhlRelInit_An_Sns",
      .start_bit = 6,
      .msb  = 6,
      .lsb = 8,
      .size = 15,
      .is_signed = false,
      .factor = 0.1,
      .offset = -1600.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SteWhlRelCalib_An_Sns",
      .start_bit = 23,
      .msb  = 23,
      .lsb = 25,
      .size = 15,
      .is_signed = false,
      .factor = 0.1,
      .offset = -1600.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SteWhlAn_No_Cs",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 32,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SteWhlAn_No_Cnt",
      .start_bit = 47,
      .msb  = 47,
      .lsb = 44,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SteWhlRelInit2_An_Sns",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 56,
      .size = 16,
      .is_signed = false,
      .factor = 0.1,
      .offset = -3200.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_130[] = {
    {
      .name = "SteeringColumnTorque",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 0,
      .size = 8,
      .is_signed = false,
      .factor = 0.0625,
      .offset = -8.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "EPAS_FAILURE",
      .start_bit = 9,
      .msb  = 9,
      .lsb = 8,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SAPPAngleControlStat2",
      .start_bit = 11,
      .msb  = 11,
      .lsb = 11,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SAPPAngleControlStat3",
      .start_bit = 12,
      .msb  = 12,
      .lsb = 12,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SAPPAngleControlStat4",
      .start_bit = 13,
      .msb  = 13,
      .lsb = 13,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SAPPAngleControlStat5",
      .start_bit = 14,
      .msb  = 14,
      .lsb = 14,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SAPPAngleControlStat6",
      .start_bit = 15,
      .msb  = 15,
      .lsb = 15,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SteMdule_I_Est",
      .start_bit = 21,
      .msb  = 21,
      .lsb = 26,
      .size = 12,
      .is_signed = false,
      .factor = 0.05,
      .offset = -64.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SAPPAngleControlStat1",
      .start_bit = 23,
      .msb  = 23,
      .lsb = 22,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SteMdule_U_Meas",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 32,
      .size = 8,
      .is_signed = false,
      .factor = 0.05,
      .offset = 6.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_131[] = {
    {
      .name = "Left_Turn_Light",
      .start_bit = 4,
      .msb  = 4,
      .lsb = 4,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Right_Turn_Light",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 5,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Cancel",
      .start_bit = 8,
      .msb  = 8,
      .lsb = 8,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Dist_Incr",
      .start_bit = 11,
      .msb  = 11,
      .lsb = 11,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Dist_Decr",
      .start_bit = 12,
      .msb  = 12,
      .lsb = 12,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Set",
      .start_bit = 28,
      .msb  = 28,
      .lsb = 28,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Resume",
      .start_bit = 29,
      .msb  = 29,
      .lsb = 29,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Main",
      .start_bit = 38,
      .msb  = 38,
      .lsb = 38,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_145[] = {
    {
      .name = "VehPtch_W_Actl",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 8,
      .size = 16,
      .is_signed = false,
      .factor = 0.0002,
      .offset = -6.5,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VehRol_W_Actl",
      .start_bit = 23,
      .msb  = 23,
      .lsb = 24,
      .size = 16,
      .is_signed = false,
      .factor = 0.0002,
      .offset = -6.5,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VehYaw_W_Actl",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 40,
      .size = 16,
      .is_signed = false,
      .factor = 0.0002,
      .offset = -6.5,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_146[] = {
    {
      .name = "VehLat_A_Actl",
      .start_bit = 4,
      .msb  = 4,
      .lsb = 8,
      .size = 13,
      .is_signed = false,
      .factor = 0.01,
      .offset = -40.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VehLatAActl_D_Qf",
      .start_bit = 6,
      .msb  = 6,
      .lsb = 5,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VehLong_A_Actl",
      .start_bit = 20,
      .msb  = 20,
      .lsb = 24,
      .size = 13,
      .is_signed = false,
      .factor = 0.01,
      .offset = -40.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VehLongAActl_D_Qf",
      .start_bit = 22,
      .msb  = 22,
      .lsb = 21,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VehVert_A_Actl",
      .start_bit = 36,
      .msb  = 36,
      .lsb = 40,
      .size = 13,
      .is_signed = false,
      .factor = 0.01,
      .offset = -40.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VehVertAActl_D_Qf",
      .start_bit = 38,
      .msb  = 38,
      .lsb = 37,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_357[] = {
    {
      .name = "Brake_Drv_Appl",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 5,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Cruise_State",
      .start_bit = 11,
      .msb  = 11,
      .lsb = 8,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Set_Speed",
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
};
const Signal sigs_516[] = {
    {
      .name = "ApedPosScal_Pc_Actl",
      .start_bit = 1,
      .msb  = 1,
      .lsb = 8,
      .size = 10,
      .is_signed = false,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_534[] = {
    {
      .name = "WhlRotatFr_No_Cnt",
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
      .name = "WhlRotatFl_No_Cnt",
      .start_bit = 15,
      .msb  = 15,
      .lsb = 8,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WhlRotatRr_No_Cnt",
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
      .name = "WhlRotatRl_No_Cnt",
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
      .name = "WhlDirRr_D_Actl",
      .start_bit = 33,
      .msb  = 33,
      .lsb = 32,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WhlDirFl_D_Actl",
      .start_bit = 35,
      .msb  = 35,
      .lsb = 34,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WhlDirFr_D_Actl",
      .start_bit = 37,
      .msb  = 37,
      .lsb = 36,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WhlDirRl_D_Actl",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 38,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WHEEL_ROLLING_TIMESTAMP",
      .start_bit = 47,
      .msb  = 47,
      .lsb = 40,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_535[] = {
    {
      .name = "WhlFl_W_Meas",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 10,
      .size = 14,
      .is_signed = false,
      .factor = 0.04,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WhlFr_W_Meas",
      .start_bit = 23,
      .msb  = 23,
      .lsb = 26,
      .size = 14,
      .is_signed = false,
      .factor = 0.04,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WhlRl_W_Meas",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 42,
      .size = 14,
      .is_signed = false,
      .factor = 0.04,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WhlRr_W_Meas",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 58,
      .size = 14,
      .is_signed = false,
      .factor = 0.04,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_947[] = {
    {
      .name = "Door_RL_Open",
      .start_bit = 48,
      .msb  = 48,
      .lsb = 48,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Door_RR_Open",
      .start_bit = 49,
      .msb  = 49,
      .lsb = 49,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Door_FR_Open",
      .start_bit = 60,
      .msb  = 60,
      .lsb = 60,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Door_FL_Open",
      .start_bit = 61,
      .msb  = 61,
      .lsb = 61,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_963[] = {
    {
      .name = "Brake_Lights",
      .start_bit = 8,
      .msb  = 8,
      .lsb = 8,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_970[] = {
    {
      .name = "Lkas_Alert",
      .start_bit = 3,
      .msb  = 3,
      .lsb = 0,
      .size = 4,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Lkas_Action",
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
      .name = "Lane_Curvature",
      .start_bit = 15,
      .msb  = 15,
      .lsb = 20,
      .size = 12,
      .is_signed = false,
      .factor = 5e-06,
      .offset = -0.01,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Steer_Angle_Req",
      .start_bit = 19,
      .msb  = 19,
      .lsb = 24,
      .size = 12,
      .is_signed = false,
      .factor = 0.04297,
      .offset = -88.00445,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_972[] = {
    {
      .name = "LaActAvail_D_Actl",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 4,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LaActDeny_B_Actl",
      .start_bit = 6,
      .msb  = 6,
      .lsb = 6,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LaHandsOff_B_Actl",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 7,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_984[] = {
    {
      .name = "Set_Me_X80",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 32,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Set_Me_X45",
      .start_bit = 47,
      .msb  = 47,
      .lsb = 40,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Hands_Warning",
      .start_bit = 49,
      .msb  = 49,
      .lsb = 49,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Hands_Warning_W_Chime",
      .start_bit = 50,
      .msb  = 50,
      .lsb = 50,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Lines_Hud",
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
      .name = "Set_Me_X30",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};

const Msg msgs[] = {
  {
    .name = "Steering_Wheel_Data_CG1",
    .address = 0x76,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_118),
    .sigs = sigs_118,
  },
  {
    .name = "EPAS_INFO",
    .address = 0x82,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_130),
    .sigs = sigs_130,
  },
  {
    .name = "Steering_Buttons",
    .address = 0x83,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_131),
    .sigs = sigs_131,
  },
  {
    .name = "Yaw_Data",
    .address = 0x91,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_145),
    .sigs = sigs_145,
  },
  {
    .name = "Accel_Data",
    .address = 0x92,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_146),
    .sigs = sigs_146,
  },
  {
    .name = "Cruise_Status",
    .address = 0x165,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_357),
    .sigs = sigs_357,
  },
  {
    .name = "EngineData_14",
    .address = 0x204,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_516),
    .sigs = sigs_516,
  },
  {
    .name = "WheelData",
    .address = 0x216,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_534),
    .sigs = sigs_534,
  },
  {
    .name = "WheelSpeed_CG1",
    .address = 0x217,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_535),
    .sigs = sigs_535,
  },
  {
    .name = "Doors",
    .address = 0x3B3,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_947),
    .sigs = sigs_947,
  },
  {
    .name = "BCM_to_HS_Body",
    .address = 0x3C3,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_963),
    .sigs = sigs_963,
  },
  {
    .name = "Lane_Keep_Assist_Control",
    .address = 0x3CA,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_970),
    .sigs = sigs_970,
  },
  {
    .name = "Lane_Keep_Assist_Status",
    .address = 0x3CC,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_972),
    .sigs = sigs_972,
  },
  {
    .name = "Lane_Keep_Assist_Ui",
    .address = 0x3D8,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_984),
    .sigs = sigs_984,
  },
};

const Val vals[] = {
    {
      .name = "Cruise_State",
      .address = 0x165,
      .def_val = "4 ACTIVE 3 STANDBY 0 OFF",
      .sigs = sigs_357,
    },
    {
      .name = "Lkas_Action",
      .address = 0x3CA,
      .def_val = "15 OFF 9 ABRUPT 8 ABRUPT2 5 SMOOTH 4 SMOOTH2",
      .sigs = sigs_970,
    },
    {
      .name = "Lkas_Alert",
      .address = 0x3CA,
      .def_val = "15 NO_ALERT 3 HIGH_INTENSITY 2 MID_INTENSITY 1 LOW_INTENSITY",
      .sigs = sigs_970,
    },
    {
      .name = "LaActAvail_D_Actl",
      .address = 0x3CC,
      .def_val = "3 AVAILABLE 2 TBD 1 NOT_AVAILABLE 0 FAULT",
      .sigs = sigs_972,
    },
    {
      .name = "Lines_Hud",
      .address = 0x3D8,
      .def_val = "15 NONE 11 GREY_YELLOW 8 GREEN_RED 7 YELLOW_GREY 6 GREY_GREY 4 RED_GREEN 3 GREEN_GREEN",
      .sigs = sigs_984,
    },
};

}

const DBC ford_fusion_2018_pt = {
  .name = "ford_fusion_2018_pt",
  .num_msgs = ARRAYSIZE(msgs),
  .msgs = msgs,
  .vals = vals,
  .num_vals = ARRAYSIZE(vals),
};

dbc_init(ford_fusion_2018_pt)