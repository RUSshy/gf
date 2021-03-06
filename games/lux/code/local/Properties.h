/*
 * Lux, a classical shoot 'em up
 * Copyright (C) 2016  Lux team
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LUX_PROPERTIES_H
#define LUX_PROPERTIES_H

namespace lux {

  enum class Origin {
    Hero,
    Enemy,
  };

  // Named after: https://en.wikipedia.org/wiki/88_modern_constellations
  enum class ShipClass {
    Antlia,
    Bootes,
    Cygnus,
    Draco,
    Eridanus,
  };

}

#endif // LUX_PROPERTIES_H
