/*
 * HEIF codec.
 * Copyright (c) 2017 struktur AG, Dirk Farin <farin@struktur.de>
 *
 * This file is part of libheif.
 *
 * libheif is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * libheif is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libheif.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBHEIF_HEIF_ENCODER_X265_H
#define LIBHEIF_HEIF_ENCODER_X265_H


/* Image sizes in HEVC: since HEVC does not allow for odd image dimensions when
   using chroma 4:2:0, our strategy is as follows.

   - Images with odd dimensions are extended with an extra row/column which
     contains a copy of the border.
   - The HEVC image size generated by x265 is rounded up to the CTU size (?)
     and the conformance window has to be respected.
   - We add an additional crop transform to remove the extra row/column.
 */


const struct heif_encoder_plugin* get_encoder_plugin_x265();

#endif