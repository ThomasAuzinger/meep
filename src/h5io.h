/* Copyright (C) 2004 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef H5IO_H
#define H5IO_H

namespace meep {
     namespace h5io {

	  double *read(const char *filename, const char *dataname,
		       int *rank, int *dims, int maxrank);
	  
	  void write_chunk(const char *filename, const char *dataname,
			   int rank, const int *dims,
			   double *data,
			   const int *chunk_start, const int *chunk_dims,
			   bool parallel, bool first_chunk,
			   bool append_data = false, int dindex = -1,
			   bool append_file = false,
			   bool single_precision = true);

	  void write(const char *filename, const char *dataname,
		     double *data, int rank, const int *dims,
		     bool append_file = false,
		     bool single_precision = true);


	  char *read(const char *filename, const char *dataname);
	  void write(const char *filename, const char *dataname,
		     const char *data,
		     bool append_file);

     } // namespace h5io
} // namespace meep

#endif /* H5IO_H */
