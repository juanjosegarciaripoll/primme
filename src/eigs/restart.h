/*******************************************************************************
 * Copyright (c) 2018, College of William & Mary
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the College of William & Mary nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COLLEGE OF WILLIAM & MARY BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * PRIMME: https://github.com/primme/primme
 * Contact: Andreas Stathopoulos, a n d r e a s _at_ c s . w m . e d u
 *******************************************************************************
 *   NOTE: THIS FILE IS AUTOMATICALLY GENERATED. PLEASE DON'T MODIFY
 ******************************************************************************/


#ifndef restart_H
#define restart_H
int restart_sprimme(float *V, float *W, float *BV, PRIMME_INT nLocal,
      int basisSize, PRIMME_INT ldV, float *hVals, float *hSVals, int *flags,
      int *iev, int *ievSize, float *blockNorms, float *evecs,
      PRIMME_INT ldevecs, float *Bevecs, PRIMME_INT ldBevecs, int *evecsPerm,
      float *evals, float *resNorms, float *evecsHat, PRIMME_INT ldevecsHat,
      float *M, int ldM, float *Mfact, int ldMfact, int *ipivot,
      int *numConverged, int *numLocked, int *lockedFlags,
      int *numConvergedStored, float *prevhVecs, int nprevhVecs,
      int ldprevhVecs, int numGuesses, float *prevRitzVals,
      int *numPrevRitzVals, float *H, int ldH, float *VtBV, int ldVtBV,
      float *Q, PRIMME_INT ldQ, float *R, int ldR, float *QtV, int ldQtV,
      float *QtQ, int ldQtQ, float *hU, int ldhU, int newldhU,
      float *hVecs, int ldhVecs, int newldhVecs, int *restartSizeOutput,
      int *targetShiftIndex, int *numArbitraryVecs, float *hVecsRot,
      int ldhVecsRot, int *restartsSinceReset, double startTime,
      primme_context ctx);
int Num_aux_update_VWXR_sprimme(float *V, float *W, float *BV,
   PRIMME_INT mV, int nV, PRIMME_INT ldV,
   float *h, int nh, int ldh, float *hVals,
   float *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
   float *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
   float *evecs, int evecsSize, int nX2b, int nX2e, PRIMME_INT ldevecs,
   float *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
   float *R, int nRb, int nRe, PRIMME_INT ldR, float *Rnorms,
   float *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
   float *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
   float *Bevecs, int BevecsSize, int nBX2b, int nBX2e, PRIMME_INT ldBevecs,
   float *rnorms, int nrb, int nre,
   float *VtBV, int nVtBV, int ldVtBV,
   float *H, int nH, int ldH,
   primme_context ctx);
int restart_cprimme(PRIMME_COMPLEX_FLOAT *V, PRIMME_COMPLEX_FLOAT *W, PRIMME_COMPLEX_FLOAT *BV, PRIMME_INT nLocal,
      int basisSize, PRIMME_INT ldV, float *hVals, float *hSVals, int *flags,
      int *iev, int *ievSize, float *blockNorms, PRIMME_COMPLEX_FLOAT *evecs,
      PRIMME_INT ldevecs, PRIMME_COMPLEX_FLOAT *Bevecs, PRIMME_INT ldBevecs, int *evecsPerm,
      float *evals, float *resNorms, PRIMME_COMPLEX_FLOAT *evecsHat, PRIMME_INT ldevecsHat,
      PRIMME_COMPLEX_FLOAT *M, int ldM, PRIMME_COMPLEX_FLOAT *Mfact, int ldMfact, int *ipivot,
      int *numConverged, int *numLocked, int *lockedFlags,
      int *numConvergedStored, PRIMME_COMPLEX_FLOAT *prevhVecs, int nprevhVecs,
      int ldprevhVecs, int numGuesses, float *prevRitzVals,
      int *numPrevRitzVals, PRIMME_COMPLEX_FLOAT *H, int ldH, PRIMME_COMPLEX_FLOAT *VtBV, int ldVtBV,
      PRIMME_COMPLEX_FLOAT *Q, PRIMME_INT ldQ, PRIMME_COMPLEX_FLOAT *R, int ldR, PRIMME_COMPLEX_FLOAT *QtV, int ldQtV,
      PRIMME_COMPLEX_FLOAT *QtQ, int ldQtQ, PRIMME_COMPLEX_FLOAT *hU, int ldhU, int newldhU,
      PRIMME_COMPLEX_FLOAT *hVecs, int ldhVecs, int newldhVecs, int *restartSizeOutput,
      int *targetShiftIndex, int *numArbitraryVecs, PRIMME_COMPLEX_FLOAT *hVecsRot,
      int ldhVecsRot, int *restartsSinceReset, double startTime,
      primme_context ctx);
