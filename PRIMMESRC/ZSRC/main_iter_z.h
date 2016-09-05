/*******************************************************************************
 *   PRIMME PReconditioned Iterative MultiMethod Eigensolver
 *   Copyright (C) 2015 College of William & Mary,
 *   James R. McCombs, Eloy Romero Alcalde, Andreas Stathopoulos, Lingfei Wu
 *
 *   This file is part of PRIMME.
 *
 *   PRIMME is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU Lesser General Public
 *   License as published by the Free Software Foundation; either
 *   version 2.1 of the License, or (at your option) any later version.
 *
 *   PRIMME is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *   Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public
 *   License along with this library; if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *******************************************************************************
 * File: main_iter.h
 *
 * Purpose - Prototype for calling the main solver routine in main_iter.c
 *
 ******************************************************************************/


#ifndef MAIN_ITER_H
#define MAIN_ITER_H

int main_iter_zprimme(double *evals, int *perm, SCALAR *evecs,
   double *resNorms, double machEps, int *intWork, void *realWork, 
   primme_params *primme);

int prepare_candidates_zprimme(SCALAR *V, SCALAR *W, PRIMME_INT nLocal,
      SCALAR *H, int ldH, int basisSize, PRIMME_INT ldV, SCALAR *X, SCALAR *R,
      SCALAR *hVecs, int ldhVecs, double *hVals, double *hSVals, int *flags,
      int numEvals, double *blockNorms, int blockNormsSize,
      int maxBlockSize, SCALAR *evecs, int numLocked, double *evals, 
      double *resNorms, int targetShiftIndex, double machEps, int *iev, 
      int *blockSize, int *recentlyConverged, int *numArbitraryVecs,
      double *smallestResNorm, SCALAR *hVecsRot, int ldhVecsRot, int *reset,
      SCALAR *rwork, size_t *rworkSize, int *iwork, int iworkSize,
      primme_params *primme);

#endif /* MAIN_ITER_H */
