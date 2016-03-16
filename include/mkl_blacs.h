/*******************************************************************************
* Copyright 1999-2015 Intel Corporation All Rights Reserved.
*
* The source code,  information  and material  ("Material") contained  herein is
* owned by Intel Corporation or its  suppliers or licensors,  and  title to such
* Material remains with Intel  Corporation or its  suppliers or  licensors.  The
* Material  contains  proprietary  information  of  Intel or  its suppliers  and
* licensors.  The Material is protected by  worldwide copyright  laws and treaty
* provisions.  No part  of  the  Material   may  be  used,  copied,  reproduced,
* modified, published,  uploaded, posted, transmitted,  distributed or disclosed
* in any way without Intel's prior express written permission.  No license under
* any patent,  copyright or other  intellectual property rights  in the Material
* is granted to  or  conferred  upon  you,  either   expressly,  by implication,
* inducement,  estoppel  or  otherwise.  Any  license   under such  intellectual
* property rights must be express and approved by Intel in writing.
*
* Unless otherwise agreed by Intel in writing,  you may not remove or alter this
* notice or  any  other  notice   embedded  in  Materials  by  Intel  or Intel's
* suppliers or licensors in any way.
*******************************************************************************/

/*
!  Content:
!      Intel(R) Math Kernel Library (MKL) interface for BLACS routines
!******************************************************************************/

#ifndef _MKL_BLACS_H_
#define _MKL_BLACS_H_

#include "mkl_types.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* <name>_ declarations */

void	IGAMX2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, MKL_INT *A, MKL_INT *lda, MKL_INT *rA, MKL_INT *cA, MKL_INT *ldia, MKL_INT *rdest, MKL_INT *cdest);
void	SGAMX2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rA, MKL_INT *cA, MKL_INT *ldia, MKL_INT *rdest, MKL_INT *cdest);
void	DGAMX2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rA, MKL_INT *cA, MKL_INT *ldia, MKL_INT *rdest, MKL_INT *cdest);
void	CGAMX2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rA, MKL_INT *cA, MKL_INT *ldia, MKL_INT *rdest, MKL_INT *cdest);
void	ZGAMX2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rA, MKL_INT *cA, MKL_INT *ldia, MKL_INT *rdest, MKL_INT *cdest);

void	IGAMN2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, MKL_INT *A, MKL_INT *lda, MKL_INT *rA, MKL_INT *cA, MKL_INT *ldia, MKL_INT *rdest, MKL_INT *cdest);
void	SGAMN2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rA, MKL_INT *cA, MKL_INT *ldia, MKL_INT *rdest, MKL_INT *cdest);
void	DGAMN2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rA, MKL_INT *cA, MKL_INT *ldia, MKL_INT *rdest, MKL_INT *cdest);
void	CGAMN2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rA, MKL_INT *cA, MKL_INT *ldia, MKL_INT *rdest, MKL_INT *cdest);
void	ZGAMN2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rA, MKL_INT *cA, MKL_INT *ldia, MKL_INT *rdest, MKL_INT *cdest);

void	IGSUM2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, MKL_INT *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);
void	SGSUM2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);
void	DGSUM2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);
void	CGSUM2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);
void	ZGSUM2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);

void	IGESD2D(MKL_INT *ConTxt, MKL_INT *m, MKL_INT *n, MKL_INT *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);
void	SGESD2D(MKL_INT *ConTxt, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);
void	DGESD2D(MKL_INT *ConTxt, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);
void	CGESD2D(MKL_INT *ConTxt, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);
void	ZGESD2D(MKL_INT *ConTxt, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);

void	ITRSD2D(MKL_INT *ConTxt, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, MKL_INT *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);
void	STRSD2D(MKL_INT *ConTxt, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);
void	DTRSD2D(MKL_INT *ConTxt, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);
void	CTRSD2D(MKL_INT *ConTxt, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);
void	ZTRSD2D(MKL_INT *ConTxt, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rdest, MKL_INT *cdest);

void	IGERV2D(MKL_INT *ConTxt, MKL_INT *m, MKL_INT *n, MKL_INT *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	SGERV2D(MKL_INT *ConTxt, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	DGERV2D(MKL_INT *ConTxt, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	CGERV2D(MKL_INT *ConTxt, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	ZGERV2D(MKL_INT *ConTxt, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);

void	ITRRV2D(MKL_INT *ConTxt, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, MKL_INT *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	STRRV2D(MKL_INT *ConTxt, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	DTRRV2D(MKL_INT *ConTxt, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	CTRRV2D(MKL_INT *ConTxt, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	ZTRRV2D(MKL_INT *ConTxt, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);

void	IGEBS2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, MKL_INT *A, MKL_INT *lda);
void	SGEBS2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda);
void	DGEBS2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda);
void	CGEBS2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda);
void	ZGEBS2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda);

void	ITRBS2D(MKL_INT *ConTxt, char *scope, char *top, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, MKL_INT *A, MKL_INT *lda);
void	STRBS2D(MKL_INT *ConTxt, char *scope, char *top, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda);
void	DTRBS2D(MKL_INT *ConTxt, char *scope, char *top, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda);
void	CTRBS2D(MKL_INT *ConTxt, char *scope, char *top, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda);
void	ZTRBS2D(MKL_INT *ConTxt, char *scope, char *top, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda);

void	IGEBR2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, MKL_INT *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	SGEBR2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	DGEBR2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	CGEBR2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	ZGEBR2D(MKL_INT *ConTxt, char *scope, char *top, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);

void	ITRBR2D(MKL_INT *ConTxt, char *scope, char *top, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, MKL_INT *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	STRBR2D(MKL_INT *ConTxt, char *scope, char *top, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	DTRBR2D(MKL_INT *ConTxt, char *scope, char *top, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	CTRBR2D(MKL_INT *ConTxt, char *scope, char *top, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, float *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);
void	ZTRBR2D(MKL_INT *ConTxt, char *scope, char *top, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, double *A, MKL_INT *lda, MKL_INT *rsrc, MKL_INT *csrc);

void	BLACS_PINFO(MKL_INT *mypnum, MKL_INT *nprocs);
void	BLACS_SETUP(MKL_INT *mypnum, MKL_INT *nprocs);
void	BLACS_GET(MKL_INT *ConTxt, MKL_INT *what, MKL_INT *val);
void	BLACS_SET(MKL_INT *ConTxt, MKL_INT *what, MKL_INT *val);
void	BLACS_GRIDINIT(MKL_INT *ConTxt, char *layout, MKL_INT *nprow, MKL_INT *npcol);
void	BLACS_GRIDMAP(MKL_INT *ConTxt, MKL_INT *usermap, MKL_INT *ldup, MKL_INT *nprow0, MKL_INT *npcol0);

void	BLACS_FREEBUFF(MKL_INT *ConTxt, MKL_INT *Wait);
void	BLACS_GRIDEXIT(MKL_INT *ConTxt);
void	BLACS_ABORT(MKL_INT *ConTxt, MKL_INT *ErrNo);
void	BLACS_EXIT(MKL_INT *NotDone);

void	BLACS_GRIDINFO(MKL_INT *ConTxt, MKL_INT *nprow, MKL_INT *npcol, MKL_INT *myrow, MKL_INT *mycol);
MKL_INT	BLACS_PNUM(MKL_INT *ConTxt, MKL_INT *prow, MKL_INT *pcol);
void	BLACS_PCOORD(MKL_INT *ConTxt, MKL_INT *nodenum, MKL_INT *prow, MKL_INT *pcol);

void	BLACS_BARRIER(MKL_INT *ConTxt, char *scope);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _MKL_BLACS_H_ */