int Num_aux_update_VWXR_cprimme(PRIMME_COMPLEX_FLOAT *V, PRIMME_COMPLEX_FLOAT *W, PRIMME_COMPLEX_FLOAT *BV,
   PRIMME_INT mV, int nV, PRIMME_INT ldV,
   PRIMME_COMPLEX_FLOAT *h, int nh, int ldh, float *hVals,
   PRIMME_COMPLEX_FLOAT *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
   PRIMME_COMPLEX_FLOAT *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
   PRIMME_COMPLEX_FLOAT *evecs, int evecsSize, int nX2b, int nX2e, PRIMME_INT ldevecs,
   PRIMME_COMPLEX_FLOAT *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
   PRIMME_COMPLEX_FLOAT *R, int nRb, int nRe, PRIMME_INT ldR, float *Rnorms,
   PRIMME_COMPLEX_FLOAT *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
   PRIMME_COMPLEX_FLOAT *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
   PRIMME_COMPLEX_FLOAT *Bevecs, int BevecsSize, int nBX2b, int nBX2e, PRIMME_INT ldBevecs,
   float *rnorms, int nrb, int nre,
   PRIMME_COMPLEX_FLOAT *VtBV, int nVtBV, int ldVtBV,
   PRIMME_COMPLEX_FLOAT *H, int nH, int ldH,
   primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(restart_Sprimme)
#  define restart_Sprimme CONCAT(restart_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(restart_Rprimme)
#  define restart_Rprimme CONCAT(restart_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(restart_SHprimme)
#  define restart_SHprimme CONCAT(restart_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(restart_RHprimme)
#  define restart_RHprimme CONCAT(restart_,HOST_REAL_SUF)
#endif
int restart_dprimme(double *V, double *W, double *BV, PRIMME_INT nLocal,
      int basisSize, PRIMME_INT ldV, double *hVals, double *hSVals, int *flags,
      int *iev, int *ievSize, double *blockNorms, double *evecs,
      PRIMME_INT ldevecs, double *Bevecs, PRIMME_INT ldBevecs, int *evecsPerm,
      double *evals, double *resNorms, double *evecsHat, PRIMME_INT ldevecsHat,
      double *M, int ldM, double *Mfact, int ldMfact, int *ipivot,
      int *numConverged, int *numLocked, int *lockedFlags,
      int *numConvergedStored, double *prevhVecs, int nprevhVecs,
      int ldprevhVecs, int numGuesses, double *prevRitzVals,
      int *numPrevRitzVals, double *H, int ldH, double *VtBV, int ldVtBV,
      double *Q, PRIMME_INT ldQ, double *R, int ldR, double *QtV, int ldQtV,
      double *QtQ, int ldQtQ, double *hU, int ldhU, int newldhU,
      double *hVecs, int ldhVecs, int newldhVecs, int *restartSizeOutput,
      int *targetShiftIndex, int *numArbitraryVecs, double *hVecsRot,
      int ldhVecsRot, int *restartsSinceReset, double startTime,
      primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(Num_aux_update_VWXR_Sprimme)
#  define Num_aux_update_VWXR_Sprimme CONCAT(Num_aux_update_VWXR_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_aux_update_VWXR_Rprimme)
#  define Num_aux_update_VWXR_Rprimme CONCAT(Num_aux_update_VWXR_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_aux_update_VWXR_SHprimme)
#  define Num_aux_update_VWXR_SHprimme CONCAT(Num_aux_update_VWXR_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_aux_update_VWXR_RHprimme)
#  define Num_aux_update_VWXR_RHprimme CONCAT(Num_aux_update_VWXR_,HOST_REAL_SUF)
#endif
int Num_aux_update_VWXR_dprimme(double *V, double *W, double *BV,
   PRIMME_INT mV, int nV, PRIMME_INT ldV,
   double *h, int nh, int ldh, double *hVals,
   double *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
   double *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
   double *evecs, int evecsSize, int nX2b, int nX2e, PRIMME_INT ldevecs,
   double *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
   double *R, int nRb, int nRe, PRIMME_INT ldR, double *Rnorms,
   double *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
   double *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
   double *Bevecs, int BevecsSize, int nBX2b, int nBX2e, PRIMME_INT ldBevecs,
   double *rnorms, int nrb, int nre,
   double *VtBV, int nVtBV, int ldVtBV,
   double *H, int nH, int ldH,
   primme_context ctx);
int restart_zprimme(PRIMME_COMPLEX_DOUBLE *V, PRIMME_COMPLEX_DOUBLE *W, PRIMME_COMPLEX_DOUBLE *BV, PRIMME_INT nLocal,
      int basisSize, PRIMME_INT ldV, double *hVals, double *hSVals, int *flags,
      int *iev, int *ievSize, double *blockNorms, PRIMME_COMPLEX_DOUBLE *evecs,
      PRIMME_INT ldevecs, PRIMME_COMPLEX_DOUBLE *Bevecs, PRIMME_INT ldBevecs, int *evecsPerm,
      double *evals, double *resNorms, PRIMME_COMPLEX_DOUBLE *evecsHat, PRIMME_INT ldevecsHat,
      PRIMME_COMPLEX_DOUBLE *M, int ldM, PRIMME_COMPLEX_DOUBLE *Mfact, int ldMfact, int *ipivot,
      int *numConverged, int *numLocked, int *lockedFlags,
      int *numConvergedStored, PRIMME_COMPLEX_DOUBLE *prevhVecs, int nprevhVecs,
      int ldprevhVecs, int numGuesses, double *prevRitzVals,
      int *numPrevRitzVals, PRIMME_COMPLEX_DOUBLE *H, int ldH, PRIMME_COMPLEX_DOUBLE *VtBV, int ldVtBV,
      PRIMME_COMPLEX_DOUBLE *Q, PRIMME_INT ldQ, PRIMME_COMPLEX_DOUBLE *R, int ldR, PRIMME_COMPLEX_DOUBLE *QtV, int ldQtV,
      PRIMME_COMPLEX_DOUBLE *QtQ, int ldQtQ, PRIMME_COMPLEX_DOUBLE *hU, int ldhU, int newldhU,
      PRIMME_COMPLEX_DOUBLE *hVecs, int ldhVecs, int newldhVecs, int *restartSizeOutput,
      int *targetShiftIndex, int *numArbitraryVecs, PRIMME_COMPLEX_DOUBLE *hVecsRot,
      int ldhVecsRot, int *restartsSinceReset, double startTime,
      primme_context ctx);
int Num_aux_update_VWXR_zprimme(PRIMME_COMPLEX_DOUBLE *V, PRIMME_COMPLEX_DOUBLE *W, PRIMME_COMPLEX_DOUBLE *BV,
   PRIMME_INT mV, int nV, PRIMME_INT ldV,
   PRIMME_COMPLEX_DOUBLE *h, int nh, int ldh, double *hVals,
   PRIMME_COMPLEX_DOUBLE *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
   PRIMME_COMPLEX_DOUBLE *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
   PRIMME_COMPLEX_DOUBLE *evecs, int evecsSize, int nX2b, int nX2e, PRIMME_INT ldevecs,
   PRIMME_COMPLEX_DOUBLE *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
   PRIMME_COMPLEX_DOUBLE *R, int nRb, int nRe, PRIMME_INT ldR, double *Rnorms,
   PRIMME_COMPLEX_DOUBLE *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
   PRIMME_COMPLEX_DOUBLE *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
   PRIMME_COMPLEX_DOUBLE *Bevecs, int BevecsSize, int nBX2b, int nBX2e, PRIMME_INT ldBevecs,
   double *rnorms, int nrb, int nre,
   PRIMME_COMPLEX_DOUBLE *VtBV, int nVtBV, int ldVtBV,
   PRIMME_COMPLEX_DOUBLE *H, int nH, int ldH,
   primme_context ctx);
int restart_smagmaprimme(magma_float *V, magma_float *W, magma_float *BV, PRIMME_INT nLocal,
      int basisSize, PRIMME_INT ldV, float *hVals, float *hSVals, int *flags,
      int *iev, int *ievSize, float *blockNorms, magma_float *evecs,
      PRIMME_INT ldevecs, magma_float *Bevecs, PRIMME_INT ldBevecs, int *evecsPerm,
      float *evals, float *resNorms, magma_float *evecsHat, PRIMME_INT ldevecsHat,
      float *M, int ldM, float *Mfact, int ldMfact, int *ipivot,
      int *numConverged, int *numLocked, int *lockedFlags,
      int *numConvergedStored, float *prevhVecs, int nprevhVecs,
      int ldprevhVecs, int numGuesses, float *prevRitzVals,
      int *numPrevRitzVals, float *H, int ldH, float *VtBV, int ldVtBV,
      magma_float *Q, PRIMME_INT ldQ, float *R, int ldR, float *QtV, int ldQtV,
      float *QtQ, int ldQtQ, float *hU, int ldhU, int newldhU,
      float *hVecs, int ldhVecs, int newldhVecs, int *restartSizeOutput,
      int *targetShiftIndex, int *numArbitraryVecs, float *hVecsRot,
      int ldhVecsRot, int *restartsSinceReset, double startTime,
      primme_context ctx);
int Num_aux_update_VWXR_smagmaprimme(magma_float *V, magma_float *W, magma_float *BV,
   PRIMME_INT mV, int nV, PRIMME_INT ldV,
   float *h, int nh, int ldh, float *hVals,
   magma_float *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
   magma_float *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
   magma_float *evecs, int evecsSize, int nX2b, int nX2e, PRIMME_INT ldevecs,
   magma_float *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
   magma_float *R, int nRb, int nRe, PRIMME_INT ldR, float *Rnorms,
   magma_float *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
   magma_float *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
   magma_float *Bevecs, int BevecsSize, int nBX2b, int nBX2e, PRIMME_INT ldBevecs,
   float *rnorms, int nrb, int nre,
   float *VtBV, int nVtBV, int ldVtBV,
   float *H, int nH, int ldH,
   primme_context ctx);
int restart_cmagmaprimme(magma_complex_float *V, magma_complex_float *W, magma_complex_float *BV, PRIMME_INT nLocal,
      int basisSize, PRIMME_INT ldV, float *hVals, float *hSVals, int *flags,
      int *iev, int *ievSize, float *blockNorms, magma_complex_float *evecs,
      PRIMME_INT ldevecs, magma_complex_float *Bevecs, PRIMME_INT ldBevecs, int *evecsPerm,
      float *evals, float *resNorms, magma_complex_float *evecsHat, PRIMME_INT ldevecsHat,
      PRIMME_COMPLEX_FLOAT *M, int ldM, PRIMME_COMPLEX_FLOAT *Mfact, int ldMfact, int *ipivot,
      int *numConverged, int *numLocked, int *lockedFlags,
      int *numConvergedStored, PRIMME_COMPLEX_FLOAT *prevhVecs, int nprevhVecs,
      int ldprevhVecs, int numGuesses, float *prevRitzVals,
      int *numPrevRitzVals, PRIMME_COMPLEX_FLOAT *H, int ldH, PRIMME_COMPLEX_FLOAT *VtBV, int ldVtBV,
      magma_complex_float *Q, PRIMME_INT ldQ, PRIMME_COMPLEX_FLOAT *R, int ldR, PRIMME_COMPLEX_FLOAT *QtV, int ldQtV,
      PRIMME_COMPLEX_FLOAT *QtQ, int ldQtQ, PRIMME_COMPLEX_FLOAT *hU, int ldhU, int newldhU,
      PRIMME_COMPLEX_FLOAT *hVecs, int ldhVecs, int newldhVecs, int *restartSizeOutput,
      int *targetShiftIndex, int *numArbitraryVecs, PRIMME_COMPLEX_FLOAT *hVecsRot,
      int ldhVecsRot, int *restartsSinceReset, double startTime,
      primme_context ctx);
int Num_aux_update_VWXR_cmagmaprimme(magma_complex_float *V, magma_complex_float *W, magma_complex_float *BV,
   PRIMME_INT mV, int nV, PRIMME_INT ldV,
   PRIMME_COMPLEX_FLOAT *h, int nh, int ldh, float *hVals,
   magma_complex_float *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
   magma_complex_float *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
   magma_complex_float *evecs, int evecsSize, int nX2b, int nX2e, PRIMME_INT ldevecs,
   magma_complex_float *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
   magma_complex_float *R, int nRb, int nRe, PRIMME_INT ldR, float *Rnorms,
   magma_complex_float *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
   magma_complex_float *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
   magma_complex_float *Bevecs, int BevecsSize, int nBX2b, int nBX2e, PRIMME_INT ldBevecs,
   float *rnorms, int nrb, int nre,
   PRIMME_COMPLEX_FLOAT *VtBV, int nVtBV, int ldVtBV,
   PRIMME_COMPLEX_FLOAT *H, int nH, int ldH,
   primme_context ctx);
int restart_dmagmaprimme(magma_double *V, magma_double *W, magma_double *BV, PRIMME_INT nLocal,
      int basisSize, PRIMME_INT ldV, double *hVals, double *hSVals, int *flags,
      int *iev, int *ievSize, double *blockNorms, magma_double *evecs,
      PRIMME_INT ldevecs, magma_double *Bevecs, PRIMME_INT ldBevecs, int *evecsPerm,
      double *evals, double *resNorms, magma_double *evecsHat, PRIMME_INT ldevecsHat,
      double *M, int ldM, double *Mfact, int ldMfact, int *ipivot,
      int *numConverged, int *numLocked, int *lockedFlags,
      int *numConvergedStored, double *prevhVecs, int nprevhVecs,
      int ldprevhVecs, int numGuesses, double *prevRitzVals,
      int *numPrevRitzVals, double *H, int ldH, double *VtBV, int ldVtBV,
      magma_double *Q, PRIMME_INT ldQ, double *R, int ldR, double *QtV, int ldQtV,
      double *QtQ, int ldQtQ, double *hU, int ldhU, int newldhU,
      double *hVecs, int ldhVecs, int newldhVecs, int *restartSizeOutput,
      int *targetShiftIndex, int *numArbitraryVecs, double *hVecsRot,
      int ldhVecsRot, int *restartsSinceReset, double startTime,
      primme_context ctx);
int Num_aux_update_VWXR_dmagmaprimme(magma_double *V, magma_double *W, magma_double *BV,
   PRIMME_INT mV, int nV, PRIMME_INT ldV,
   double *h, int nh, int ldh, double *hVals,
   magma_double *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
   magma_double *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
   magma_double *evecs, int evecsSize, int nX2b, int nX2e, PRIMME_INT ldevecs,
   magma_double *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
   magma_double *R, int nRb, int nRe, PRIMME_INT ldR, double *Rnorms,
   magma_double *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
   magma_double *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
   magma_double *Bevecs, int BevecsSize, int nBX2b, int nBX2e, PRIMME_INT ldBevecs,
   double *rnorms, int nrb, int nre,
   double *VtBV, int nVtBV, int ldVtBV,
   double *H, int nH, int ldH,
   primme_context ctx);
int restart_zmagmaprimme(magma_complex_double *V, magma_complex_double *W, magma_complex_double *BV, PRIMME_INT nLocal,
      int basisSize, PRIMME_INT ldV, double *hVals, double *hSVals, int *flags,
      int *iev, int *ievSize, double *blockNorms, magma_complex_double *evecs,
      PRIMME_INT ldevecs, magma_complex_double *Bevecs, PRIMME_INT ldBevecs, int *evecsPerm,
      double *evals, double *resNorms, magma_complex_double *evecsHat, PRIMME_INT ldevecsHat,
      PRIMME_COMPLEX_DOUBLE *M, int ldM, PRIMME_COMPLEX_DOUBLE *Mfact, int ldMfact, int *ipivot,
      int *numConverged, int *numLocked, int *lockedFlags,
      int *numConvergedStored, PRIMME_COMPLEX_DOUBLE *prevhVecs, int nprevhVecs,
      int ldprevhVecs, int numGuesses, double *prevRitzVals,
      int *numPrevRitzVals, PRIMME_COMPLEX_DOUBLE *H, int ldH, PRIMME_COMPLEX_DOUBLE *VtBV, int ldVtBV,
      magma_complex_double *Q, PRIMME_INT ldQ, PRIMME_COMPLEX_DOUBLE *R, int ldR, PRIMME_COMPLEX_DOUBLE *QtV, int ldQtV,
      PRIMME_COMPLEX_DOUBLE *QtQ, int ldQtQ, PRIMME_COMPLEX_DOUBLE *hU, int ldhU, int newldhU,
      PRIMME_COMPLEX_DOUBLE *hVecs, int ldhVecs, int newldhVecs, int *restartSizeOutput,
      int *targetShiftIndex, int *numArbitraryVecs, PRIMME_COMPLEX_DOUBLE *hVecsRot,
      int ldhVecsRot, int *restartsSinceReset, double startTime,
      primme_context ctx);
int Num_aux_update_VWXR_zmagmaprimme(magma_complex_double *V, magma_complex_double *W, magma_complex_double *BV,
   PRIMME_INT mV, int nV, PRIMME_INT ldV,
   PRIMME_COMPLEX_DOUBLE *h, int nh, int ldh, double *hVals,
   magma_complex_double *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
   magma_complex_double *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
   magma_complex_double *evecs, int evecsSize, int nX2b, int nX2e, PRIMME_INT ldevecs,
   magma_complex_double *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
   magma_complex_double *R, int nRb, int nRe, PRIMME_INT ldR, double *Rnorms,
   magma_complex_double *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
   magma_complex_double *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
   magma_complex_double *Bevecs, int BevecsSize, int nBX2b, int nBX2e, PRIMME_INT ldBevecs,
   double *rnorms, int nrb, int nre,
   PRIMME_COMPLEX_DOUBLE *VtBV, int nVtBV, int ldVtBV,
   PRIMME_COMPLEX_DOUBLE *H, int nH, int ldH,
   primme_context ctx);
#endif
