/**
 * Ruuvi board selection header, inspired by Nordic Semiconductor "boards.h" and "custom_board.h"
 *
 * If you wish to compile for your proprietary board, please define BOARD_PROPIETARY in C preprocessor macros.
 * You should also define the board name, for example BOARD_RUUVITAG_B for the preprocessor.
 *
 * License: BSD-3
 * Author: Otso Jousimaa <otso@ojousima.net>
 */
#ifndef RUUVI_BOARDS_H
#define RUUVI_BOARDS_H

#define RUUVI_BOARDS_SEMVER "0.1.0"

#ifdef BOARD_PROPRIETARY
  #include "proprietary_board.h"
#endif
#ifdef BOARD_RUUVITAG_B
  #include "ruuvi_board_ruuvitag_b.h"
#endif
#ifdef BOARD_KAARLE
  #include "ruuvi_board_kaarle.h"
#endif
#ifdef BOARD_KALERVO
  #include "ruuvi_board_kalervo.h"
#endif
#ifdef BOARD_KEIJO
  #include "ruuvi_board_keijo.h"
#endif
/** @brief Port+pin definition for GPIO pin. */
#define RB_PORT_PIN_MAP(PORT, PIN) ((PORT<<8) + (PIN))
/** @brief Pin not in use on this board. */
#define RB_PIN_UNUSED              (0xFFFF)

#endif