/*
 * Copyright (c) 2000, 2017, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

#include "gc/mmtk/noBarrier.hpp"


   void NoBarrier::write_ref_array_work(MemRegion mr) {
       guarantee(false, "NoBarrier::write_ref_arrey_work  not supported");
   }

   void NoBarrier::write_region_work(MemRegion mr) {
       //guarantee(false, "NoBarrier::write_region_work not supported");
   }


  // Inform the BarrierSet that the the covered heap region that starts
  // with "base" has been changed to have the given size (possibly from 0,
  // for initialization.)
   void NoBarrier::resize_covered_region(MemRegion new_region) {
       guarantee(false, "NoBarrier::resize_covered_region not supported");
   }

  // If the barrier set imposes any alignment restrictions on boundaries
  // within the heap, this function tells whether they are met.
   bool NoBarrier::is_aligned(HeapWord* addr) {
       return true;
   }

  // Print a description of the memory for the barrier set
   void NoBarrier::print_on(outputStream* st) const {

   }