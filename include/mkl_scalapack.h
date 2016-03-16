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
!      Intel(R) Math Kernel Library (MKL) interface for SCALAPACK routines
!******************************************************************************/

#ifndef _MKL_SCALAPACK_H_
#define _MKL_SCALAPACK_H_

#include "mkl_types.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void	psgetrf(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	pdgetrf(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	pcgetrf(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	pzgetrf(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);

void	psgbtrf(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, float *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgbtrf(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, double *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgbtrf(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgbtrf(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psdbtrf(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, float *a, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddbtrf(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, double *a, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdbtrf(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdbtrf(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pspotrf(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pdpotrf(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pcpotrf(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pzpotrf(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);

void	pspbtrf(char *uplo, MKL_INT *n, MKL_INT *bw, float *a, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpbtrf(char *uplo, MKL_INT *n, MKL_INT *bw, double *a, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpbtrf(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpbtrf(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pspttrf(MKL_INT *n, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpttrf(MKL_INT *n, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpttrf(MKL_INT *n, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpttrf(MKL_INT *n, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psdttrf(MKL_INT *n, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddttrf(MKL_INT *n, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdttrf(MKL_INT *n, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdttrf(MKL_INT *n, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgetrs(char *trans, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pdgetrs(char *trans, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pcgetrs(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pzgetrs(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);

void	psgbtrs(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgbtrs(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgbtrs(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgbtrs(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pspotrs(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pdpotrs(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pcpotrs(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pzpotrs(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);

void	pspbtrs(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpbtrs(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpbtrs(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpbtrs(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pspttrs(MKL_INT *n, MKL_INT *nrhs, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpttrs(MKL_INT *n, MKL_INT *nrhs, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpttrs(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpttrs(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psdttrs(char *trans, MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddttrs(char *trans, MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdttrs(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdttrs(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psdbtrs(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddbtrs(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdbtrs(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdbtrs(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pstrtrs(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pdtrtrs(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pctrtrs(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pztrtrs(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);

void	psgecon(char *norm, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdgecon(char *norm, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcgecon(char *norm, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzgecon(char *norm, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	pspocon(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdpocon(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcpocon(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzpocon(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	pstrcon(char *norm, char *uplo, char *diag, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *rcond, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdtrcon(char *norm, char *uplo, char *diag, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *rcond, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pctrcon(char *norm, char *uplo, char *diag, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *rcond, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pztrcon(char *norm, char *uplo, char *diag, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *rcond, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	psgerfs(char *trans, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdgerfs(char *trans, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcgerfs(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzgerfs(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	psporfs(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdporfs(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcporfs(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzporfs(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	pstrrfs(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdtrrfs(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pctrrfs(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pztrrfs(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	psgetri(MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdgetri(MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcgetri(MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pzgetri(MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);

void	pspotri(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pdpotri(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pcpotri(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pzpotri(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);

void	pstrtri(char *uplo, char *diag, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pdtrtri(char *uplo, char *diag, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pctrtri(char *uplo, char *diag, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pztrtri(char *uplo, char *diag, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);

void	psgeequ(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, MKL_INT *info);
void	pdgeequ(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, MKL_INT *info);
void	pcgeequ(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, MKL_INT *info);
void	pzgeequ(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, MKL_INT *info);

void	pspoequ(MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, MKL_INT *info);
void	pdpoequ(MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, MKL_INT *info);
void	pcpoequ(MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, MKL_INT *info);
void	pzpoequ(MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, MKL_INT *info);

void	psgeqrf(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgeqrf(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgeqrf(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgeqrf(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgeqpf(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgeqpf(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgeqpf(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzgeqpf(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	psorgqr(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorgqr(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);

void	pcungqr(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzungqr(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psormqr(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormqr(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	pcunmqr(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmqr(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgelqf(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgelqf(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgelqf(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgelqf(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psorglq(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorglq(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);

void	pcunglq(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunglq(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psormlq(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormlq(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	pcunmlq(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmlq(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgeqlf(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgeqlf(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgeqlf(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgeqlf(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psorgql(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorgql(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);

void	pcungql(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzungql(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psormql(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormql(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	pcunmql(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmql(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgerqf(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgerqf(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgerqf(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgerqf(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psorgrq(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorgrq(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);

void	pcungrq(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzungrq(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psormrq(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormrq(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	pcunmrq(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmrq(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pstzrzf(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdtzrzf(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pctzrzf(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pztzrzf(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psormrz(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormrz(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	pcunmrz(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmrz(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psggqrf(MKL_INT *n, MKL_INT *m, MKL_INT *p, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *taua, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *taub, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdggqrf(MKL_INT *n, MKL_INT *m, MKL_INT *p, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *taua, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *taub, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcggqrf(MKL_INT *n, MKL_INT *m, MKL_INT *p, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *taua, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *taub, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzggqrf(MKL_INT *n, MKL_INT *m, MKL_INT *p, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *taua, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *taub, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psggrqf(MKL_INT *m, MKL_INT *p, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *taua, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *taub, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdggrqf(MKL_INT *m, MKL_INT *p, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *taua, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *taub, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcggrqf(MKL_INT *m, MKL_INT *p, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *taua, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *taub, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzggrqf(MKL_INT *m, MKL_INT *p, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *taua, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *taub, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pssytrd(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdsytrd(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);

void	psormtr(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormtr(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	pchetrd(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzhetrd(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pcunmtr(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmtr(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psstebz(MKL_INT *ictxt, char *range, char *order, MKL_INT *n, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, float *d, float *e, MKL_INT *m, MKL_INT *nsplit, float *w, MKL_INT *iblock, MKL_INT *isplit, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdstebz(MKL_INT *ictxt, char *range, char *order, MKL_INT *n, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, double *d, double *e, MKL_INT *m, MKL_INT *nsplit, double *w, MKL_INT *iblock, MKL_INT *isplit, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);

void	psstein(MKL_INT *n, float *d, float *e, MKL_INT *m, float *w, MKL_INT *iblock, MKL_INT *isplit, float *orfac, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	pdstein(MKL_INT *n, double *d, double *e, MKL_INT *m, double *w, MKL_INT *iblock, MKL_INT *isplit, double *orfac, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	pcstein(MKL_INT *n, float *d, float *e, MKL_INT *m, float *w, MKL_INT *iblock, MKL_INT *isplit, float *orfac, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	pzstein(MKL_INT *n, double *d, double *e, MKL_INT *m, double *w, MKL_INT *iblock, MKL_INT *isplit, double *orfac, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);

void	psgehrd(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgehrd(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgehrd(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgehrd(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psormhr(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormhr(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	pcunmhr(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmhr(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pslahqr(MKL_INT *wantt, MKL_INT *wantz, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *desca, float *wr, float *wi, MKL_INT *iloz, MKL_INT *ihiz, float *z, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *ilwork, MKL_INT *info);
void	pdlahqr(MKL_INT *wantt, MKL_INT *wantz, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *desca, double *wr, double *wi, MKL_INT *iloz, MKL_INT *ihiz, double *z, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *ilwork, MKL_INT *info);

void	psgebrd(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tauq, float *taup, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgebrd(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tauq, double *taup, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgebrd(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tauq, MKL_Complex8 *taup, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgebrd(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tauq, MKL_Complex16 *taup, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psormbr(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormbr(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	pcunmbr(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmbr(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pssygst(MKL_INT *ibtype, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *scale, MKL_INT *info);
void	pdsygst(MKL_INT *ibtype, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *scale, MKL_INT *info);

void	pchegst(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *scale, MKL_INT *info);
void	pzhegst(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *scale, MKL_INT *info);

void	psgesv(MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pdgesv(MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pcgesv(MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pzgesv(MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);

void	psgesvx(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, float *r, float *c, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdgesvx(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, double *r, double *c, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcgesvx(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, float *r, float *c, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzgesvx(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, double *r, double *c, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	psgbsv(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgbsv(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgbsv(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgbsv(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psdbsv(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddbsv(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdbsv(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdbsv(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psdtsv(MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddtsv(MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdtsv(MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdtsv(MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psposv(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pdposv(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pcposv(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pzposv(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);

void	psposvx(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, float *sr, float *sc, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdposvx(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, double *sr, double *sc, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcposvx(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, float *sr, float *sc, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzposvx(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, double *sr, double *sc, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	pspbsv(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpbsv(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpbsv(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpbsv(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psptsv(MKL_INT *n, MKL_INT *nrhs, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdptsv(MKL_INT *n, MKL_INT *nrhs, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcptsv(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzptsv(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgels(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgels(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgels(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgels(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pssyev(char *jobz, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdsyev(char *jobz, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *info);

void	pssyevd(char *jobz, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdsyevd(char *jobz, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);

void	pssyevx(char *jobz, char *range, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	pdsyevx(char *jobz, char *range, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);

void	pcheev(char *jobz, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzheev(char *jobz, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	pcheevd(char *jobz, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pzheevd(char *jobz, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);

void	pcheevx(char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	pzheevx(char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);

void	psgesvd(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *s, float *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, float *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgesvd(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *s, double *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, double *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgesvd(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *s, MKL_Complex8 *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, MKL_Complex8 *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *info);
void	pzgesvd(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *s, MKL_Complex16 *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, MKL_Complex16 *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *info);

void	pssygvx(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	pdsygvx(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);

void	pchegvx(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	pzhegvx(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);

void	pclacgv(MKL_INT *n, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pzlacgv(MKL_INT *n, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);

void	pcmax1(MKL_INT *n, MKL_Complex8 *amax, MKL_INT *indx, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pzmax1(MKL_INT *n, MKL_Complex16 *amax, MKL_INT *indx, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);

void	ccombamax1(MKL_Complex8 *v1, MKL_Complex8 *v2);
void	zcombamax1(MKL_Complex16 *v1, MKL_Complex16 *v2);

void	pscsum1(MKL_INT *n, float *asum, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pdzsum1(MKL_INT *n, double *asum, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);

void	psdbtrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddbtrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdbtrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdbtrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psdttrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddttrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdttrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdttrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgebd2(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tauq, float *taup, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgebd2(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tauq, double *taup, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgebd2(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tauq, MKL_Complex8 *taup, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgebd2(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tauq, MKL_Complex16 *taup, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgehd2(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgehd2(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgehd2(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgehd2(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgelq2(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgelq2(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgelq2(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgelq2(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgeql2(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgeql2(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgeql2(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgeql2(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgeqr2(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgeqr2(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgeqr2(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgeqr2(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgerq2(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgerq2(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgerq2(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgerq2(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psgetf2(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	pdgetf2(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	pcgetf2(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	pzgetf2(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);

void	pslabrd(MKL_INT *m, MKL_INT *n, MKL_INT *nb, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tauq, float *taup, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, float *work);
void	pdlabrd(MKL_INT *m, MKL_INT *n, MKL_INT *nb, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tauq, double *taup, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, double *work);
void	pclabrd(MKL_INT *m, MKL_INT *n, MKL_INT *nb, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tauq, MKL_Complex8 *taup, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_Complex8 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex8 *work);
void	pzlabrd(MKL_INT *m, MKL_INT *n, MKL_INT *nb, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tauq, MKL_Complex16 *taup, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_Complex16 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex16 *work);

void	pslacon(MKL_INT *n, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *isgn, float *est, MKL_INT *kase);
void	pdlacon(MKL_INT *n, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *isgn, double *est, MKL_INT *kase);
void	pclacon(MKL_INT *n, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *est, MKL_INT *kase);
void	pzlacon(MKL_INT *n, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *est, MKL_INT *kase);

void	pslaconsb(float *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *m, float *h44, float *h33, float *h43h34, float *buf, MKL_INT *lwork);
void	pdlaconsb(double *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *m, double *h44, double *h33, double *h43h34, double *buf, MKL_INT *lwork);

void	pslacp2(char *uplo, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pdlacp2(char *uplo, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pclacp2(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pzlacp2(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);

void	pslacp3(MKL_INT *m, MKL_INT *i, float *a, MKL_INT *desca, float *b, MKL_INT *ldb, MKL_INT *ii, MKL_INT *jj, MKL_INT *rev);
void	pdlacp3(MKL_INT *m, MKL_INT *i, double *a, MKL_INT *desca, double *b, MKL_INT *ldb, MKL_INT *ii, MKL_INT *jj, MKL_INT *rev);

void	pslacpy(char *uplo, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pdlacpy(char *uplo, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pclacpy(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pzlacpy(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);

void	pslaevswp(MKL_INT *n, float *zin, MKL_INT *ldzi, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, float *work, MKL_INT *lwork);
void	pdlaevswp(MKL_INT *n, double *zin, MKL_INT *ldzi, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, double *work, MKL_INT *lwork);
void	pclaevswp(MKL_INT *n, float *zin, MKL_INT *ldzi, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, float *rwork, MKL_INT *lrwork);
void	pzlaevswp(MKL_INT *n, double *zin, MKL_INT *ldzi, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, double *rwork, MKL_INT *lrwork);

void	pslahrd(MKL_INT *n, MKL_INT *k, MKL_INT *nb, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *t, float *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, float *work);
void	pdlahrd(MKL_INT *n, MKL_INT *k, MKL_INT *nb, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *t, double *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, double *work);
void	pclahrd(MKL_INT *n, MKL_INT *k, MKL_INT *nb, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *t, MKL_Complex8 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex8 *work);
void	pzlahrd(MKL_INT *n, MKL_INT *k, MKL_INT *nb, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *t, MKL_Complex16 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex16 *work);

void	pslaiect(float *sigma, MKL_INT *n, float *d, MKL_INT *count);
void	pdlaiectb(float *sigma, MKL_INT *n, float *d, MKL_INT *count);
void	pdlaiectl(float *sigma, MKL_INT *n, float *d, MKL_INT *count);

float	pslange(char *norm, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pdlange(char *norm, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pclange(char *norm, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pzlange(char *norm, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);

float	pslanhs(char *norm, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pdlanhs(char *norm, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pclanhs(char *norm, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pzlanhs(char *norm, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);

float	pslansy(char *norm, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pdlansy(char *norm, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pclansy(char *norm, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pzlansy(char *norm, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pclanhe(char *norm, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pzlanhe(char *norm, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);

float	pslantr(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pdlantr(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pclantr(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pzlantr(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);

void	pslapiv(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	pdlapiv(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	pclapiv(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	pzlapiv(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);

void	pslaqge(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, char *equed);
void	pdlaqge(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, char *equed);
void	pclaqge(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, char *equed);
void	pzlaqge(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, char *equed);

void	pslaqsy(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, char *equed);
void	pdlaqsy(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, char *equed);
void	pclaqsy(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, char *equed);
void	pzlaqsy(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, char *equed);

void	pslared1d(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, float *bycol, float *byall, float *work, MKL_INT *lwork);
void	pdlared1d(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, double *bycol, double *byall, double *work, MKL_INT *lwork);

void	pslared2d(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, float *byrow, float *byall, float *work, MKL_INT *lwork);
void	pdlared2d(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, double *byrow, double *byall, double *work, MKL_INT *lwork);

void	pslarf(char *side, MKL_INT *m, MKL_INT *n, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	pdlarf(char *side, MKL_INT *m, MKL_INT *n, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	pclarf(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	pzlarf(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);

void	pslarfb(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *t, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	pdlarfb(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *t, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	pclarfb(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *t, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	pzlarfb(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *t, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);

void	pclarfc(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	pzlarfc(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);

void	pslarfg(MKL_INT *n, float *alpha, MKL_INT *iax, MKL_INT *jax, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, float *tau);
void	pdlarfg(MKL_INT *n, double *alpha, MKL_INT *iax, MKL_INT *jax, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, double *tau);
void	pclarfg(MKL_INT *n, MKL_Complex8 *alpha, MKL_INT *iax, MKL_INT *jax, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, MKL_Complex8 *tau);
void	pzlarfg(MKL_INT *n, MKL_Complex16 *alpha, MKL_INT *iax, MKL_INT *jax, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, MKL_Complex16 *tau);

void	pslarft(char *direct, char *storev, MKL_INT *n, MKL_INT *k, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *tau, float *t, float *work);
void	pdlarft(char *direct, char *storev, MKL_INT *n, MKL_INT *k, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *tau, double *t, double *work);
void	pclarft(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *tau, MKL_Complex8 *t, MKL_Complex8 *work);
void	pzlarft(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *tau, MKL_Complex16 *t, MKL_Complex16 *work);

void	pslarz(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	pdlarz(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	pclarz(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	pzlarz(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);

void	pslarzb(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *t, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	pdlarzb(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *t, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	pclarzb(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *t, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	pzlarzb(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *t, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);

void	pclarzc(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	pzlarzc(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);

void	pslarzt(char *direct, char *storev, MKL_INT *n, MKL_INT *k, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *tau, float *t, float *work);
void	pdlarzt(char *direct, char *storev, MKL_INT *n, MKL_INT *k, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *tau, double *t, double *work);
void	pclarzt(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *tau, MKL_Complex8 *t, MKL_Complex8 *work);
void	pzlarzt(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *tau, MKL_Complex16 *t, MKL_Complex16 *work);

void	pslascl(char *type, float *cfrom, float *cto, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pdlascl(char *type, double *cfrom, double *cto, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pclascl(char *type, float *cfrom, float *cto, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pzlascl(char *type, double *cfrom, double *cto, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);

void	pslaset(char *uplo, MKL_INT *m, MKL_INT *n, float *alpha, float *beta, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pdlaset(char *uplo, MKL_INT *m, MKL_INT *n, double *alpha, double *beta, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pclaset(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex8 *alpha, MKL_Complex8 *beta, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pzlaset(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex16 *alpha, MKL_Complex16 *beta, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);

void	pslasmsub(float *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *k, float *smlnum, float *buf, MKL_INT *lwork);
void	pdlasmsub(double *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *k, double *smlnum, double *buf, MKL_INT *lwork);

void	pslassq(MKL_INT *n, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, float *scale, float *sumsq);
void	pdlassq(MKL_INT *n, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, double *scale, double *sumsq);
void	pclassq(MKL_INT *n, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, float *scale, float *sumsq);
void	pzlassq(MKL_INT *n, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, double *scale, double *sumsq);

void	pslaswp(char *direc, char *rowcol, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	pdlaswp(char *direc, char *rowcol, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	pclaswp(char *direc, char *rowcol, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	pzlaswp(char *direc, char *rowcol, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);

float	pslatra(MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
double	pdlatra(MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pclatra(MKL_Complex8 *, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pzlatra(MKL_Complex16 *, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);

void	pslatrd(char *uplo, MKL_INT *n, MKL_INT *nb, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tau, float *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, float *work);
void	pdlatrd(char *uplo, MKL_INT *n, MKL_INT *nb, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tau, double *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, double *work);
void	pclatrd(char *uplo, MKL_INT *n, MKL_INT *nb, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tau, MKL_Complex8 *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, MKL_Complex8 *work);
void	pzlatrd(char *uplo, MKL_INT *n, MKL_INT *nb, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tau, MKL_Complex16 *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, MKL_Complex16 *work);

void	pslatrs(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *scale, float *cnorm, float *work);
void	pdlatrs(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *scale, double *cnorm, double *work);
void	pclatrs(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *scale, float *cnorm, MKL_Complex8 *work);
void	pzlatrs(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *scale, double *cnorm, MKL_Complex16 *work);

void	pslatrz(MKL_INT *m, MKL_INT *n, MKL_INT *l, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work);
void	pdlatrz(MKL_INT *m, MKL_INT *n, MKL_INT *l, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work);
void	pclatrz(MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work);
void	pzlatrz(MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work);

void	pslauu2(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pdlauu2(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pclauu2(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pzlauu2(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);

void	pslauum(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pdlauum(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pclauum(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pzlauum(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);

void	pslawil(MKL_INT *ii, MKL_INT *jj, MKL_INT *m, float *a, MKL_INT *desca, float *h44, float *h33, float *h43h34, float *v);
void	pdlawil(MKL_INT *ii, MKL_INT *jj, MKL_INT *m, double *a, MKL_INT *desca, double *h44, double *h33, double *h43h34, double *v);

void	psorg2l(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorg2l(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcung2l(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzung2l(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psorg2r(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorg2r(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcung2r(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzung2r(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psorgl2(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorgl2(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcungl2(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzungl2(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psorgr2(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorgr2(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcungr2(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzungr2(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psorm2l(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorm2l(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcunm2l(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunm2l(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psorm2r(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorm2r(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcunm2r(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunm2r(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psorml2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorml2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcunml2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunml2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	psormr2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormr2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcunmr2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmr2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pspbtrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpbtrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpbtrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpbtrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pspttrsv(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpttrsv(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpttrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpttrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pspotf2(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pdpotf2(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pcpotf2(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pzpotf2(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);

void	psrscl(MKL_INT *n, float *sa, float *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pdrscl(MKL_INT *n, double *sa, double *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pcsrscl(MKL_INT *n, float *sa, MKL_Complex8 *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pzdrscl(MKL_INT *n, double *sa, MKL_Complex16 *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);

void	pssygs2(MKL_INT *ibtype, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pdsygs2(MKL_INT *ibtype, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pchegs2(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pzhegs2(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);

void	pssytd2(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdsytd2(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pchetd2(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzhetd2(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	pstrti2(char *uplo, char *diag, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pdtrti2(char *uplo, char *diag, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pctrti2(char *uplo, char *diag, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pztrti2(char *uplo, char *diag, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);

void	slamsh(float *s, MKL_INT *lds, MKL_INT *nbulge, MKL_INT *jblk, float *h, MKL_INT *ldh, MKL_INT *n, float *ulp);
void	dlamsh(double *s, MKL_INT *lds, MKL_INT *nbulge, MKL_INT *jblk, double *h, MKL_INT *ldh, MKL_INT *n, double *ulp);

void	slaref(char *type, float *a, MKL_INT *lda, MKL_INT *wantz, float *z, MKL_INT *ldz, MKL_INT *block, MKL_INT *irow1, MKL_INT *icol1, MKL_INT *istart, MKL_INT *istop, MKL_INT *itmp1, MKL_INT *itmp2, MKL_INT *liloz, MKL_INT *lihiz, float *vecs, float *v2, float *v3, float *t1, float *t2, float *t3);
void	dlaref(char *type, double *a, MKL_INT *lda, MKL_INT *wantz, double *z, MKL_INT *ldz, MKL_INT *block, MKL_INT *irow1, MKL_INT *icol1, MKL_INT *istart, MKL_INT *istop, MKL_INT *itmp1, MKL_INT *itmp2, MKL_INT *liloz, MKL_INT *lihiz, double *vecs, double *v2, double *v3, double *t1, double *t2, double *t3);

void	slasorte(float *s, MKL_INT *lds, MKL_INT *j, float *out, MKL_INT *info);
void	dlasorte(double *s, MKL_INT *lds, MKL_INT *j, double *out, MKL_INT *info);

void	slasrt2(char *id, MKL_INT *n, float *d, MKL_INT *key, MKL_INT *info);
void	dlasrt2(char *id, MKL_INT *n, double *d, MKL_INT *key, MKL_INT *info);

void	sstein2(MKL_INT *n, float *d, float *e, MKL_INT *m, float *w, MKL_INT *iblock, MKL_INT *isplit, float *orfac, float *z, MKL_INT *ldz, float *work, MKL_INT *iwork, MKL_INT *ifail, MKL_INT *info);
void	dstein2(MKL_INT *n, double *d, double *e, MKL_INT *m, double *w, MKL_INT *iblock, MKL_INT *isplit, double *orfac, double *z, MKL_INT *ldz, double *work, MKL_INT *iwork, MKL_INT *ifail, MKL_INT *info);

void	sdbtf2(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, float *ab, MKL_INT *ldab, MKL_INT *info);
void	ddbtf2(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, double *ab, MKL_INT *ldab, MKL_INT *info);
void	cdbtf2(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex8 *ab, MKL_INT *ldab, MKL_INT *info);
void	zdbtf2(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex16 *ab, MKL_INT *ldab, MKL_INT *info);

void	sdbtrf(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, float *ab, MKL_INT *ldab, MKL_INT *info);
void	ddbtrf(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, double *ab, MKL_INT *ldab, MKL_INT *info);
void	cdbtrf(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex8 *ab, MKL_INT *ldab, MKL_INT *info);
void	zdbtrf(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex16 *ab, MKL_INT *ldab, MKL_INT *info);

void	sdttrf(MKL_INT *n, float *dl, float *d, float *du, MKL_INT *info);
void	ddttrf(MKL_INT *n, double *dl, double *d, double *du, MKL_INT *info);
void	cdttrf(MKL_INT *n, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *info);
void	zdttrf(MKL_INT *n, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *info);

void	sdttrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, float *b, MKL_INT *ldb, MKL_INT *info);
void	ddttrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, double *b, MKL_INT *ldb, MKL_INT *info);
void	cdttrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_Complex8 *b, MKL_INT *ldb, MKL_INT *info);
void	zdttrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_Complex16 *b, MKL_INT *ldb, MKL_INT *info);

void	spttrsv(char *trans, MKL_INT *n, MKL_INT *nrhs, float *d, float *e, float *b, MKL_INT *ldb, MKL_INT *info);
void	dpttrsv(char *trans, MKL_INT *n, MKL_INT *nrhs, double *d, double *e, double *b, MKL_INT *ldb, MKL_INT *info);
void	cpttrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_Complex8 *b, MKL_INT *ldb, MKL_INT *info);
void	zpttrsv(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_Complex16 *b, MKL_INT *ldb, MKL_INT *info);

void	ssteqr2(char *compz, MKL_INT *n, float *d, float *e, float *z, MKL_INT *ldz, MKL_INT *nr, float *work, MKL_INT *info);
void	dsteqr2(char *compz, MKL_INT *n, double *d, double *e, double *z, MKL_INT *ldz, MKL_INT *nr, double *work, MKL_INT *info);

void	pslabad(MKL_INT *ictxt, float *small, float *large);
void	pdlabad(MKL_INT *ictxt, double *small, double *large);

void	pslachkieee(MKL_INT *isieee, float *rmax, float *rmin);
void	pdlachkieee(MKL_INT *isieee, float *rmax, float *rmin);

float	pslamch(MKL_INT *ictxt, char *cmach);
double	pdlamch(MKL_INT *ictxt, char *cmach);

void	pslasnbt(MKL_INT *ieflag);
void	pdlasnbt(MKL_INT *ieflag);

void	pxerbla(MKL_INT *ictxt, char *srname, MKL_INT *info);

/* Declarations are added in MKL 11.2 Beta */

void	bdlaapp( MKL_INT* iside, MKL_INT* m, MKL_INT* n, MKL_INT* nb, double* a, MKL_INT* lda, MKL_INT* nitraf, MKL_INT* itraf, double* dtraf, double* work );
void	bdlaexc( MKL_INT* n, double* t, MKL_INT* ldt, MKL_INT* j1, MKL_INT* n1, MKL_INT* n2, MKL_INT* itraf, double* dtraf, double* work, MKL_INT* info );
void	bdtrexc( MKL_INT* n, double* t, MKL_INT* ldt, MKL_INT* ifst, MKL_INT* ilst, MKL_INT* nitraf, MKL_INT* itraf, MKL_INT* ndtraf, double* dtraf, double* work, MKL_INT* info );
void	bslaapp( MKL_INT* iside, MKL_INT* m, MKL_INT* n, MKL_INT* nb, float* a, MKL_INT* lda, MKL_INT* nitraf, MKL_INT* itraf, float* dtraf, float* work );
void	bslaexc( MKL_INT* n, float* t, MKL_INT* ldt, MKL_INT* j1, MKL_INT* n1, MKL_INT* n2, MKL_INT* itraf, float* dtraf, float* work, MKL_INT* info );
void	bstrexc( MKL_INT* n, float* t, MKL_INT* ldt, MKL_INT* ifst, MKL_INT* ilst, MKL_INT* nitraf, MKL_INT* itraf, MKL_INT* ndtraf, float* dtraf, float* work, MKL_INT* info );

void	dlaqr6( char* job, MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, double* sr, double* si, double* h, MKL_INT* ldh, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* ldz, double* v, MKL_INT* ldv, double* u, MKL_INT* ldu, MKL_INT* nv, double* wv, MKL_INT* ldwv, MKL_INT* nh, double* wh, MKL_INT* ldwh );
void	dlar1va( MKL_INT* n, MKL_INT* b1, MKL_INT* bn, double* lambda, double* d, double* l, double* ld, double* lld, double* pivmin, double* gaptol, double* z, MKL_INT* wantnc, MKL_INT* negcnt, double* ztz, double* mingma, MKL_INT* r, MKL_INT* isuppz, double* nrminv, double* resid, double* rqcorr, double* work );
void	dlarrb2( MKL_INT* n, double* d, double* lld, MKL_INT* ifirst, MKL_INT* ilast, double* rtol1, double* rtol2, MKL_INT* offset, double* w, double* wgap, double* werr, double* work, MKL_INT* iwork, double* pivmin, double* lgpvmn, double* lgspdm, MKL_INT* twist, MKL_INT* info );
void	dlarrd2( char* range, char* order, MKL_INT* n, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, double* gers, double* reltol, double* d, double* e, double* e2, double* pivmin, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, double* w, double* werr, double* wl, double* wu, MKL_INT* iblock, MKL_INT* indexw, double* work, MKL_INT* iwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* info );
void	dlarre2( char* range, MKL_INT* n, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, double* d, double* e, double* e2, double* rtol1, double* rtol2, double* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, double* w, double* werr, double* wgap, MKL_INT* iblock, MKL_INT* indexw, double* gers, double* pivmin, double* work, MKL_INT* iwork, MKL_INT* info );
void	dlarre2a( char* range, MKL_INT* n, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, double* d, double* e, double* e2, double* rtol1, double* rtol2, double* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, double* w, double* werr, double* wgap, MKL_INT* iblock, MKL_INT* indexw, double* gers, double* sdiam, double* pivmin, double* work, MKL_INT* iwork, double* minrgp, MKL_INT* info );
void	dlarrf2( MKL_INT* n, double* d, double* l, double* ld, MKL_INT* clstrt, MKL_INT* clend, MKL_INT* clmid1, MKL_INT* clmid2, double* w, double* wgap, double* werr, MKL_INT* trymid, double* spdiam, double* clgapl, double* clgapr, double* pivmin, double* sigma, double* dplus, double* lplus, double* work, MKL_INT* info );
void	dlarrv2( MKL_INT* n, double* vl, double* vu, double* d, double* l, double* pivmin, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, double* minrgp, double* rtol1, double* rtol2, double* w, double* werr, double* wgap, MKL_INT* iblock, MKL_INT* indexw, double* gers, double* sdiam, double* z, MKL_INT* ldz, MKL_INT* isuppz, double* work, MKL_INT* iwork, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );

void	dstegr2( char* jobz, char* range, MKL_INT* n, double* d, double* e, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, double* w, double* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* zoffset, MKL_INT* info );
void	dstegr2a( char* jobz, char* range, MKL_INT* n, double* d, double* e, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, double* w, double* z, MKL_INT* ldz, MKL_INT* nzc, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* inderr, MKL_INT* nsplit, double* pivmin, double* scale, double* wl, double* wu, MKL_INT* info );
void	dstegr2b( char* jobz, MKL_INT* n, double* d, double* e, MKL_INT* m, double* w, double* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* indwlc, double* pivmin, double* scale, double* wl, double* wu, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );

void	pcheevr( char* jobz, char* range, char* uplo, MKL_INT* n, MKL_Complex8* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, float* w, MKL_Complex8* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, MKL_Complex8* work, MKL_INT* lwork, float* rwork, MKL_INT* lrwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pcrot( MKL_INT* n, MKL_Complex8* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, MKL_Complex8* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, float* c, MKL_Complex8* s );

void	pdgebal( char* job, MKL_INT* n, double* a, MKL_INT* desca, MKL_INT* ilo, MKL_INT* ihi, double* scale, MKL_INT* info );
void	pdlamve( char* uplo, MKL_INT* m, MKL_INT* n, double* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, double* b, MKL_INT* ib, MKL_INT* jb, MKL_INT* descb, double* dwork );
void	pdlaqr0( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, double* h, MKL_INT* desch, double* wr, double* wi, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info, MKL_INT* reclevel );
void	pdlaqr1( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, double* a, MKL_INT* desca, double* wr, double* wi, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* ilwork, MKL_INT* info );
void	pdlaqr2( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, double* a, MKL_INT* desca, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, double* sr, double* si, double* t, MKL_INT* ldt, double* v, MKL_INT* ldv, double* wr, double* wi, double* work, MKL_INT* lwork );
void	pdlaqr3( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, double* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, double* sr, double* si, double* v, MKL_INT* descv, MKL_INT* nh, double* t, MKL_INT* desct, MKL_INT* nv, double* wv, MKL_INT* descw, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* reclevel );
void	pdlaqr4( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, double* a, MKL_INT* desca, double* wr, double* wi, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* t, MKL_INT* ldt, double* v, MKL_INT* ldv, double* work, MKL_INT* lwork, MKL_INT* info );
void	pdlaqr5( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, double* sr, double* si, double* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork );
void	pdrot( MKL_INT* n, double* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, double* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, double* cs, double* sn, double* work, MKL_INT* lwork, MKL_INT* info );
void	pdsyevr( char* jobz, char* range, char* uplo, MKL_INT* n, double* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, double* w, double* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pdtrord( char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, double* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, double* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, double* wr, double* wi, MKL_INT* m, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pdtrsen( char* job, char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, double* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, double* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, double* wr, double* wi, MKL_INT* m, double* s, double* sep, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );

void	pmpcol( MKL_INT* myproc, MKL_INT* nprocs, MKL_INT* iil, MKL_INT* needil, MKL_INT* neediu, MKL_INT* pmyils, MKL_INT* pmyius, MKL_INT* colbrt, MKL_INT* frstcl, MKL_INT* lastcl );
void	pmpim2( MKL_INT* il, MKL_INT* iu, MKL_INT* nprocs, MKL_INT* pmyils, MKL_INT* pmyius );

void	psgebal( char* job, MKL_INT* n, float* a, MKL_INT* desca, MKL_INT* ilo, MKL_INT* ihi, float* scale, MKL_INT* info );
void	pslamve( char* uplo, MKL_INT* m, MKL_INT* n, float* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, float* b, MKL_INT* ib, MKL_INT* jb, MKL_INT* descb, float* dwork );
void	pslaqr0( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, float* h, MKL_INT* desch, float* wr, float* wi, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info, MKL_INT* reclevel );
void	pslaqr1( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, float* a, MKL_INT* desca, float* wr, float* wi, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* ilwork, MKL_INT* info );
void	pslaqr2( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, float* a, MKL_INT* desca, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, float* sr, float* si, float* t, MKL_INT* ldt, float* v, MKL_INT* ldv, float* wr, float* wi, float* work, MKL_INT* lwork );
void	pslaqr3( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, float* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, float* sr, float* si, float* v, MKL_INT* descv, MKL_INT* nh, float* t, MKL_INT* desct, MKL_INT* nv, float* wv, MKL_INT* descw, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* reclevel );
void	pslaqr4( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, float* a, MKL_INT* desca, float* wr, float* wi, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* t, MKL_INT* ldt, float* v, MKL_INT* ldv, float* work, MKL_INT* lwork, MKL_INT* info );
void	pslaqr5( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, float* sr, float* si, float* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork );
void	psrot( MKL_INT* n, float* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, float* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, float* cs, float* sn, float* work, MKL_INT* lwork, MKL_INT* info );
void	pssyevr( char* jobz, char* range, char* uplo, MKL_INT* n, float* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, float* w, float* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pstrord( char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, float* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, float* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, float* wr, float* wi, MKL_INT* m, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pstrsen( char* job, char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, float* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, float* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, float* wr, float* wi, MKL_INT* m, float* s, float* sep, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );

void	pzheevr( char* jobz, char* range, char* uplo, MKL_INT* n, MKL_Complex16* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, double* w, MKL_Complex16* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, MKL_Complex16* work, MKL_INT* lwork, double* rwork, MKL_INT* lrwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pzrot( MKL_INT* n, MKL_Complex8* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, MKL_Complex8* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, double* c, MKL_Complex16* s );

void	slaqr6( char* job, MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, float* sr, float* si, float* h, MKL_INT* ldh, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* ldz, float* v, MKL_INT* ldv, float* u, MKL_INT* ldu, MKL_INT* nv, float* wv, MKL_INT* ldwv, MKL_INT* nh, float* wh, MKL_INT* ldwh );
void	slar1va( MKL_INT* n, MKL_INT* b1, MKL_INT* bn, float* lambda, float* d, float* l, float* ld, float* lld, float* pivmin, float* gaptol, float* z, MKL_INT* wantnc, MKL_INT* negcnt, float* ztz, float* mingma, MKL_INT* r, MKL_INT* isuppz, float* nrminv, float* resid, float* rqcorr, float* work );
void	slarrb2( MKL_INT* n, float* d, float* lld, MKL_INT* ifirst, MKL_INT* ilast, float* rtol1, float* rtol2, MKL_INT* offset, float* w, float* wgap, float* werr, float* work, MKL_INT* iwork, float* pivmin, float* lgpvmn, float* lgspdm, MKL_INT* twist, MKL_INT* info );
void	slarrd2( char* range, char* order, MKL_INT* n, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, float* gers, float* reltol, float* d, float* e, float* e2, float* pivmin, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, float* w, float* werr, float* wl, float* wu, MKL_INT* iblock, MKL_INT* indexw, float* work, MKL_INT* iwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* info );
void	slarre2( char* range, MKL_INT* n, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, float* d, float* e, float* e2, float* rtol1, float* rtol2, float* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, float* w, float* werr, float* wgap, MKL_INT* iblock, MKL_INT* indexw, float* gers, float* pivmin, float* work, MKL_INT* iwork, MKL_INT* info );
void	slarre2a( char* range, MKL_INT* n, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, float* d, float* e, float* e2, float* rtol1, float* rtol2, float* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, float* w, float* werr, float* wgap, MKL_INT* iblock, MKL_INT* indexw, float* gers, float* sdiam, float* pivmin, float* work, MKL_INT* iwork, float* minrgp, MKL_INT* info );
void	slarrf2( MKL_INT* n, float* d, float* l, float* ld, MKL_INT* clstrt, MKL_INT* clend, MKL_INT* clmid1, MKL_INT* clmid2, float* w, float* wgap, float* werr, MKL_INT* trymid, float* spdiam, float* clgapl, float* clgapr, float* pivmin, float* sigma, float* dplus, float* lplus, float* work, MKL_INT* info );
void	slarrv2( MKL_INT* n, float* vl, float* vu, float* d, float* l, float* pivmin, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, float* minrgp, float* rtol1, float* rtol2, float* w, float* werr, float* wgap, MKL_INT* iblock, MKL_INT* indexw, float* gers, float* sdiam, float* z, MKL_INT* ldz, MKL_INT* isuppz, float* work, MKL_INT* iwork, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );

void	sstegr2( char* jobz, char* range, MKL_INT* n, float* d, float* e, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, float* w, float* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* zoffset, MKL_INT* info );
void	sstegr2a( char* jobz, char* range, MKL_INT* n, float* d, float* e, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, float* w, float* z, MKL_INT* ldz, MKL_INT* nzc, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* inderr, MKL_INT* nsplit, float* pivmin, float* scale, float* wl, float* wu, MKL_INT* info );
void	sstegr2b( char* jobz, MKL_INT* n, float* d, float* e, MKL_INT* m, float* w, float* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* indwlc, float* pivmin, float* scale, float* wl, float* wu, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );



/* OTHER NAMING CONVENTIONS FOLLOW */

void	PSGETRF(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PDGETRF(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PCGETRF(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PZGETRF(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PSGETRF_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PDGETRF_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PCGETRF_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PZGETRF_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	psgetrf_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	pdgetrf_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	pcgetrf_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	pzgetrf_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);

void	PSGBTRF(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, float *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGBTRF(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, double *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGBTRF(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGBTRF(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGBTRF_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, float *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGBTRF_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, double *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGBTRF_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGBTRF_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgbtrf_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, float *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgbtrf_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, double *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgbtrf_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgbtrf_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSDBTRF(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, float *a, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDBTRF(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, double *a, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDBTRF(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDBTRF(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSDBTRF_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, float *a, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDBTRF_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, double *a, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDBTRF_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDBTRF_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psdbtrf_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, float *a, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddbtrf_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, double *a, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdbtrf_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdbtrf_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSPOTRF(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PDPOTRF(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PCPOTRF(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PZPOTRF(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PSPOTRF_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PDPOTRF_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PCPOTRF_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PZPOTRF_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pspotrf_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pdpotrf_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pcpotrf_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pzpotrf_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);

void	PSPBTRF(char *uplo, MKL_INT *n, MKL_INT *bw, float *a, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPBTRF(char *uplo, MKL_INT *n, MKL_INT *bw, double *a, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPBTRF(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPBTRF(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSPBTRF_(char *uplo, MKL_INT *n, MKL_INT *bw, float *a, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPBTRF_(char *uplo, MKL_INT *n, MKL_INT *bw, double *a, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPBTRF_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPBTRF_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pspbtrf_(char *uplo, MKL_INT *n, MKL_INT *bw, float *a, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpbtrf_(char *uplo, MKL_INT *n, MKL_INT *bw, double *a, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpbtrf_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpbtrf_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSPTTRF(MKL_INT *n, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPTTRF(MKL_INT *n, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPTTRF(MKL_INT *n, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPTTRF(MKL_INT *n, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSPTTRF_(MKL_INT *n, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPTTRF_(MKL_INT *n, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPTTRF_(MKL_INT *n, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPTTRF_(MKL_INT *n, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pspttrf_(MKL_INT *n, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpttrf_(MKL_INT *n, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpttrf_(MKL_INT *n, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpttrf_(MKL_INT *n, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSDTTRF(MKL_INT *n, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDTTRF(MKL_INT *n, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDTTRF(MKL_INT *n, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDTTRF(MKL_INT *n, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSDTTRF_(MKL_INT *n, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDTTRF_(MKL_INT *n, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDTTRF_(MKL_INT *n, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDTTRF_(MKL_INT *n, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psdttrf_(MKL_INT *n, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddttrf_(MKL_INT *n, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdttrf_(MKL_INT *n, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdttrf_(MKL_INT *n, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGETRS(char *trans, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PDGETRS(char *trans, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PCGETRS(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PZGETRS(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PSGETRS_(char *trans, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PDGETRS_(char *trans, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PCGETRS_(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PZGETRS_(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	psgetrs_(char *trans, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pdgetrs_(char *trans, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pcgetrs_(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pzgetrs_(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);

void	PSGBTRS(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGBTRS(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGBTRS(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGBTRS(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGBTRS_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGBTRS_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGBTRS_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGBTRS_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgbtrs_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgbtrs_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgbtrs_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgbtrs_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSPOTRS(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PDPOTRS(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PCPOTRS(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PZPOTRS(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PSPOTRS_(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PDPOTRS_(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PCPOTRS_(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PZPOTRS_(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pspotrs_(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pdpotrs_(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pcpotrs_(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pzpotrs_(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);

void	PSPBTRS(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPBTRS(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPBTRS(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPBTRS(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSPBTRS_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPBTRS_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPBTRS_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPBTRS_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pspbtrs_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpbtrs_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpbtrs_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpbtrs_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSPTTRS(MKL_INT *n, MKL_INT *nrhs, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPTTRS(MKL_INT *n, MKL_INT *nrhs, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPTTRS(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPTTRS(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSPTTRS_(MKL_INT *n, MKL_INT *nrhs, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPTTRS_(MKL_INT *n, MKL_INT *nrhs, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPTTRS_(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPTTRS_(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pspttrs_(MKL_INT *n, MKL_INT *nrhs, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpttrs_(MKL_INT *n, MKL_INT *nrhs, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpttrs_(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpttrs_(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSDTTRS(char *trans, MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDTTRS(char *trans, MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDTTRS(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDTTRS(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSDTTRS_(char *trans, MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDTTRS_(char *trans, MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDTTRS_(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDTTRS_(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psdttrs_(char *trans, MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddttrs_(char *trans, MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdttrs_(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdttrs_(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSDBTRS(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDBTRS(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDBTRS(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDBTRS(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSDBTRS_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDBTRS_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDBTRS_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDBTRS_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psdbtrs_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddbtrs_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdbtrs_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdbtrs_(char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSTRTRS(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PDTRTRS(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PCTRTRS(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PZTRTRS(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PSTRTRS_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PDTRTRS_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PCTRTRS_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PZTRTRS_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pstrtrs_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pdtrtrs_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pctrtrs_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pztrtrs_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);

void	PSGECON(char *norm, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDGECON(char *norm, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCGECON(char *norm, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZGECON(char *norm, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PSGECON_(char *norm, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDGECON_(char *norm, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCGECON_(char *norm, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZGECON_(char *norm, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	psgecon_(char *norm, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdgecon_(char *norm, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcgecon_(char *norm, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzgecon_(char *norm, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	PSPOCON(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDPOCON(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCPOCON(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZPOCON(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PSPOCON_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDPOCON_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCPOCON_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZPOCON_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pspocon_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdpocon_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcpocon_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *anorm, float *rcond, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzpocon_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *anorm, double *rcond, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	PSTRCON(char *norm, char *uplo, char *diag, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *rcond, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDTRCON(char *norm, char *uplo, char *diag, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *rcond, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCTRCON(char *norm, char *uplo, char *diag, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *rcond, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZTRCON(char *norm, char *uplo, char *diag, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *rcond, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PSTRCON_(char *norm, char *uplo, char *diag, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *rcond, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDTRCON_(char *norm, char *uplo, char *diag, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *rcond, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCTRCON_(char *norm, char *uplo, char *diag, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *rcond, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZTRCON_(char *norm, char *uplo, char *diag, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *rcond, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pstrcon_(char *norm, char *uplo, char *diag, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *rcond, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdtrcon_(char *norm, char *uplo, char *diag, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *rcond, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pctrcon_(char *norm, char *uplo, char *diag, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *rcond, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pztrcon_(char *norm, char *uplo, char *diag, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *rcond, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	PSGERFS(char *trans, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDGERFS(char *trans, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCGERFS(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZGERFS(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PSGERFS_(char *trans, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDGERFS_(char *trans, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCGERFS_(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZGERFS_(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	psgerfs_(char *trans, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdgerfs_(char *trans, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcgerfs_(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzgerfs_(char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	PSPORFS(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDPORFS(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCPORFS(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZPORFS(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PSPORFS_(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDPORFS_(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCPORFS_(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZPORFS_(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	psporfs_(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdporfs_(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcporfs_(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzporfs_(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	PSTRRFS(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDTRRFS(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCTRRFS(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZTRRFS(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PSTRRFS_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDTRRFS_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCTRRFS_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZTRRFS_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pstrrfs_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdtrrfs_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pctrrfs_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pztrrfs_(char *uplo, char *trans, char *diag, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	PSGETRI(MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDGETRI(MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCGETRI(MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PZGETRI(MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PSGETRI_(MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDGETRI_(MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCGETRI_(MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PZGETRI_(MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	psgetri_(MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdgetri_(MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcgetri_(MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pzgetri_(MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);

void	PSPOTRI(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PDPOTRI(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PCPOTRI(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PZPOTRI(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PSPOTRI_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PDPOTRI_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PCPOTRI_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PZPOTRI_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pspotri_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pdpotri_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pcpotri_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pzpotri_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);

void	PSTRTRI(char *uplo, char *diag, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PDTRTRI(char *uplo, char *diag, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PCTRTRI(char *uplo, char *diag, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PZTRTRI(char *uplo, char *diag, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PSTRTRI_(char *uplo, char *diag, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PDTRTRI_(char *uplo, char *diag, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PCTRTRI_(char *uplo, char *diag, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PZTRTRI_(char *uplo, char *diag, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pstrtri_(char *uplo, char *diag, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pdtrtri_(char *uplo, char *diag, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pctrtri_(char *uplo, char *diag, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pztrtri_(char *uplo, char *diag, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);

void	PSGEEQU(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, MKL_INT *info);
void	PDGEEQU(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, MKL_INT *info);
void	PCGEEQU(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, MKL_INT *info);
void	PZGEEQU(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, MKL_INT *info);
void	PSGEEQU_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, MKL_INT *info);
void	PDGEEQU_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, MKL_INT *info);
void	PCGEEQU_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, MKL_INT *info);
void	PZGEEQU_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, MKL_INT *info);
void	psgeequ_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, MKL_INT *info);
void	pdgeequ_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, MKL_INT *info);
void	pcgeequ_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, MKL_INT *info);
void	pzgeequ_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, MKL_INT *info);

void	PSPOEQU(MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, MKL_INT *info);
void	PDPOEQU(MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, MKL_INT *info);
void	PCPOEQU(MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, MKL_INT *info);
void	PZPOEQU(MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, MKL_INT *info);
void	PSPOEQU_(MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, MKL_INT *info);
void	PDPOEQU_(MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, MKL_INT *info);
void	PCPOEQU_(MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, MKL_INT *info);
void	PZPOEQU_(MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, MKL_INT *info);
void	pspoequ_(MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, MKL_INT *info);
void	pdpoequ_(MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, MKL_INT *info);
void	pcpoequ_(MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, MKL_INT *info);
void	pzpoequ_(MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, MKL_INT *info);

void	PSGEQRF(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEQRF(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEQRF(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEQRF(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGEQRF_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEQRF_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEQRF_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEQRF_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgeqrf_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgeqrf_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgeqrf_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgeqrf_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGEQPF(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEQPF(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEQPF(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZGEQPF(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PSGEQPF_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEQPF_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEQPF_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZGEQPF_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	psgeqpf_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgeqpf_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgeqpf_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzgeqpf_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	PSORGQR(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORGQR(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSORGQR_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORGQR_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	psorgqr_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorgqr_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);

void	PCUNGQR(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNGQR(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNGQR_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNGQR_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pcungqr_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzungqr_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORMQR(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMQR(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSORMQR_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMQR_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	psormqr_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormqr_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	PCUNMQR(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMQR(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNMQR_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMQR_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pcunmqr_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmqr_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGELQF(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGELQF(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGELQF(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGELQF(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGELQF_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGELQF_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGELQF_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGELQF_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgelqf_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgelqf_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgelqf_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgelqf_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORGLQ(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORGLQ(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSORGLQ_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORGLQ_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	psorglq_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorglq_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);

void	PCUNGLQ(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNGLQ(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNGLQ_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNGLQ_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pcunglq_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunglq_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORMLQ(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMLQ(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSORMLQ_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMLQ_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	psormlq_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormlq_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	PCUNMLQ(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMLQ(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNMLQ_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMLQ_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pcunmlq_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmlq_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGEQLF(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEQLF(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEQLF(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEQLF(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGEQLF_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEQLF_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEQLF_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEQLF_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgeqlf_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgeqlf_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgeqlf_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgeqlf_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORGQL(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORGQL(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSORGQL_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORGQL_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	psorgql_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorgql_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);

void	PCUNGQL(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNGQL(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNGQL_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNGQL_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pcungql_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzungql_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORMQL(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMQL(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSORMQL_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMQL_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	psormql_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormql_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	PCUNMQL(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMQL(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNMQL_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMQL_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pcunmql_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmql_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGERQF(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGERQF(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGERQF(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGERQF(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGERQF_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGERQF_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGERQF_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGERQF_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgerqf_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgerqf_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgerqf_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgerqf_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORGRQ(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORGRQ(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSORGRQ_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORGRQ_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	psorgrq_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorgrq_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);

void	PCUNGRQ(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNGRQ(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNGRQ_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNGRQ_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pcungrq_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzungrq_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORMRQ(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMRQ(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSORMRQ_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMRQ_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	psormrq_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormrq_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	PCUNMRQ(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMRQ(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNMRQ_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMRQ_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pcunmrq_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmrq_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSTZRZF(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDTZRZF(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCTZRZF(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZTZRZF(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSTZRZF_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDTZRZF_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCTZRZF_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZTZRZF_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pstzrzf_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdtzrzf_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pctzrzf_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pztzrzf_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORMRZ(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMRZ(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSORMRZ_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMRZ_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	psormrz_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormrz_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	PCUNMRZ(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMRZ(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNMRZ_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMRZ_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pcunmrz_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmrz_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGGQRF(MKL_INT *n, MKL_INT *m, MKL_INT *p, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *taua, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *taub, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGGQRF(MKL_INT *n, MKL_INT *m, MKL_INT *p, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *taua, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *taub, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGGQRF(MKL_INT *n, MKL_INT *m, MKL_INT *p, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *taua, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *taub, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGGQRF(MKL_INT *n, MKL_INT *m, MKL_INT *p, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *taua, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *taub, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGGQRF_(MKL_INT *n, MKL_INT *m, MKL_INT *p, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *taua, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *taub, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGGQRF_(MKL_INT *n, MKL_INT *m, MKL_INT *p, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *taua, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *taub, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGGQRF_(MKL_INT *n, MKL_INT *m, MKL_INT *p, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *taua, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *taub, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGGQRF_(MKL_INT *n, MKL_INT *m, MKL_INT *p, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *taua, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *taub, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psggqrf_(MKL_INT *n, MKL_INT *m, MKL_INT *p, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *taua, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *taub, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdggqrf_(MKL_INT *n, MKL_INT *m, MKL_INT *p, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *taua, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *taub, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcggqrf_(MKL_INT *n, MKL_INT *m, MKL_INT *p, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *taua, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *taub, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzggqrf_(MKL_INT *n, MKL_INT *m, MKL_INT *p, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *taua, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *taub, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGGRQF(MKL_INT *m, MKL_INT *p, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *taua, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *taub, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGGRQF(MKL_INT *m, MKL_INT *p, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *taua, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *taub, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGGRQF(MKL_INT *m, MKL_INT *p, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *taua, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *taub, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGGRQF(MKL_INT *m, MKL_INT *p, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *taua, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *taub, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGGRQF_(MKL_INT *m, MKL_INT *p, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *taua, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *taub, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGGRQF_(MKL_INT *m, MKL_INT *p, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *taua, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *taub, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGGRQF_(MKL_INT *m, MKL_INT *p, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *taua, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *taub, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGGRQF_(MKL_INT *m, MKL_INT *p, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *taua, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *taub, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psggrqf_(MKL_INT *m, MKL_INT *p, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *taua, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *taub, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdggrqf_(MKL_INT *m, MKL_INT *p, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *taua, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *taub, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcggrqf_(MKL_INT *m, MKL_INT *p, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *taua, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *taub, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzggrqf_(MKL_INT *m, MKL_INT *p, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *taua, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *taub, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSSYTRD(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDSYTRD(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSSYTRD_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDSYTRD_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pssytrd_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdsytrd_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);

void	PSORMTR(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMTR(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSORMTR_(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMTR_(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	psormtr_(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormtr_(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	PCHETRD(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZHETRD(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCHETRD_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZHETRD_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pchetrd_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzhetrd_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PCUNMTR(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMTR(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNMTR_(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMTR_(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pcunmtr_(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmtr_(char *side, char *uplo, char *trans, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSSTEBZ(MKL_INT *ictxt, char *range, char *order, MKL_INT *n, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, float *d, float *e, MKL_INT *m, MKL_INT *nsplit, float *w, MKL_INT *iblock, MKL_INT *isplit, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDSTEBZ(MKL_INT *ictxt, char *range, char *order, MKL_INT *n, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, double *d, double *e, MKL_INT *m, MKL_INT *nsplit, double *w, MKL_INT *iblock, MKL_INT *isplit, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PSSTEBZ_(MKL_INT *ictxt, char *range, char *order, MKL_INT *n, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, float *d, float *e, MKL_INT *m, MKL_INT *nsplit, float *w, MKL_INT *iblock, MKL_INT *isplit, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDSTEBZ_(MKL_INT *ictxt, char *range, char *order, MKL_INT *n, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, double *d, double *e, MKL_INT *m, MKL_INT *nsplit, double *w, MKL_INT *iblock, MKL_INT *isplit, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	psstebz_(MKL_INT *ictxt, char *range, char *order, MKL_INT *n, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, float *d, float *e, MKL_INT *m, MKL_INT *nsplit, float *w, MKL_INT *iblock, MKL_INT *isplit, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdstebz_(MKL_INT *ictxt, char *range, char *order, MKL_INT *n, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, double *d, double *e, MKL_INT *m, MKL_INT *nsplit, double *w, MKL_INT *iblock, MKL_INT *isplit, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);

void	PSSTEIN(MKL_INT *n, float *d, float *e, MKL_INT *m, float *w, MKL_INT *iblock, MKL_INT *isplit, float *orfac, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	PDSTEIN(MKL_INT *n, double *d, double *e, MKL_INT *m, double *w, MKL_INT *iblock, MKL_INT *isplit, double *orfac, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	PCSTEIN(MKL_INT *n, float *d, float *e, MKL_INT *m, float *w, MKL_INT *iblock, MKL_INT *isplit, float *orfac, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	PZSTEIN(MKL_INT *n, double *d, double *e, MKL_INT *m, double *w, MKL_INT *iblock, MKL_INT *isplit, double *orfac, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	PSSTEIN_(MKL_INT *n, float *d, float *e, MKL_INT *m, float *w, MKL_INT *iblock, MKL_INT *isplit, float *orfac, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	PDSTEIN_(MKL_INT *n, double *d, double *e, MKL_INT *m, double *w, MKL_INT *iblock, MKL_INT *isplit, double *orfac, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	PCSTEIN_(MKL_INT *n, float *d, float *e, MKL_INT *m, float *w, MKL_INT *iblock, MKL_INT *isplit, float *orfac, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	PZSTEIN_(MKL_INT *n, double *d, double *e, MKL_INT *m, double *w, MKL_INT *iblock, MKL_INT *isplit, double *orfac, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	psstein_(MKL_INT *n, float *d, float *e, MKL_INT *m, float *w, MKL_INT *iblock, MKL_INT *isplit, float *orfac, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	pdstein_(MKL_INT *n, double *d, double *e, MKL_INT *m, double *w, MKL_INT *iblock, MKL_INT *isplit, double *orfac, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	pcstein_(MKL_INT *n, float *d, float *e, MKL_INT *m, float *w, MKL_INT *iblock, MKL_INT *isplit, float *orfac, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	pzstein_(MKL_INT *n, double *d, double *e, MKL_INT *m, double *w, MKL_INT *iblock, MKL_INT *isplit, double *orfac, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);

void	PSGEHRD(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEHRD(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEHRD(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEHRD(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGEHRD_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEHRD_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEHRD_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEHRD_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgehrd_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgehrd_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgehrd_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgehrd_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORMHR(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMHR(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSORMHR_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMHR_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	psormhr_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormhr_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	PCUNMHR(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMHR(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNMHR_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMHR_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pcunmhr_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmhr_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSLAHQR(MKL_INT *wantt, MKL_INT *wantz, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *desca, float *wr, float *wi, MKL_INT *iloz, MKL_INT *ihiz, float *z, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *ilwork, MKL_INT *info);
void	PDLAHQR(MKL_INT *wantt, MKL_INT *wantz, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *desca, double *wr, double *wi, MKL_INT *iloz, MKL_INT *ihiz, double *z, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *ilwork, MKL_INT *info);
void	PSLAHQR_(MKL_INT *wantt, MKL_INT *wantz, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *desca, float *wr, float *wi, MKL_INT *iloz, MKL_INT *ihiz, float *z, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *ilwork, MKL_INT *info);
void	PDLAHQR_(MKL_INT *wantt, MKL_INT *wantz, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *desca, double *wr, double *wi, MKL_INT *iloz, MKL_INT *ihiz, double *z, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *ilwork, MKL_INT *info);
void	pslahqr_(MKL_INT *wantt, MKL_INT *wantz, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *desca, float *wr, float *wi, MKL_INT *iloz, MKL_INT *ihiz, float *z, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *ilwork, MKL_INT *info);
void	pdlahqr_(MKL_INT *wantt, MKL_INT *wantz, MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *desca, double *wr, double *wi, MKL_INT *iloz, MKL_INT *ihiz, double *z, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *ilwork, MKL_INT *info);

void	PSGEBRD(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tauq, float *taup, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEBRD(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tauq, double *taup, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEBRD(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tauq, MKL_Complex8 *taup, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEBRD(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tauq, MKL_Complex16 *taup, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGEBRD_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tauq, float *taup, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEBRD_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tauq, double *taup, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEBRD_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tauq, MKL_Complex8 *taup, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEBRD_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tauq, MKL_Complex16 *taup, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgebrd_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tauq, float *taup, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgebrd_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tauq, double *taup, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgebrd_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tauq, MKL_Complex8 *taup, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgebrd_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tauq, MKL_Complex16 *taup, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORMBR(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMBR(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSORMBR_(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMBR_(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	psormbr_(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormbr_(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);

void	PCUNMBR(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMBR(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNMBR_(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMBR_(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pcunmbr_(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmbr_(char *vect, char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSSYGST(MKL_INT *ibtype, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *scale, MKL_INT *info);
void	PDSYGST(MKL_INT *ibtype, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *scale, MKL_INT *info);
void	PSSYGST_(MKL_INT *ibtype, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *scale, MKL_INT *info);
void	PDSYGST_(MKL_INT *ibtype, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *scale, MKL_INT *info);
void	pssygst_(MKL_INT *ibtype, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *scale, MKL_INT *info);
void	pdsygst_(MKL_INT *ibtype, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *scale, MKL_INT *info);

void	PCHEGST(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *scale, MKL_INT *info);
void	PZHEGST(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *scale, MKL_INT *info);
void	PCHEGST_(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *scale, MKL_INT *info);
void	PZHEGST_(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *scale, MKL_INT *info);
void	pchegst_(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *scale, MKL_INT *info);
void	pzhegst_(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *scale, MKL_INT *info);

void	PSGESV(MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PDGESV(MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PCGESV(MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PZGESV(MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PSGESV_(MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PDGESV_(MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PCGESV_(MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PZGESV_(MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	psgesv_(MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pdgesv_(MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pcgesv_(MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pzgesv_(MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);

void	PSGESVX(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, float *r, float *c, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDGESVX(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, double *r, double *c, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCGESVX(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, float *r, float *c, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZGESVX(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, double *r, double *c, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PSGESVX_(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, float *r, float *c, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDGESVX_(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, double *r, double *c, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCGESVX_(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, float *r, float *c, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZGESVX_(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, double *r, double *c, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	psgesvx_(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, float *r, float *c, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdgesvx_(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, double *r, double *c, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcgesvx_(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, float *r, float *c, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzgesvx_(char *fact, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, MKL_INT *ipiv, char *equed, double *r, double *c, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	PSGBSV(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGBSV(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGBSV(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGBSV(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGBSV_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGBSV_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGBSV_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGBSV_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgbsv_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgbsv_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgbsv_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgbsv_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSDBSV(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDBSV(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDBSV(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDBSV(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSDBSV_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDBSV_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDBSV_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDBSV_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psdbsv_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddbsv_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdbsv_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdbsv_(MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSDTSV(MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDTSV(MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDTSV(MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDTSV(MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSDTSV_(MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDTSV_(MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDTSV_(MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDTSV_(MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psdtsv_(MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddtsv_(MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdtsv_(MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdtsv_(MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSPOSV(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PDPOSV(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PCPOSV(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PZPOSV(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PSPOSV_(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PDPOSV_(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PCPOSV_(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PZPOSV_(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	psposv_(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pdposv_(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pcposv_(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pzposv_(char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);

void	PSPOSVX(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, float *sr, float *sc, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDPOSVX(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, double *sr, double *sc, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCPOSVX(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, float *sr, float *sc, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZPOSVX(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, double *sr, double *sc, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PSPOSVX_(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, float *sr, float *sc, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PDPOSVX_(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, double *sr, double *sc, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCPOSVX_(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, float *sr, float *sc, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZPOSVX_(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, double *sr, double *sc, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	psposvx_(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, float *sr, float *sc, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdposvx_(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, double *sr, double *sc, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcposvx_(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, float *sr, float *sc, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *rcond, float *ferr, float *berr, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzposvx_(char *fact, char *uplo, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *af, MKL_INT *iaf, MKL_INT *jaf, MKL_INT *descaf, char *equed, double *sr, double *sc, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *rcond, double *ferr, double *berr, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	PSPBSV(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPBSV(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPBSV(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPBSV(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSPBSV_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPBSV_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPBSV_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPBSV_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pspbsv_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpbsv_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpbsv_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpbsv_(char *uplo, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSPTSV(MKL_INT *n, MKL_INT *nrhs, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPTSV(MKL_INT *n, MKL_INT *nrhs, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPTSV(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPTSV(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSPTSV_(MKL_INT *n, MKL_INT *nrhs, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPTSV_(MKL_INT *n, MKL_INT *nrhs, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPTSV_(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPTSV_(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psptsv_(MKL_INT *n, MKL_INT *nrhs, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdptsv_(MKL_INT *n, MKL_INT *nrhs, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcptsv_(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzptsv_(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGELS(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGELS(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGELS(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGELS(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGELS_(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGELS_(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGELS_(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGELS_(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgels_(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgels_(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgels_(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgels_(char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSSYEV(char *jobz, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDSYEV(char *jobz, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *info);
void	PSSYEV_(char *jobz, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDSYEV_(char *jobz, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *info);
void	pssyev_(char *jobz, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdsyev_(char *jobz, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *info);

void	pssyevd(char *jobz, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdsyevd(char *jobz, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pssyevd_(char *jobz, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdsyevd_(char *jobz, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pssyevd_(char *jobz, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pdsyevd_(char *jobz, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);

void	PSSYEVX(char *jobz, char *range, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	PDSYEVX(char *jobz, char *range, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	PSSYEVX_(char *jobz, char *range, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	PDSYEVX_(char *jobz, char *range, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	pssyevx_(char *jobz, char *range, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	pdsyevx_(char *jobz, char *range, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);

void	PCHEEV(char *jobz, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZHEEV(char *jobz, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PCHEEV_(char *jobz, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	PZHEEV_(char *jobz, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pcheev_(char *jobz, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *info);
void	pzheev_(char *jobz, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *info);

void	PCHEEVD(char *jobz, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PZHEEVD(char *jobz, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PCHEEVD_(char *jobz, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	PZHEEVD_(char *jobz, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pcheevd_(char *jobz, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *w, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);
void	pzheevd_(char *jobz, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *w, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *info);

void	PCHEEVX(char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	PZHEEVX(char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	PCHEEVX_(char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	PZHEEVX_(char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	pcheevx_(char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	pzheevx_(char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);

void	PSGESVD(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *s, float *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, float *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGESVD(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *s, double *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, double *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGESVD(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *s, MKL_Complex8 *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, MKL_Complex8 *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGESVD(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *s, MKL_Complex16 *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, MKL_Complex16 *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGESVD_(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *s, float *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, float *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGESVD_(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *s, double *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, double *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGESVD_(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *s, MKL_Complex8 *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, MKL_Complex8 *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGESVD_(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *s, MKL_Complex16 *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, MKL_Complex16 *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgesvd_(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *s, float *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, float *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgesvd_(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *s, double *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, double *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgesvd_(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *s, MKL_Complex8 *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, MKL_Complex8 *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgesvd_(char *jobu, char *jobvt, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *s, MKL_Complex16 *u, MKL_INT *iu, MKL_INT *ju, MKL_INT *descu, MKL_Complex16 *vt, MKL_INT *ivt, MKL_INT *jvt, MKL_INT *descvt, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSSYGVX(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	PDSYGVX(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	PSSYGVX_(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	PDSYGVX_(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	pssygvx_(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, float *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	pdsygvx_(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, double *work, MKL_INT *lwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);

void	PCHEGVX(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	PZHEGVX(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	PCHEGVX_(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	PZHEGVX_(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);
void	pchegvx_(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, float *vl, float *vu, MKL_INT *il, MKL_INT *iu, float *abstol, MKL_INT *m, MKL_INT *nz, float *w, float *orfac, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex8 *work, MKL_INT *lwork, float *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, float *gap, MKL_INT *info);
void	pzhegvx_(MKL_INT *ibtype, char *jobz, char *range, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, double *vl, double *vu, MKL_INT *il, MKL_INT *iu, double *abstol, MKL_INT *m, MKL_INT *nz, double *w, double *orfac, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_Complex16 *work, MKL_INT *lwork, double *rwork, MKL_INT *lrwork, MKL_INT *iwork, MKL_INT *liwork, MKL_INT *ifail, MKL_INT *iclustr, double *gap, MKL_INT *info);

void	PCLACGV(MKL_INT *n, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PZLACGV(MKL_INT *n, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PCLACGV_(MKL_INT *n, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PZLACGV_(MKL_INT *n, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pclacgv_(MKL_INT *n, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pzlacgv_(MKL_INT *n, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);

void	PCMAX1(MKL_INT *n, MKL_Complex8 *amax, MKL_INT *indx, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PZMAX1(MKL_INT *n, MKL_Complex16 *amax, MKL_INT *indx, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PCMAX1_(MKL_INT *n, MKL_Complex8 *amax, MKL_INT *indx, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PZMAX1_(MKL_INT *n, MKL_Complex16 *amax, MKL_INT *indx, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pcmax1_(MKL_INT *n, MKL_Complex8 *amax, MKL_INT *indx, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pzmax1_(MKL_INT *n, MKL_Complex16 *amax, MKL_INT *indx, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);

void	CCOMBAMAX1(MKL_Complex8 *v1, MKL_Complex8 *v2);
void	ZCOMBAMAX1(MKL_Complex16 *v1, MKL_Complex16 *v2);
void	CCOMBAMAX1_(MKL_Complex8 *v1, MKL_Complex8 *v2);
void	ZCOMBAMAX1_(MKL_Complex16 *v1, MKL_Complex16 *v2);
void	ccombamax1_(MKL_Complex8 *v1, MKL_Complex8 *v2);
void	zcombamax1_(MKL_Complex16 *v1, MKL_Complex16 *v2);

void	PSCSUM1(MKL_INT *n, float *asum, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PDZSUM1(MKL_INT *n, double *asum, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PSCSUM1_(MKL_INT *n, float *asum, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PDZSUM1_(MKL_INT *n, double *asum, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pscsum1_(MKL_INT *n, float *asum, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pdzsum1_(MKL_INT *n, double *asum, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);

void	PSDBTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDBTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDBTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDBTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSDBTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDBTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDBTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDBTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psdbtrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddbtrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdbtrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdbtrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bwl, MKL_INT *bwu, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSDTTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDTTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDTTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDTTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSDTTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDDTTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCDTTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZDTTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psdttrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pddttrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcdttrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzdttrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGEBD2(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tauq, float *taup, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEBD2(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tauq, double *taup, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEBD2(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tauq, MKL_Complex8 *taup, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEBD2(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tauq, MKL_Complex16 *taup, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGEBD2_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tauq, float *taup, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEBD2_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tauq, double *taup, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEBD2_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tauq, MKL_Complex8 *taup, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEBD2_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tauq, MKL_Complex16 *taup, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgebd2_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tauq, float *taup, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgebd2_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tauq, double *taup, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgebd2_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tauq, MKL_Complex8 *taup, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgebd2_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tauq, MKL_Complex16 *taup, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGEHD2(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEHD2(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEHD2(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEHD2(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGEHD2_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEHD2_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEHD2_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEHD2_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgehd2_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgehd2_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgehd2_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgehd2_(MKL_INT *n, MKL_INT *ilo, MKL_INT *ihi, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGELQ2(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGELQ2(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGELQ2(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGELQ2(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGELQ2_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGELQ2_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGELQ2_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGELQ2_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgelq2_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgelq2_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgelq2_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgelq2_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGEQL2(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEQL2(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEQL2(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEQL2(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGEQL2_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEQL2_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEQL2_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEQL2_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgeql2_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgeql2_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgeql2_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgeql2_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGEQR2(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEQR2(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEQR2(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEQR2(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGEQR2_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGEQR2_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGEQR2_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGEQR2_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgeqr2_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgeqr2_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgeqr2_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgeqr2_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGERQ2(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGERQ2(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGERQ2(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGERQ2(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSGERQ2_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDGERQ2_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCGERQ2_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZGERQ2_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psgerq2_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdgerq2_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcgerq2_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzgerq2_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSGETF2(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PDGETF2(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PCGETF2(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PZGETF2(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PSGETF2_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PDGETF2_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PCGETF2_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	PZGETF2_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	psgetf2_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	pdgetf2_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	pcgetf2_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);
void	pzgetf2_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *info);

void	PSLABRD(MKL_INT *m, MKL_INT *n, MKL_INT *nb, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tauq, float *taup, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, float *work);
void	PDLABRD(MKL_INT *m, MKL_INT *n, MKL_INT *nb, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tauq, double *taup, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, double *work);
void	PCLABRD(MKL_INT *m, MKL_INT *n, MKL_INT *nb, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tauq, MKL_Complex8 *taup, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_Complex8 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex8 *work);
void	PZLABRD(MKL_INT *m, MKL_INT *n, MKL_INT *nb, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tauq, MKL_Complex16 *taup, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_Complex16 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex16 *work);
void	PSLABRD_(MKL_INT *m, MKL_INT *n, MKL_INT *nb, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tauq, float *taup, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, float *work);
void	PDLABRD_(MKL_INT *m, MKL_INT *n, MKL_INT *nb, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tauq, double *taup, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, double *work);
void	PCLABRD_(MKL_INT *m, MKL_INT *n, MKL_INT *nb, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tauq, MKL_Complex8 *taup, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_Complex8 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex8 *work);
void	PZLABRD_(MKL_INT *m, MKL_INT *n, MKL_INT *nb, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tauq, MKL_Complex16 *taup, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_Complex16 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex16 *work);
void	pslabrd_(MKL_INT *m, MKL_INT *n, MKL_INT *nb, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tauq, float *taup, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, float *work);
void	pdlabrd_(MKL_INT *m, MKL_INT *n, MKL_INT *nb, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tauq, double *taup, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, double *work);
void	pclabrd_(MKL_INT *m, MKL_INT *n, MKL_INT *nb, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tauq, MKL_Complex8 *taup, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_Complex8 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex8 *work);
void	pzlabrd_(MKL_INT *m, MKL_INT *n, MKL_INT *nb, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tauq, MKL_Complex16 *taup, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_Complex16 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex16 *work);

void	PSLACON(MKL_INT *n, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *isgn, float *est, MKL_INT *kase);
void	PDLACON(MKL_INT *n, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *isgn, double *est, MKL_INT *kase);
void	PCLACON(MKL_INT *n, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *est, MKL_INT *kase);
void	PZLACON(MKL_INT *n, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *est, MKL_INT *kase);
void	PSLACON_(MKL_INT *n, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *isgn, float *est, MKL_INT *kase);
void	PDLACON_(MKL_INT *n, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *isgn, double *est, MKL_INT *kase);
void	PCLACON_(MKL_INT *n, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *est, MKL_INT *kase);
void	PZLACON_(MKL_INT *n, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *est, MKL_INT *kase);
void	pslacon_(MKL_INT *n, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *isgn, float *est, MKL_INT *kase);
void	pdlacon_(MKL_INT *n, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *isgn, double *est, MKL_INT *kase);
void	pclacon_(MKL_INT *n, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *est, MKL_INT *kase);
void	pzlacon_(MKL_INT *n, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *est, MKL_INT *kase);

void	PSLACONSB(float *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *m, float *h44, float *h33, float *h43h34, float *buf, MKL_INT *lwork);
void	PDLACONSB(double *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *m, double *h44, double *h33, double *h43h34, double *buf, MKL_INT *lwork);
void	PSLACONSB_(float *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *m, float *h44, float *h33, float *h43h34, float *buf, MKL_INT *lwork);
void	PDLACONSB_(double *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *m, double *h44, double *h33, double *h43h34, double *buf, MKL_INT *lwork);
void	pslaconsb_(float *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *m, float *h44, float *h33, float *h43h34, float *buf, MKL_INT *lwork);
void	pdlaconsb_(double *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *m, double *h44, double *h33, double *h43h34, double *buf, MKL_INT *lwork);

void	PSLACP2(char *uplo, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PDLACP2(char *uplo, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PCLACP2(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PZLACP2(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PSLACP2_(char *uplo, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PDLACP2_(char *uplo, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PCLACP2_(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PZLACP2_(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pslacp2_(char *uplo, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pdlacp2_(char *uplo, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pclacp2_(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pzlacp2_(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);

void	PSLACP3(MKL_INT *m, MKL_INT *i, float *a, MKL_INT *desca, float *b, MKL_INT *ldb, MKL_INT *ii, MKL_INT *jj, MKL_INT *rev);
void	PDLACP3(MKL_INT *m, MKL_INT *i, double *a, MKL_INT *desca, double *b, MKL_INT *ldb, MKL_INT *ii, MKL_INT *jj, MKL_INT *rev);
void	PSLACP3_(MKL_INT *m, MKL_INT *i, float *a, MKL_INT *desca, float *b, MKL_INT *ldb, MKL_INT *ii, MKL_INT *jj, MKL_INT *rev);
void	PDLACP3_(MKL_INT *m, MKL_INT *i, double *a, MKL_INT *desca, double *b, MKL_INT *ldb, MKL_INT *ii, MKL_INT *jj, MKL_INT *rev);
void	pslacp3_(MKL_INT *m, MKL_INT *i, float *a, MKL_INT *desca, float *b, MKL_INT *ldb, MKL_INT *ii, MKL_INT *jj, MKL_INT *rev);
void	pdlacp3_(MKL_INT *m, MKL_INT *i, double *a, MKL_INT *desca, double *b, MKL_INT *ldb, MKL_INT *ii, MKL_INT *jj, MKL_INT *rev);

void	PSLACPY(char *uplo, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PDLACPY(char *uplo, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PCLACPY(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PZLACPY(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PSLACPY_(char *uplo, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PDLACPY_(char *uplo, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PCLACPY_(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	PZLACPY_(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pslacpy_(char *uplo, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pdlacpy_(char *uplo, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pclacpy_(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);
void	pzlacpy_(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb);

void	PSLAEVSWP(MKL_INT *n, float *zin, MKL_INT *ldzi, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, float *work, MKL_INT *lwork);
void	PDLAEVSWP(MKL_INT *n, double *zin, MKL_INT *ldzi, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, double *work, MKL_INT *lwork);
void	PCLAEVSWP(MKL_INT *n, float *zin, MKL_INT *ldzi, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, float *rwork, MKL_INT *lrwork);
void	PZLAEVSWP(MKL_INT *n, double *zin, MKL_INT *ldzi, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, double *rwork, MKL_INT *lrwork);
void	PSLAEVSWP_(MKL_INT *n, float *zin, MKL_INT *ldzi, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, float *work, MKL_INT *lwork);
void	PDLAEVSWP_(MKL_INT *n, double *zin, MKL_INT *ldzi, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, double *work, MKL_INT *lwork);
void	PCLAEVSWP_(MKL_INT *n, float *zin, MKL_INT *ldzi, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, float *rwork, MKL_INT *lrwork);
void	PZLAEVSWP_(MKL_INT *n, double *zin, MKL_INT *ldzi, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, double *rwork, MKL_INT *lrwork);
void	pslaevswp_(MKL_INT *n, float *zin, MKL_INT *ldzi, float *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, float *work, MKL_INT *lwork);
void	pdlaevswp_(MKL_INT *n, double *zin, MKL_INT *ldzi, double *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, double *work, MKL_INT *lwork);
void	pclaevswp_(MKL_INT *n, float *zin, MKL_INT *ldzi, MKL_Complex8 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, float *rwork, MKL_INT *lrwork);
void	pzlaevswp_(MKL_INT *n, double *zin, MKL_INT *ldzi, MKL_Complex16 *z, MKL_INT *iz, MKL_INT *jz, MKL_INT *descz, MKL_INT *nvs, MKL_INT *key, double *rwork, MKL_INT *lrwork);

void	PSLAHRD(MKL_INT *n, MKL_INT *k, MKL_INT *nb, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *t, float *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, float *work);
void	PDLAHRD(MKL_INT *n, MKL_INT *k, MKL_INT *nb, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *t, double *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, double *work);
void	PCLAHRD(MKL_INT *n, MKL_INT *k, MKL_INT *nb, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *t, MKL_Complex8 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex8 *work);
void	PZLAHRD(MKL_INT *n, MKL_INT *k, MKL_INT *nb, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *t, MKL_Complex16 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex16 *work);
void	PSLAHRD_(MKL_INT *n, MKL_INT *k, MKL_INT *nb, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *t, float *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, float *work);
void	PDLAHRD_(MKL_INT *n, MKL_INT *k, MKL_INT *nb, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *t, double *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, double *work);
void	PCLAHRD_(MKL_INT *n, MKL_INT *k, MKL_INT *nb, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *t, MKL_Complex8 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex8 *work);
void	PZLAHRD_(MKL_INT *n, MKL_INT *k, MKL_INT *nb, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *t, MKL_Complex16 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex16 *work);
void	pslahrd_(MKL_INT *n, MKL_INT *k, MKL_INT *nb, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *t, float *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, float *work);
void	pdlahrd_(MKL_INT *n, MKL_INT *k, MKL_INT *nb, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *t, double *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, double *work);
void	pclahrd_(MKL_INT *n, MKL_INT *k, MKL_INT *nb, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *t, MKL_Complex8 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex8 *work);
void	pzlahrd_(MKL_INT *n, MKL_INT *k, MKL_INT *nb, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *t, MKL_Complex16 *y, MKL_INT *iy, MKL_INT *jy, MKL_INT *descy, MKL_Complex16 *work);

void	PSLAIECT(float *sigma, MKL_INT *n, float *d, MKL_INT *count);
void	PDLAIECTB(float *sigma, MKL_INT *n, float *d, MKL_INT *count);
void	PDLAIECTL(float *sigma, MKL_INT *n, float *d, MKL_INT *count);
void	PSLAIECT_(float *sigma, MKL_INT *n, float *d, MKL_INT *count);
void	PDLAIECTB_(float *sigma, MKL_INT *n, float *d, MKL_INT *count);
void	PDLAIECTL_(float *sigma, MKL_INT *n, float *d, MKL_INT *count);
void	pslaiect_(float *sigma, MKL_INT *n, float *d, MKL_INT *count);
void	pdlaiectb_(float *sigma, MKL_INT *n, float *d, MKL_INT *count);
void	pdlaiectl_(float *sigma, MKL_INT *n, float *d, MKL_INT *count);

float	PSLANGE(char *norm, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PDLANGE(char *norm, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PCLANGE(char *norm, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PZLANGE(char *norm, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PSLANGE_(char *norm, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PDLANGE_(char *norm, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PCLANGE_(char *norm, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PZLANGE_(char *norm, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pslange_(char *norm, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pdlange_(char *norm, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pclange_(char *norm, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pzlange_(char *norm, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);

float	PSLANHS(char *norm, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PDLANHS(char *norm, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PCLANHS(char *norm, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PZLANHS(char *norm, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PSLANHS_(char *norm, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PDLANHS_(char *norm, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PCLANHS_(char *norm, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PZLANHS_(char *norm, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pslanhs_(char *norm, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pdlanhs_(char *norm, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pclanhs_(char *norm, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pzlanhs_(char *norm, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);

float	PSLANSY(char *norm, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PDLANSY(char *norm, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PCLANSY(char *norm, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PZLANSY(char *norm, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PCLANHE(char *norm, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PZLANHE(char *norm, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PSLANSY_(char *norm, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PDLANSY_(char *norm, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PCLANSY_(char *norm, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PZLANSY_(char *norm, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PCLANHE_(char *norm, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PZLANHE_(char *norm, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pslansy_(char *norm, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pdlansy_(char *norm, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pclansy_(char *norm, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pzlansy_(char *norm, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pclanhe_(char *norm, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pzlanhe_(char *norm, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);

float	PSLANTR(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PDLANTR(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PCLANTR(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PZLANTR(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PSLANTR_(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PDLANTR_(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	PCLANTR_(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	PZLANTR_(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pslantr_(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pdlantr_(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);
float	pclantr_(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *work);
double	pzlantr_(char *norm, char *uplo, char *diag, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *work);

void	PSLAPIV(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	PDLAPIV(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	PCLAPIV(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	PZLAPIV(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	PSLAPIV_(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	PDLAPIV_(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	PCLAPIV_(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	PZLAPIV_(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	pslapiv_(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	pdlapiv_(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	pclapiv_(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);
void	pzlapiv_(char *direc, char *rowcol, char *pivroc, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *ipiv, MKL_INT *ip, MKL_INT *jp, MKL_INT *descip, MKL_INT *iwork);

void	PSLAQGE(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, char *equed);
void	PDLAQGE(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, char *equed);
void	PCLAQGE(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, char *equed);
void	PZLAQGE(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, char *equed);
void	PSLAQGE_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, char *equed);
void	PDLAQGE_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, char *equed);
void	PCLAQGE_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, char *equed);
void	PZLAQGE_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, char *equed);
void	pslaqge_(MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, char *equed);
void	pdlaqge_(MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, char *equed);
void	pclaqge_(MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *r, float *c, float *rowcnd, float *colcnd, float *amax, char *equed);
void	pzlaqge_(MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *r, double *c, double *rowcnd, double *colcnd, double *amax, char *equed);

void	PSLAQSY(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, char *equed);
void	PDLAQSY(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, char *equed);
void	PCLAQSY(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, char *equed);
void	PZLAQSY(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, char *equed);
void	PSLAQSY_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, char *equed);
void	PDLAQSY_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, char *equed);
void	PCLAQSY_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, char *equed);
void	PZLAQSY_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, char *equed);
void	pslaqsy_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, char *equed);
void	pdlaqsy_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, char *equed);
void	pclaqsy_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *sr, float *sc, float *scond, float *amax, char *equed);
void	pzlaqsy_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *sr, double *sc, double *scond, double *amax, char *equed);

void	PSLARED1D(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, float *bycol, float *byall, float *work, MKL_INT *lwork);
void	PDLARED1D(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, double *bycol, double *byall, double *work, MKL_INT *lwork);
void	PSLARED1D_(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, float *bycol, float *byall, float *work, MKL_INT *lwork);
void	PDLARED1D_(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, double *bycol, double *byall, double *work, MKL_INT *lwork);
void	pslared1d_(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, float *bycol, float *byall, float *work, MKL_INT *lwork);
void	pdlared1d_(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, double *bycol, double *byall, double *work, MKL_INT *lwork);

void	PSLARED2D(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, float *byrow, float *byall, float *work, MKL_INT *lwork);
void	PDLARED2D(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, double *byrow, double *byall, double *work, MKL_INT *lwork);
void	PSLARED2D_(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, float *byrow, float *byall, float *work, MKL_INT *lwork);
void	PDLARED2D_(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, double *byrow, double *byall, double *work, MKL_INT *lwork);
void	pslared2d_(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, float *byrow, float *byall, float *work, MKL_INT *lwork);
void	pdlared2d_(MKL_INT *n, MKL_INT *ia, MKL_INT *ja, MKL_INT *desc, double *byrow, double *byall, double *work, MKL_INT *lwork);

void	PSLARF(char *side, MKL_INT *m, MKL_INT *n, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	PDLARF(char *side, MKL_INT *m, MKL_INT *n, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	PCLARF(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	PZLARF(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);
void	PSLARF_(char *side, MKL_INT *m, MKL_INT *n, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	PDLARF_(char *side, MKL_INT *m, MKL_INT *n, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	PCLARF_(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	PZLARF_(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);
void	pslarf_(char *side, MKL_INT *m, MKL_INT *n, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	pdlarf_(char *side, MKL_INT *m, MKL_INT *n, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	pclarf_(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	pzlarf_(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);

void	PSLARFB(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *t, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	PDLARFB(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *t, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	PCLARFB(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *t, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	PZLARFB(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *t, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);
void	PSLARFB_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *t, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	PDLARFB_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *t, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	PCLARFB_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *t, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	PZLARFB_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *t, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);
void	pslarfb_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *t, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	pdlarfb_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *t, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	pclarfb_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *t, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	pzlarfb_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *t, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);

void	PCLARFC(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	PZLARFC(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);
void	PCLARFC_(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	PZLARFC_(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);
void	pclarfc_(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	pzlarfc_(char *side, MKL_INT *m, MKL_INT *n, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);

void	PSLARFG(MKL_INT *n, float *alpha, MKL_INT *iax, MKL_INT *jax, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, float *tau);
void	PDLARFG(MKL_INT *n, double *alpha, MKL_INT *iax, MKL_INT *jax, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, double *tau);
void	PCLARFG(MKL_INT *n, MKL_Complex8 *alpha, MKL_INT *iax, MKL_INT *jax, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, MKL_Complex8 *tau);
void	PZLARFG(MKL_INT *n, MKL_Complex16 *alpha, MKL_INT *iax, MKL_INT *jax, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, MKL_Complex16 *tau);
void	PSLARFG_(MKL_INT *n, float *alpha, MKL_INT *iax, MKL_INT *jax, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, float *tau);
void	PDLARFG_(MKL_INT *n, double *alpha, MKL_INT *iax, MKL_INT *jax, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, double *tau);
void	PCLARFG_(MKL_INT *n, MKL_Complex8 *alpha, MKL_INT *iax, MKL_INT *jax, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, MKL_Complex8 *tau);
void	PZLARFG_(MKL_INT *n, MKL_Complex16 *alpha, MKL_INT *iax, MKL_INT *jax, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, MKL_Complex16 *tau);
void	pslarfg_(MKL_INT *n, float *alpha, MKL_INT *iax, MKL_INT *jax, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, float *tau);
void	pdlarfg_(MKL_INT *n, double *alpha, MKL_INT *iax, MKL_INT *jax, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, double *tau);
void	pclarfg_(MKL_INT *n, MKL_Complex8 *alpha, MKL_INT *iax, MKL_INT *jax, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, MKL_Complex8 *tau);
void	pzlarfg_(MKL_INT *n, MKL_Complex16 *alpha, MKL_INT *iax, MKL_INT *jax, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, MKL_Complex16 *tau);

void	PSLARFT(char *direct, char *storev, MKL_INT *n, MKL_INT *k, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *tau, float *t, float *work);
void	PDLARFT(char *direct, char *storev, MKL_INT *n, MKL_INT *k, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *tau, double *t, double *work);
void	PCLARFT(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *tau, MKL_Complex8 *t, MKL_Complex8 *work);
void	PZLARFT(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *tau, MKL_Complex16 *t, MKL_Complex16 *work);
void	PSLARFT_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *tau, float *t, float *work);
void	PDLARFT_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *tau, double *t, double *work);
void	PCLARFT_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *tau, MKL_Complex8 *t, MKL_Complex8 *work);
void	PZLARFT_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *tau, MKL_Complex16 *t, MKL_Complex16 *work);
void	pslarft_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *tau, float *t, float *work);
void	pdlarft_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *tau, double *t, double *work);
void	pclarft_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *tau, MKL_Complex8 *t, MKL_Complex8 *work);
void	pzlarft_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *tau, MKL_Complex16 *t, MKL_Complex16 *work);

void	PSLARZ(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	PDLARZ(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	PCLARZ(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	PZLARZ(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);
void	PSLARZ_(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	PDLARZ_(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	PCLARZ_(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	PZLARZ_(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);
void	pslarz_(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	pdlarz_(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	pclarz_(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	pzlarz_(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);

void	PSLARZB(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *t, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	PDLARZB(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *t, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	PCLARZB(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *t, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	PZLARZB(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *t, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);
void	PSLARZB_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *t, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	PDLARZB_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *t, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	PCLARZB_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *t, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	PZLARZB_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *t, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);
void	pslarzb_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *t, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work);
void	pdlarzb_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *t, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work);
void	pclarzb_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *t, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	pzlarzb_(char *side, char *trans, char *direct, char *storev, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_INT *l, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *t, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);

void	PCLARZC(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	PZLARZC(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);
void	PCLARZC_(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	PZLARZC_(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);
void	pclarzc_(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work);
void	pzlarzc_(char *side, MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_INT *incv, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work);

void	PSLARZT(char *direct, char *storev, MKL_INT *n, MKL_INT *k, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *tau, float *t, float *work);
void	PDLARZT(char *direct, char *storev, MKL_INT *n, MKL_INT *k, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *tau, double *t, double *work);
void	PCLARZT(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *tau, MKL_Complex8 *t, MKL_Complex8 *work);
void	PZLARZT(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *tau, MKL_Complex16 *t, MKL_Complex16 *work);
void	PSLARZT_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *tau, float *t, float *work);
void	PDLARZT_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *tau, double *t, double *work);
void	PCLARZT_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *tau, MKL_Complex8 *t, MKL_Complex8 *work);
void	PZLARZT_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *tau, MKL_Complex16 *t, MKL_Complex16 *work);
void	pslarzt_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, float *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, float *tau, float *t, float *work);
void	pdlarzt_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, double *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, double *tau, double *t, double *work);
void	pclarzt_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex8 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex8 *tau, MKL_Complex8 *t, MKL_Complex8 *work);
void	pzlarzt_(char *direct, char *storev, MKL_INT *n, MKL_INT *k, MKL_Complex16 *v, MKL_INT *iv, MKL_INT *jv, MKL_INT *descv, MKL_Complex16 *tau, MKL_Complex16 *t, MKL_Complex16 *work);

void	PSLASCL(char *type, float *cfrom, float *cto, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PDLASCL(char *type, double *cfrom, double *cto, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PCLASCL(char *type, float *cfrom, float *cto, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PZLASCL(char *type, double *cfrom, double *cto, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PSLASCL_(char *type, float *cfrom, float *cto, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PDLASCL_(char *type, double *cfrom, double *cto, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PCLASCL_(char *type, float *cfrom, float *cto, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PZLASCL_(char *type, double *cfrom, double *cto, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pslascl_(char *type, float *cfrom, float *cto, MKL_INT *m, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pdlascl_(char *type, double *cfrom, double *cto, MKL_INT *m, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pclascl_(char *type, float *cfrom, float *cto, MKL_INT *m, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pzlascl_(char *type, double *cfrom, double *cto, MKL_INT *m, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);

void	PSLASET(char *uplo, MKL_INT *m, MKL_INT *n, float *alpha, float *beta, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PDLASET(char *uplo, MKL_INT *m, MKL_INT *n, double *alpha, double *beta, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PCLASET(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex8 *alpha, MKL_Complex8 *beta, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PZLASET(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex16 *alpha, MKL_Complex16 *beta, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PSLASET_(char *uplo, MKL_INT *m, MKL_INT *n, float *alpha, float *beta, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PDLASET_(char *uplo, MKL_INT *m, MKL_INT *n, double *alpha, double *beta, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PCLASET_(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex8 *alpha, MKL_Complex8 *beta, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PZLASET_(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex16 *alpha, MKL_Complex16 *beta, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pslaset_(char *uplo, MKL_INT *m, MKL_INT *n, float *alpha, float *beta, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pdlaset_(char *uplo, MKL_INT *m, MKL_INT *n, double *alpha, double *beta, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pclaset_(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex8 *alpha, MKL_Complex8 *beta, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pzlaset_(char *uplo, MKL_INT *m, MKL_INT *n, MKL_Complex16 *alpha, MKL_Complex16 *beta, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);

void	PSLASMSUB(float *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *k, float *smlnum, float *buf, MKL_INT *lwork);
void	PDLASMSUB(double *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *k, double *smlnum, double *buf, MKL_INT *lwork);
void	PSLASMSUB_(float *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *k, float *smlnum, float *buf, MKL_INT *lwork);
void	PDLASMSUB_(double *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *k, double *smlnum, double *buf, MKL_INT *lwork);
void	pslasmsub_(float *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *k, float *smlnum, float *buf, MKL_INT *lwork);
void	pdlasmsub_(double *a, MKL_INT *desca, MKL_INT *i, MKL_INT *l, MKL_INT *k, double *smlnum, double *buf, MKL_INT *lwork);

void	PSLASSQ(MKL_INT *n, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, float *scale, float *sumsq);
void	PDLASSQ(MKL_INT *n, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, double *scale, double *sumsq);
void	PCLASSQ(MKL_INT *n, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, float *scale, float *sumsq);
void	PZLASSQ(MKL_INT *n, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, double *scale, double *sumsq);
void	PSLASSQ_(MKL_INT *n, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, float *scale, float *sumsq);
void	PDLASSQ_(MKL_INT *n, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, double *scale, double *sumsq);
void	PCLASSQ_(MKL_INT *n, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, float *scale, float *sumsq);
void	PZLASSQ_(MKL_INT *n, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, double *scale, double *sumsq);
void	pslassq_(MKL_INT *n, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, float *scale, float *sumsq);
void	pdlassq_(MKL_INT *n, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, double *scale, double *sumsq);
void	pclassq_(MKL_INT *n, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, float *scale, float *sumsq);
void	pzlassq_(MKL_INT *n, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx, double *scale, double *sumsq);

void	PSLASWP(char *direc, char *rowcol, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	PDLASWP(char *direc, char *rowcol, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	PCLASWP(char *direc, char *rowcol, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	PZLASWP(char *direc, char *rowcol, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	PSLASWP_(char *direc, char *rowcol, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	PDLASWP_(char *direc, char *rowcol, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	PCLASWP_(char *direc, char *rowcol, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	PZLASWP_(char *direc, char *rowcol, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	pslaswp_(char *direc, char *rowcol, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	pdlaswp_(char *direc, char *rowcol, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	pclaswp_(char *direc, char *rowcol, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);
void	pzlaswp_(char *direc, char *rowcol, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *k1, MKL_INT *k2, MKL_INT *ipiv);

float	PSLATRA(MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
double	PDLATRA(MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PCLATRA(MKL_Complex8 *, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PZLATRA(MKL_Complex16 *, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
float	PSLATRA_(MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
double	PDLATRA_(MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PCLATRA_(MKL_Complex8 *, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PZLATRA_(MKL_Complex16 *, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
float	pslatra_(MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
double	pdlatra_(MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pclatra_(MKL_Complex8 *, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pzlatra_(MKL_Complex16 *, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);

void	PSLATRD(char *uplo, MKL_INT *n, MKL_INT *nb, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tau, float *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, float *work);
void	PDLATRD(char *uplo, MKL_INT *n, MKL_INT *nb, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tau, double *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, double *work);
void	PCLATRD(char *uplo, MKL_INT *n, MKL_INT *nb, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tau, MKL_Complex8 *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, MKL_Complex8 *work);
void	PZLATRD(char *uplo, MKL_INT *n, MKL_INT *nb, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tau, MKL_Complex16 *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, MKL_Complex16 *work);
void	PSLATRD_(char *uplo, MKL_INT *n, MKL_INT *nb, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tau, float *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, float *work);
void	PDLATRD_(char *uplo, MKL_INT *n, MKL_INT *nb, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tau, double *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, double *work);
void	PCLATRD_(char *uplo, MKL_INT *n, MKL_INT *nb, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tau, MKL_Complex8 *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, MKL_Complex8 *work);
void	PZLATRD_(char *uplo, MKL_INT *n, MKL_INT *nb, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tau, MKL_Complex16 *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, MKL_Complex16 *work);
void	pslatrd_(char *uplo, MKL_INT *n, MKL_INT *nb, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tau, float *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, float *work);
void	pdlatrd_(char *uplo, MKL_INT *n, MKL_INT *nb, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tau, double *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, double *work);
void	pclatrd_(char *uplo, MKL_INT *n, MKL_INT *nb, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tau, MKL_Complex8 *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, MKL_Complex8 *work);
void	pzlatrd_(char *uplo, MKL_INT *n, MKL_INT *nb, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tau, MKL_Complex16 *w, MKL_INT *iw, MKL_INT *jw, MKL_INT *descw, MKL_Complex16 *work);

void	PSLATRS(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *scale, float *cnorm, float *work);
void	PDLATRS(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *scale, double *cnorm, double *work);
void	PCLATRS(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *scale, float *cnorm, MKL_Complex8 *work);
void	PZLATRS(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *scale, double *cnorm, MKL_Complex16 *work);
void	PSLATRS_(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *scale, float *cnorm, float *work);
void	PDLATRS_(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *scale, double *cnorm, double *work);
void	PCLATRS_(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *scale, float *cnorm, MKL_Complex8 *work);
void	PZLATRS_(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *scale, double *cnorm, MKL_Complex16 *work);
void	pslatrs_(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *scale, float *cnorm, float *work);
void	pdlatrs_(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *scale, double *cnorm, double *work);
void	pclatrs_(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, float *scale, float *cnorm, MKL_Complex8 *work);
void	pzlatrs_(char *uplo, char *trans, char *diag, char *normin, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *x, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, double *scale, double *cnorm, MKL_Complex16 *work);

void	PSLATRZ(MKL_INT *m, MKL_INT *n, MKL_INT *l, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work);
void	PDLATRZ(MKL_INT *m, MKL_INT *n, MKL_INT *l, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work);
void	PCLATRZ(MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work);
void	PZLATRZ(MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work);
void	PSLATRZ_(MKL_INT *m, MKL_INT *n, MKL_INT *l, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work);
void	PDLATRZ_(MKL_INT *m, MKL_INT *n, MKL_INT *l, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work);
void	PCLATRZ_(MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work);
void	PZLATRZ_(MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work);
void	pslatrz_(MKL_INT *m, MKL_INT *n, MKL_INT *l, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work);
void	pdlatrz_(MKL_INT *m, MKL_INT *n, MKL_INT *l, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work);
void	pclatrz_(MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work);
void	pzlatrz_(MKL_INT *m, MKL_INT *n, MKL_INT *l, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work);

void	PSLAUU2(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PDLAUU2(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PCLAUU2(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PZLAUU2(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PSLAUU2_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PDLAUU2_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PCLAUU2_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PZLAUU2_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pslauu2_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pdlauu2_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pclauu2_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pzlauu2_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);

void	PSLAUUM(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PDLAUUM(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PCLAUUM(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PZLAUUM(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PSLAUUM_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PDLAUUM_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PCLAUUM_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	PZLAUUM_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pslauum_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pdlauum_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pclauum_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);
void	pzlauum_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca);

void	PSLAWIL(MKL_INT *ii, MKL_INT *jj, MKL_INT *m, float *a, MKL_INT *desca, float *h44, float *h33, float *h43h34, float *v);
void	PDLAWIL(MKL_INT *ii, MKL_INT *jj, MKL_INT *m, double *a, MKL_INT *desca, double *h44, double *h33, double *h43h34, double *v);
void	PSLAWIL_(MKL_INT *ii, MKL_INT *jj, MKL_INT *m, float *a, MKL_INT *desca, float *h44, float *h33, float *h43h34, float *v);
void	PDLAWIL_(MKL_INT *ii, MKL_INT *jj, MKL_INT *m, double *a, MKL_INT *desca, double *h44, double *h33, double *h43h34, double *v);
void	pslawil_(MKL_INT *ii, MKL_INT *jj, MKL_INT *m, float *a, MKL_INT *desca, float *h44, float *h33, float *h43h34, float *v);
void	pdlawil_(MKL_INT *ii, MKL_INT *jj, MKL_INT *m, double *a, MKL_INT *desca, double *h44, double *h33, double *h43h34, double *v);

void	PSORG2L(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORG2L(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNG2L(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNG2L(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSORG2L_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORG2L_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNG2L_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNG2L_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psorg2l_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorg2l_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcung2l_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzung2l_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORG2R(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORG2R(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNG2R(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNG2R(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSORG2R_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORG2R_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNG2R_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNG2R_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psorg2r_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorg2r_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcung2r_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzung2r_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORGL2(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORGL2(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNGL2(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNGL2(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSORGL2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORGL2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNGL2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNGL2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psorgl2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorgl2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcungl2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzungl2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORGR2(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORGR2(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNGR2(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNGR2(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSORGR2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORGR2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNGR2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNGR2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psorgr2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorgr2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcungr2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzungr2_(MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORM2L(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORM2L(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNM2L(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNM2L(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSORM2L_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORM2L_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNM2L_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNM2L_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psorm2l_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorm2l_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcunm2l_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunm2l_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORM2R(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORM2R(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNM2R(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNM2R(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSORM2R_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORM2R_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNM2R_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNM2R_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psorm2r_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorm2r_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcunm2r_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunm2r_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORML2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORML2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNML2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNML2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSORML2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORML2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNML2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNML2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psorml2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdorml2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcunml2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunml2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSORMR2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMR2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNMR2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMR2(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSORMR2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDORMR2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCUNMR2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZUNMR2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	psormr2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *tau, float *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdormr2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *tau, double *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcunmr2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *tau, MKL_Complex8 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzunmr2_(char *side, char *trans, MKL_INT *m, MKL_INT *n, MKL_INT *k, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *tau, MKL_Complex16 *c, MKL_INT *ic, MKL_INT *jc, MKL_INT *descc, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSPBTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPBTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPBTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPBTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSPBTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPBTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPBTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPBTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pspbtrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, float *a, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpbtrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, double *a, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpbtrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex8 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpbtrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *bw, MKL_INT *nrhs, MKL_Complex16 *a, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSPTTRSV(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPTTRSV(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPTTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPTTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSPTTRSV_(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDPTTRSV_(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCPTTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZPTTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pspttrsv_(char *uplo, MKL_INT *n, MKL_INT *nrhs, float *d, float *e, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *descb, float *af, MKL_INT *laf, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdpttrsv_(char *uplo, MKL_INT *n, MKL_INT *nrhs, double *d, double *e, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *descb, double *af, MKL_INT *laf, double *work, MKL_INT *lwork, MKL_INT *info);
void	pcpttrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex8 *af, MKL_INT *laf, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzpttrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *descb, MKL_Complex16 *af, MKL_INT *laf, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSPOTF2(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PDPOTF2(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PCPOTF2(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PZPOTF2(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PSPOTF2_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PDPOTF2_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PCPOTF2_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PZPOTF2_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pspotf2_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pdpotf2_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pcpotf2_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pzpotf2_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);

void	PSRSCL(MKL_INT *n, float *sa, float *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PDRSCL(MKL_INT *n, double *sa, double *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PCSRSCL(MKL_INT *n, float *sa, MKL_Complex8 *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PZDRSCL(MKL_INT *n, double *sa, MKL_Complex16 *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PSRSCL_(MKL_INT *n, float *sa, float *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PDRSCL_(MKL_INT *n, double *sa, double *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PCSRSCL_(MKL_INT *n, float *sa, MKL_Complex8 *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	PZDRSCL_(MKL_INT *n, double *sa, MKL_Complex16 *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	psrscl_(MKL_INT *n, float *sa, float *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pdrscl_(MKL_INT *n, double *sa, double *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pcsrscl_(MKL_INT *n, float *sa, MKL_Complex8 *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);
void	pzdrscl_(MKL_INT *n, double *sa, MKL_Complex16 *sx, MKL_INT *ix, MKL_INT *jx, MKL_INT *descx, MKL_INT *incx);

void	PSSYGS2(MKL_INT *ibtype, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PDSYGS2(MKL_INT *ibtype, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PCHEGS2(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PZHEGS2(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PSSYGS2_(MKL_INT *ibtype, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PDSYGS2_(MKL_INT *ibtype, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PCHEGS2_(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	PZHEGS2_(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pssygs2_(MKL_INT *ibtype, char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pdsygs2_(MKL_INT *ibtype, char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pchegs2_(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex8 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);
void	pzhegs2_(MKL_INT *ibtype, char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_Complex16 *b, MKL_INT *ib, MKL_INT *jb, MKL_INT *descb, MKL_INT *info);

void	PSSYTD2(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDSYTD2(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCHETD2(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZHETD2(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	PSSYTD2_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	PDSYTD2_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	PCHETD2_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	PZHETD2_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);
void	pssytd2_(char *uplo, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, float *tau, float *work, MKL_INT *lwork, MKL_INT *info);
void	pdsytd2_(char *uplo, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, double *tau, double *work, MKL_INT *lwork, MKL_INT *info);
void	pchetd2_(char *uplo, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, float *d, float *e, MKL_Complex8 *tau, MKL_Complex8 *work, MKL_INT *lwork, MKL_INT *info);
void	pzhetd2_(char *uplo, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, double *d, double *e, MKL_Complex16 *tau, MKL_Complex16 *work, MKL_INT *lwork, MKL_INT *info);

void	PSTRTI2(char *uplo, char *diag, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PDTRTI2(char *uplo, char *diag, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PCTRTI2(char *uplo, char *diag, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PZTRTI2(char *uplo, char *diag, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PSTRTI2_(char *uplo, char *diag, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PDTRTI2_(char *uplo, char *diag, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PCTRTI2_(char *uplo, char *diag, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	PZTRTI2_(char *uplo, char *diag, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pstrti2_(char *uplo, char *diag, MKL_INT *n, float *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pdtrti2_(char *uplo, char *diag, MKL_INT *n, double *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pctrti2_(char *uplo, char *diag, MKL_INT *n, MKL_Complex8 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);
void	pztrti2_(char *uplo, char *diag, MKL_INT *n, MKL_Complex16 *a, MKL_INT *ia, MKL_INT *ja, MKL_INT *desca, MKL_INT *info);

void	SLAMSH(float *s, MKL_INT *lds, MKL_INT *nbulge, MKL_INT *jblk, float *h, MKL_INT *ldh, MKL_INT *n, float *ulp);
void	DLAMSH(double *s, MKL_INT *lds, MKL_INT *nbulge, MKL_INT *jblk, double *h, MKL_INT *ldh, MKL_INT *n, double *ulp);
void	SLAMSH_(float *s, MKL_INT *lds, MKL_INT *nbulge, MKL_INT *jblk, float *h, MKL_INT *ldh, MKL_INT *n, float *ulp);
void	DLAMSH_(double *s, MKL_INT *lds, MKL_INT *nbulge, MKL_INT *jblk, double *h, MKL_INT *ldh, MKL_INT *n, double *ulp);
void	slamsh_(float *s, MKL_INT *lds, MKL_INT *nbulge, MKL_INT *jblk, float *h, MKL_INT *ldh, MKL_INT *n, float *ulp);
void	dlamsh_(double *s, MKL_INT *lds, MKL_INT *nbulge, MKL_INT *jblk, double *h, MKL_INT *ldh, MKL_INT *n, double *ulp);

void	SLAREF(char *type, float *a, MKL_INT *lda, MKL_INT *wantz, float *z, MKL_INT *ldz, MKL_INT *block, MKL_INT *irow1, MKL_INT *icol1, MKL_INT *istart, MKL_INT *istop, MKL_INT *itmp1, MKL_INT *itmp2, MKL_INT *liloz, MKL_INT *lihiz, float *vecs, float *v2, float *v3, float *t1, float *t2, float *t3);
void	DLAREF(char *type, double *a, MKL_INT *lda, MKL_INT *wantz, double *z, MKL_INT *ldz, MKL_INT *block, MKL_INT *irow1, MKL_INT *icol1, MKL_INT *istart, MKL_INT *istop, MKL_INT *itmp1, MKL_INT *itmp2, MKL_INT *liloz, MKL_INT *lihiz, double *vecs, double *v2, double *v3, double *t1, double *t2, double *t3);
void	SLAREF_(char *type, float *a, MKL_INT *lda, MKL_INT *wantz, float *z, MKL_INT *ldz, MKL_INT *block, MKL_INT *irow1, MKL_INT *icol1, MKL_INT *istart, MKL_INT *istop, MKL_INT *itmp1, MKL_INT *itmp2, MKL_INT *liloz, MKL_INT *lihiz, float *vecs, float *v2, float *v3, float *t1, float *t2, float *t3);
void	DLAREF_(char *type, double *a, MKL_INT *lda, MKL_INT *wantz, double *z, MKL_INT *ldz, MKL_INT *block, MKL_INT *irow1, MKL_INT *icol1, MKL_INT *istart, MKL_INT *istop, MKL_INT *itmp1, MKL_INT *itmp2, MKL_INT *liloz, MKL_INT *lihiz, double *vecs, double *v2, double *v3, double *t1, double *t2, double *t3);
void	slaref_(char *type, float *a, MKL_INT *lda, MKL_INT *wantz, float *z, MKL_INT *ldz, MKL_INT *block, MKL_INT *irow1, MKL_INT *icol1, MKL_INT *istart, MKL_INT *istop, MKL_INT *itmp1, MKL_INT *itmp2, MKL_INT *liloz, MKL_INT *lihiz, float *vecs, float *v2, float *v3, float *t1, float *t2, float *t3);
void	dlaref_(char *type, double *a, MKL_INT *lda, MKL_INT *wantz, double *z, MKL_INT *ldz, MKL_INT *block, MKL_INT *irow1, MKL_INT *icol1, MKL_INT *istart, MKL_INT *istop, MKL_INT *itmp1, MKL_INT *itmp2, MKL_INT *liloz, MKL_INT *lihiz, double *vecs, double *v2, double *v3, double *t1, double *t2, double *t3);

void	SLASORTE(float *s, MKL_INT *lds, MKL_INT *j, float *out, MKL_INT *info);
void	DLASORTE(double *s, MKL_INT *lds, MKL_INT *j, double *out, MKL_INT *info);
void	SLASORTE_(float *s, MKL_INT *lds, MKL_INT *j, float *out, MKL_INT *info);
void	DLASORTE_(double *s, MKL_INT *lds, MKL_INT *j, double *out, MKL_INT *info);
void	slasorte_(float *s, MKL_INT *lds, MKL_INT *j, float *out, MKL_INT *info);
void	dlasorte_(double *s, MKL_INT *lds, MKL_INT *j, double *out, MKL_INT *info);

void	SLASRT2(char *id, MKL_INT *n, float *d, MKL_INT *key, MKL_INT *info);
void	DLASRT2(char *id, MKL_INT *n, double *d, MKL_INT *key, MKL_INT *info);
void	SLASRT2_(char *id, MKL_INT *n, float *d, MKL_INT *key, MKL_INT *info);
void	DLASRT2_(char *id, MKL_INT *n, double *d, MKL_INT *key, MKL_INT *info);
void	slasrt2_(char *id, MKL_INT *n, float *d, MKL_INT *key, MKL_INT *info);
void	dlasrt2_(char *id, MKL_INT *n, double *d, MKL_INT *key, MKL_INT *info);

void	SSTEIN2(MKL_INT *n, float *d, float *e, MKL_INT *m, float *w, MKL_INT *iblock, MKL_INT *isplit, float *orfac, float *z, MKL_INT *ldz, float *work, MKL_INT *iwork, MKL_INT *ifail, MKL_INT *info);
void	DSTEIN2(MKL_INT *n, double *d, double *e, MKL_INT *m, double *w, MKL_INT *iblock, MKL_INT *isplit, double *orfac, double *z, MKL_INT *ldz, double *work, MKL_INT *iwork, MKL_INT *ifail, MKL_INT *info);
void	SSTEIN2_(MKL_INT *n, float *d, float *e, MKL_INT *m, float *w, MKL_INT *iblock, MKL_INT *isplit, float *orfac, float *z, MKL_INT *ldz, float *work, MKL_INT *iwork, MKL_INT *ifail, MKL_INT *info);
void	DSTEIN2_(MKL_INT *n, double *d, double *e, MKL_INT *m, double *w, MKL_INT *iblock, MKL_INT *isplit, double *orfac, double *z, MKL_INT *ldz, double *work, MKL_INT *iwork, MKL_INT *ifail, MKL_INT *info);
void	sstein2_(MKL_INT *n, float *d, float *e, MKL_INT *m, float *w, MKL_INT *iblock, MKL_INT *isplit, float *orfac, float *z, MKL_INT *ldz, float *work, MKL_INT *iwork, MKL_INT *ifail, MKL_INT *info);
void	dstein2_(MKL_INT *n, double *d, double *e, MKL_INT *m, double *w, MKL_INT *iblock, MKL_INT *isplit, double *orfac, double *z, MKL_INT *ldz, double *work, MKL_INT *iwork, MKL_INT *ifail, MKL_INT *info);

void	SDBTF2(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, float *ab, MKL_INT *ldab, MKL_INT *info);
void	DDBTF2(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, double *ab, MKL_INT *ldab, MKL_INT *info);
void	CDBTF2(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex8 *ab, MKL_INT *ldab, MKL_INT *info);
void	ZDBTF2(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex16 *ab, MKL_INT *ldab, MKL_INT *info);
void	SDBTF2_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, float *ab, MKL_INT *ldab, MKL_INT *info);
void	DDBTF2_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, double *ab, MKL_INT *ldab, MKL_INT *info);
void	CDBTF2_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex8 *ab, MKL_INT *ldab, MKL_INT *info);
void	ZDBTF2_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex16 *ab, MKL_INT *ldab, MKL_INT *info);
void	sdbtf2_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, float *ab, MKL_INT *ldab, MKL_INT *info);
void	ddbtf2_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, double *ab, MKL_INT *ldab, MKL_INT *info);
void	cdbtf2_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex8 *ab, MKL_INT *ldab, MKL_INT *info);
void	zdbtf2_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex16 *ab, MKL_INT *ldab, MKL_INT *info);

void	SDBTRF(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, float *ab, MKL_INT *ldab, MKL_INT *info);
void	DDBTRF(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, double *ab, MKL_INT *ldab, MKL_INT *info);
void	CDBTRF(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex8 *ab, MKL_INT *ldab, MKL_INT *info);
void	ZDBTRF(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex16 *ab, MKL_INT *ldab, MKL_INT *info);
void	SDBTRF_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, float *ab, MKL_INT *ldab, MKL_INT *info);
void	DDBTRF_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, double *ab, MKL_INT *ldab, MKL_INT *info);
void	CDBTRF_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex8 *ab, MKL_INT *ldab, MKL_INT *info);
void	ZDBTRF_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex16 *ab, MKL_INT *ldab, MKL_INT *info);
void	sdbtrf_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, float *ab, MKL_INT *ldab, MKL_INT *info);
void	ddbtrf_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, double *ab, MKL_INT *ldab, MKL_INT *info);
void	cdbtrf_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex8 *ab, MKL_INT *ldab, MKL_INT *info);
void	zdbtrf_(MKL_INT *m, MKL_INT *n, MKL_INT *kl, MKL_INT *ku, MKL_Complex16 *ab, MKL_INT *ldab, MKL_INT *info);

void	SDTTRF(MKL_INT *n, float *dl, float *d, float *du, MKL_INT *info);
void	DDTTRF(MKL_INT *n, double *dl, double *d, double *du, MKL_INT *info);
void	CDTTRF(MKL_INT *n, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *info);
void	ZDTTRF(MKL_INT *n, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *info);
void	SDTTRF_(MKL_INT *n, float *dl, float *d, float *du, MKL_INT *info);
void	DDTTRF_(MKL_INT *n, double *dl, double *d, double *du, MKL_INT *info);
void	CDTTRF_(MKL_INT *n, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *info);
void	ZDTTRF_(MKL_INT *n, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *info);
void	sdttrf_(MKL_INT *n, float *dl, float *d, float *du, MKL_INT *info);
void	ddttrf_(MKL_INT *n, double *dl, double *d, double *du, MKL_INT *info);
void	cdttrf_(MKL_INT *n, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_INT *info);
void	zdttrf_(MKL_INT *n, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_INT *info);

void	SDTTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, float *b, MKL_INT *ldb, MKL_INT *info);
void	DDTTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, double *b, MKL_INT *ldb, MKL_INT *info);
void	CDTTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_Complex8 *b, MKL_INT *ldb, MKL_INT *info);
void	ZDTTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_Complex16 *b, MKL_INT *ldb, MKL_INT *info);
void	SDTTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, float *b, MKL_INT *ldb, MKL_INT *info);
void	DDTTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, double *b, MKL_INT *ldb, MKL_INT *info);
void	CDTTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_Complex8 *b, MKL_INT *ldb, MKL_INT *info);
void	ZDTTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_Complex16 *b, MKL_INT *ldb, MKL_INT *info);
void	sdttrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *dl, float *d, float *du, float *b, MKL_INT *ldb, MKL_INT *info);
void	ddttrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *dl, double *d, double *du, double *b, MKL_INT *ldb, MKL_INT *info);
void	cdttrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex8 *dl, MKL_Complex8 *d, MKL_Complex8 *du, MKL_Complex8 *b, MKL_INT *ldb, MKL_INT *info);
void	zdttrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, MKL_Complex16 *dl, MKL_Complex16 *d, MKL_Complex16 *du, MKL_Complex16 *b, MKL_INT *ldb, MKL_INT *info);

void	SPTTRSV(char *trans, MKL_INT *n, MKL_INT *nrhs, float *d, float *e, float *b, MKL_INT *ldb, MKL_INT *info);
void	DPTTRSV(char *trans, MKL_INT *n, MKL_INT *nrhs, double *d, double *e, double *b, MKL_INT *ldb, MKL_INT *info);
void	CPTTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_Complex8 *b, MKL_INT *ldb, MKL_INT *info);
void	ZPTTRSV(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_Complex16 *b, MKL_INT *ldb, MKL_INT *info);
void	SPTTRSV_(char *trans, MKL_INT *n, MKL_INT *nrhs, float *d, float *e, float *b, MKL_INT *ldb, MKL_INT *info);
void	DPTTRSV_(char *trans, MKL_INT *n, MKL_INT *nrhs, double *d, double *e, double *b, MKL_INT *ldb, MKL_INT *info);
void	CPTTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_Complex8 *b, MKL_INT *ldb, MKL_INT *info);
void	ZPTTRSV_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_Complex16 *b, MKL_INT *ldb, MKL_INT *info);
void	spttrsv_(char *trans, MKL_INT *n, MKL_INT *nrhs, float *d, float *e, float *b, MKL_INT *ldb, MKL_INT *info);
void	dpttrsv_(char *trans, MKL_INT *n, MKL_INT *nrhs, double *d, double *e, double *b, MKL_INT *ldb, MKL_INT *info);
void	cpttrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, float *d, MKL_Complex8 *e, MKL_Complex8 *b, MKL_INT *ldb, MKL_INT *info);
void	zpttrsv_(char *uplo, char *trans, MKL_INT *n, MKL_INT *nrhs, double *d, MKL_Complex16 *e, MKL_Complex16 *b, MKL_INT *ldb, MKL_INT *info);

void	SSTEQR2(char *compz, MKL_INT *n, float *d, float *e, float *z, MKL_INT *ldz, MKL_INT *nr, float *work, MKL_INT *info);
void	DSTEQR2(char *compz, MKL_INT *n, double *d, double *e, double *z, MKL_INT *ldz, MKL_INT *nr, double *work, MKL_INT *info);
void	SSTEQR2_(char *compz, MKL_INT *n, float *d, float *e, float *z, MKL_INT *ldz, MKL_INT *nr, float *work, MKL_INT *info);
void	DSTEQR2_(char *compz, MKL_INT *n, double *d, double *e, double *z, MKL_INT *ldz, MKL_INT *nr, double *work, MKL_INT *info);
void	ssteqr2_(char *compz, MKL_INT *n, float *d, float *e, float *z, MKL_INT *ldz, MKL_INT *nr, float *work, MKL_INT *info);
void	dsteqr2_(char *compz, MKL_INT *n, double *d, double *e, double *z, MKL_INT *ldz, MKL_INT *nr, double *work, MKL_INT *info);

void	PSLABAD(MKL_INT *ictxt, float *small, float *large);
void	PDLABAD(MKL_INT *ictxt, double *small, double *large);
void	PSLABAD_(MKL_INT *ictxt, float *small, float *large);
void	PDLABAD_(MKL_INT *ictxt, double *small, double *large);
void	pslabad_(MKL_INT *ictxt, float *small, float *large);
void	pdlabad_(MKL_INT *ictxt, double *small, double *large);

void	PSLACHKIEEE(MKL_INT *isieee, float *rmax, float *rmin);
void	PDLACHKIEEE(MKL_INT *isieee, float *rmax, float *rmin);
void	PSLACHKIEEE_(MKL_INT *isieee, float *rmax, float *rmin);
void	PDLACHKIEEE_(MKL_INT *isieee, float *rmax, float *rmin);
void	pslachkieee_(MKL_INT *isieee, float *rmax, float *rmin);
void	pdlachkieee_(MKL_INT *isieee, float *rmax, float *rmin);

float	PSLAMCH(MKL_INT *ictxt, char *cmach);
double	PDLAMCH(MKL_INT *ictxt, char *cmach);
float	PSLAMCH_(MKL_INT *ictxt, char *cmach);
double	PDLAMCH_(MKL_INT *ictxt, char *cmach);
float	pslamch_(MKL_INT *ictxt, char *cmach);
double	pdlamch_(MKL_INT *ictxt, char *cmach);

void	PSLASNBT(MKL_INT *ieflag);
void	PDLASNBT(MKL_INT *ieflag);
void	PSLASNBT_(MKL_INT *ieflag);
void	PDLASNBT_(MKL_INT *ieflag);
void	pslasnbt_(MKL_INT *ieflag);
void	pdlasnbt_(MKL_INT *ieflag);

void	PXERBLA(MKL_INT *ictxt, char *srname, MKL_INT *info);
void	PXERBLA_(MKL_INT *ictxt, char *srname, MKL_INT *info);
void	pxerbla_(MKL_INT *ictxt, char *srname, MKL_INT *info);

/* Declarations are added in MKL 11.2 Beta */

void	BDLAAPP( MKL_INT* iside, MKL_INT* m, MKL_INT* n, MKL_INT* nb, double* a, MKL_INT* lda, MKL_INT* nitraf, MKL_INT* itraf, double* dtraf, double* work );
void	BDLAAPP_( MKL_INT* iside, MKL_INT* m, MKL_INT* n, MKL_INT* nb, double* a, MKL_INT* lda, MKL_INT* nitraf, MKL_INT* itraf, double* dtraf, double* work );
void	bdlaapp_( MKL_INT* iside, MKL_INT* m, MKL_INT* n, MKL_INT* nb, double* a, MKL_INT* lda, MKL_INT* nitraf, MKL_INT* itraf, double* dtraf, double* work );

void	BDLAEXC( MKL_INT* n, double* t, MKL_INT* ldt, MKL_INT* j1, MKL_INT* n1, MKL_INT* n2, MKL_INT* itraf, double* dtraf, double* work, MKL_INT* info );
void	BDLAEXC_( MKL_INT* n, double* t, MKL_INT* ldt, MKL_INT* j1, MKL_INT* n1, MKL_INT* n2, MKL_INT* itraf, double* dtraf, double* work, MKL_INT* info );
void	bdlaexc_( MKL_INT* n, double* t, MKL_INT* ldt, MKL_INT* j1, MKL_INT* n1, MKL_INT* n2, MKL_INT* itraf, double* dtraf, double* work, MKL_INT* info );

void	BDTREXC( MKL_INT* n, double* t, MKL_INT* ldt, MKL_INT* ifst, MKL_INT* ilst, MKL_INT* nitraf, MKL_INT* itraf, MKL_INT* ndtraf, double* dtraf, double* work, MKL_INT* info );
void	BDTREXC_( MKL_INT* n, double* t, MKL_INT* ldt, MKL_INT* ifst, MKL_INT* ilst, MKL_INT* nitraf, MKL_INT* itraf, MKL_INT* ndtraf, double* dtraf, double* work, MKL_INT* info );
void	bdtrexc_( MKL_INT* n, double* t, MKL_INT* ldt, MKL_INT* ifst, MKL_INT* ilst, MKL_INT* nitraf, MKL_INT* itraf, MKL_INT* ndtraf, double* dtraf, double* work, MKL_INT* info );

void	BSLAAPP( MKL_INT* iside, MKL_INT* m, MKL_INT* n, MKL_INT* nb, float* a, MKL_INT* lda, MKL_INT* nitraf, MKL_INT* itraf, float* dtraf, float* work );
void	BSLAAPP_( MKL_INT* iside, MKL_INT* m, MKL_INT* n, MKL_INT* nb, float* a, MKL_INT* lda, MKL_INT* nitraf, MKL_INT* itraf, float* dtraf, float* work );
void	bslaapp_( MKL_INT* iside, MKL_INT* m, MKL_INT* n, MKL_INT* nb, float* a, MKL_INT* lda, MKL_INT* nitraf, MKL_INT* itraf, float* dtraf, float* work );

void	BSLAEXC( MKL_INT* n, float* t, MKL_INT* ldt, MKL_INT* j1, MKL_INT* n1, MKL_INT* n2, MKL_INT* itraf, float* dtraf, float* work, MKL_INT* info );
void	BSLAEXC_( MKL_INT* n, float* t, MKL_INT* ldt, MKL_INT* j1, MKL_INT* n1, MKL_INT* n2, MKL_INT* itraf, float* dtraf, float* work, MKL_INT* info );
void	bslaexc_( MKL_INT* n, float* t, MKL_INT* ldt, MKL_INT* j1, MKL_INT* n1, MKL_INT* n2, MKL_INT* itraf, float* dtraf, float* work, MKL_INT* info );

void	BSTREXC( MKL_INT* n, float* t, MKL_INT* ldt, MKL_INT* ifst, MKL_INT* ilst, MKL_INT* nitraf, MKL_INT* itraf, MKL_INT* ndtraf, float* dtraf, float* work, MKL_INT* info );
void	BSTREXC_( MKL_INT* n, float* t, MKL_INT* ldt, MKL_INT* ifst, MKL_INT* ilst, MKL_INT* nitraf, MKL_INT* itraf, MKL_INT* ndtraf, float* dtraf, float* work, MKL_INT* info );
void	bstrexc_( MKL_INT* n, float* t, MKL_INT* ldt, MKL_INT* ifst, MKL_INT* ilst, MKL_INT* nitraf, MKL_INT* itraf, MKL_INT* ndtraf, float* dtraf, float* work, MKL_INT* info );

void	DLAQR6( char* job, MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, double* sr, double* si, double* h, MKL_INT* ldh, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* ldz, double* v, MKL_INT* ldv, double* u, MKL_INT* ldu, MKL_INT* nv, double* wv, MKL_INT* ldwv, MKL_INT* nh, double* wh, MKL_INT* ldwh );
void	DLAQR6_( char* job, MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, double* sr, double* si, double* h, MKL_INT* ldh, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* ldz, double* v, MKL_INT* ldv, double* u, MKL_INT* ldu, MKL_INT* nv, double* wv, MKL_INT* ldwv, MKL_INT* nh, double* wh, MKL_INT* ldwh );
void	dlaqr6_( char* job, MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, double* sr, double* si, double* h, MKL_INT* ldh, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* ldz, double* v, MKL_INT* ldv, double* u, MKL_INT* ldu, MKL_INT* nv, double* wv, MKL_INT* ldwv, MKL_INT* nh, double* wh, MKL_INT* ldwh );

void	DLAR1VA( MKL_INT* n, MKL_INT* b1, MKL_INT* bn, double* lambda, double* d, double* l, double* ld, double* lld, double* pivmin, double* gaptol, double* z, MKL_INT* wantnc, MKL_INT* negcnt, double* ztz, double* mingma, MKL_INT* r, MKL_INT* isuppz, double* nrminv, double* resid, double* rqcorr, double* work );
void	DLAR1VA_( MKL_INT* n, MKL_INT* b1, MKL_INT* bn, double* lambda, double* d, double* l, double* ld, double* lld, double* pivmin, double* gaptol, double* z, MKL_INT* wantnc, MKL_INT* negcnt, double* ztz, double* mingma, MKL_INT* r, MKL_INT* isuppz, double* nrminv, double* resid, double* rqcorr, double* work );
void	dlar1va_( MKL_INT* n, MKL_INT* b1, MKL_INT* bn, double* lambda, double* d, double* l, double* ld, double* lld, double* pivmin, double* gaptol, double* z, MKL_INT* wantnc, MKL_INT* negcnt, double* ztz, double* mingma, MKL_INT* r, MKL_INT* isuppz, double* nrminv, double* resid, double* rqcorr, double* work );

void	DLARRB2( MKL_INT* n, double* d, double* lld, MKL_INT* ifirst, MKL_INT* ilast, double* rtol1, double* rtol2, MKL_INT* offset, double* w, double* wgap, double* werr, double* work, MKL_INT* iwork, double* pivmin, double* lgpvmn, double* lgspdm, MKL_INT* twist, MKL_INT* info );
void	DLARRB2_( MKL_INT* n, double* d, double* lld, MKL_INT* ifirst, MKL_INT* ilast, double* rtol1, double* rtol2, MKL_INT* offset, double* w, double* wgap, double* werr, double* work, MKL_INT* iwork, double* pivmin, double* lgpvmn, double* lgspdm, MKL_INT* twist, MKL_INT* info );
void	dlarrb2_( MKL_INT* n, double* d, double* lld, MKL_INT* ifirst, MKL_INT* ilast, double* rtol1, double* rtol2, MKL_INT* offset, double* w, double* wgap, double* werr, double* work, MKL_INT* iwork, double* pivmin, double* lgpvmn, double* lgspdm, MKL_INT* twist, MKL_INT* info );

void	DLARRD2( char* range, char* order, MKL_INT* n, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, double* gers, double* reltol, double* d, double* e, double* e2, double* pivmin, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, double* w, double* werr, double* wl, double* wu, MKL_INT* iblock, MKL_INT* indexw, double* work, MKL_INT* iwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* info );
void	DLARRD2_( char* range, char* order, MKL_INT* n, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, double* gers, double* reltol, double* d, double* e, double* e2, double* pivmin, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, double* w, double* werr, double* wl, double* wu, MKL_INT* iblock, MKL_INT* indexw, double* work, MKL_INT* iwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* info );
void	dlarrd2_( char* range, char* order, MKL_INT* n, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, double* gers, double* reltol, double* d, double* e, double* e2, double* pivmin, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, double* w, double* werr, double* wl, double* wu, MKL_INT* iblock, MKL_INT* indexw, double* work, MKL_INT* iwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* info );

void	DLARRE2( char* range, MKL_INT* n, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, double* d, double* e, double* e2, double* rtol1, double* rtol2, double* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, double* w, double* werr, double* wgap, MKL_INT* iblock, MKL_INT* indexw, double* gers, double* pivmin, double* work, MKL_INT* iwork, MKL_INT* info );
void	DLARRE2_( char* range, MKL_INT* n, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, double* d, double* e, double* e2, double* rtol1, double* rtol2, double* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, double* w, double* werr, double* wgap, MKL_INT* iblock, MKL_INT* indexw, double* gers, double* pivmin, double* work, MKL_INT* iwork, MKL_INT* info );
void	dlarre2_( char* range, MKL_INT* n, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, double* d, double* e, double* e2, double* rtol1, double* rtol2, double* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, double* w, double* werr, double* wgap, MKL_INT* iblock, MKL_INT* indexw, double* gers, double* pivmin, double* work, MKL_INT* iwork, MKL_INT* info );

void	DLARRE2A( char* range, MKL_INT* n, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, double* d, double* e, double* e2, double* rtol1, double* rtol2, double* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, double* w, double* werr, double* wgap, MKL_INT* iblock, MKL_INT* indexw, double* gers, double* sdiam, double* pivmin, double* work, MKL_INT* iwork, double* minrgp, MKL_INT* info );
void	DLARRE2A_( char* range, MKL_INT* n, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, double* d, double* e, double* e2, double* rtol1, double* rtol2, double* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, double* w, double* werr, double* wgap, MKL_INT* iblock, MKL_INT* indexw, double* gers, double* sdiam, double* pivmin, double* work, MKL_INT* iwork, double* minrgp, MKL_INT* info );
void	dlarre2a_( char* range, MKL_INT* n, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, double* d, double* e, double* e2, double* rtol1, double* rtol2, double* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, double* w, double* werr, double* wgap, MKL_INT* iblock, MKL_INT* indexw, double* gers, double* sdiam, double* pivmin, double* work, MKL_INT* iwork, double* minrgp, MKL_INT* info );

void	DLARRF2( MKL_INT* n, double* d, double* l, double* ld, MKL_INT* clstrt, MKL_INT* clend, MKL_INT* clmid1, MKL_INT* clmid2, double* w, double* wgap, double* werr, MKL_INT* trymid, double* spdiam, double* clgapl, double* clgapr, double* pivmin, double* sigma, double* dplus, double* lplus, double* work, MKL_INT* info );
void	DLARRF2_( MKL_INT* n, double* d, double* l, double* ld, MKL_INT* clstrt, MKL_INT* clend, MKL_INT* clmid1, MKL_INT* clmid2, double* w, double* wgap, double* werr, MKL_INT* trymid, double* spdiam, double* clgapl, double* clgapr, double* pivmin, double* sigma, double* dplus, double* lplus, double* work, MKL_INT* info );
void	dlarrf2_( MKL_INT* n, double* d, double* l, double* ld, MKL_INT* clstrt, MKL_INT* clend, MKL_INT* clmid1, MKL_INT* clmid2, double* w, double* wgap, double* werr, MKL_INT* trymid, double* spdiam, double* clgapl, double* clgapr, double* pivmin, double* sigma, double* dplus, double* lplus, double* work, MKL_INT* info );

void	DLARRV2( MKL_INT* n, double* vl, double* vu, double* d, double* l, double* pivmin, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, double* minrgp, double* rtol1, double* rtol2, double* w, double* werr, double* wgap, MKL_INT* iblock, MKL_INT* indexw, double* gers, double* sdiam, double* z, MKL_INT* ldz, MKL_INT* isuppz, double* work, MKL_INT* iwork, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );
void	DLARRV2_( MKL_INT* n, double* vl, double* vu, double* d, double* l, double* pivmin, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, double* minrgp, double* rtol1, double* rtol2, double* w, double* werr, double* wgap, MKL_INT* iblock, MKL_INT* indexw, double* gers, double* sdiam, double* z, MKL_INT* ldz, MKL_INT* isuppz, double* work, MKL_INT* iwork, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );
void	dlarrv2_( MKL_INT* n, double* vl, double* vu, double* d, double* l, double* pivmin, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, double* minrgp, double* rtol1, double* rtol2, double* w, double* werr, double* wgap, MKL_INT* iblock, MKL_INT* indexw, double* gers, double* sdiam, double* z, MKL_INT* ldz, MKL_INT* isuppz, double* work, MKL_INT* iwork, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );

void	DSTEGR2( char* jobz, char* range, MKL_INT* n, double* d, double* e, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, double* w, double* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* zoffset, MKL_INT* info );
void	DSTEGR2_( char* jobz, char* range, MKL_INT* n, double* d, double* e, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, double* w, double* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* zoffset, MKL_INT* info );
void	dstegr2_( char* jobz, char* range, MKL_INT* n, double* d, double* e, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, double* w, double* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* zoffset, MKL_INT* info );

void	DSTEGR2A( char* jobz, char* range, MKL_INT* n, double* d, double* e, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, double* w, double* z, MKL_INT* ldz, MKL_INT* nzc, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* inderr, MKL_INT* nsplit, double* pivmin, double* scale, double* wl, double* wu, MKL_INT* info );
void	DSTEGR2A_( char* jobz, char* range, MKL_INT* n, double* d, double* e, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, double* w, double* z, MKL_INT* ldz, MKL_INT* nzc, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* inderr, MKL_INT* nsplit, double* pivmin, double* scale, double* wl, double* wu, MKL_INT* info );
void	dstegr2a_( char* jobz, char* range, MKL_INT* n, double* d, double* e, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, double* w, double* z, MKL_INT* ldz, MKL_INT* nzc, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* inderr, MKL_INT* nsplit, double* pivmin, double* scale, double* wl, double* wu, MKL_INT* info );

void	DSTEGR2B( char* jobz, MKL_INT* n, double* d, double* e, MKL_INT* m, double* w, double* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* indwlc, double* pivmin, double* scale, double* wl, double* wu, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );
void	DSTEGR2B_( char* jobz, MKL_INT* n, double* d, double* e, MKL_INT* m, double* w, double* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* indwlc, double* pivmin, double* scale, double* wl, double* wu, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );
void	dstegr2b_( char* jobz, MKL_INT* n, double* d, double* e, MKL_INT* m, double* w, double* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* indwlc, double* pivmin, double* scale, double* wl, double* wu, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );

void	PCHEEVR( char* jobz, char* range, char* uplo, MKL_INT* n, MKL_Complex8* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, float* w, MKL_Complex8* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, MKL_Complex8* work, MKL_INT* lwork, float* rwork, MKL_INT* lrwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	PCHEEVR_( char* jobz, char* range, char* uplo, MKL_INT* n, MKL_Complex8* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, float* w, MKL_Complex8* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, MKL_Complex8* work, MKL_INT* lwork, float* rwork, MKL_INT* lrwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pcheevr_( char* jobz, char* range, char* uplo, MKL_INT* n, MKL_Complex8* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, float* w, MKL_Complex8* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, MKL_Complex8* work, MKL_INT* lwork, float* rwork, MKL_INT* lrwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );

void	PCROT( MKL_INT* n, MKL_Complex8* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, MKL_Complex8* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, float* c, MKL_Complex8* s );
void	PCROT_( MKL_INT* n, MKL_Complex8* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, MKL_Complex8* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, float* c, MKL_Complex8* s );
void	pcrot_( MKL_INT* n, MKL_Complex8* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, MKL_Complex8* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, float* c, MKL_Complex8* s );

void	PDGEBAL( char* job, MKL_INT* n, double* a, MKL_INT* desca, MKL_INT* ilo, MKL_INT* ihi, double* scale, MKL_INT* info );
void	PDGEBAL_( char* job, MKL_INT* n, double* a, MKL_INT* desca, MKL_INT* ilo, MKL_INT* ihi, double* scale, MKL_INT* info );
void	pdgebal_( char* job, MKL_INT* n, double* a, MKL_INT* desca, MKL_INT* ilo, MKL_INT* ihi, double* scale, MKL_INT* info );

void	PDLAMVE( char* uplo, MKL_INT* m, MKL_INT* n, double* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, double* b, MKL_INT* ib, MKL_INT* jb, MKL_INT* descb, double* dwork );
void	PDLAMVE_( char* uplo, MKL_INT* m, MKL_INT* n, double* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, double* b, MKL_INT* ib, MKL_INT* jb, MKL_INT* descb, double* dwork );
void	pdlamve_( char* uplo, MKL_INT* m, MKL_INT* n, double* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, double* b, MKL_INT* ib, MKL_INT* jb, MKL_INT* descb, double* dwork );

void	PDLAQR0( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, double* h, MKL_INT* desch, double* wr, double* wi, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info, MKL_INT* reclevel );
void	PDLAQR0_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, double* h, MKL_INT* desch, double* wr, double* wi, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info, MKL_INT* reclevel );
void	pdlaqr0_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, double* h, MKL_INT* desch, double* wr, double* wi, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info, MKL_INT* reclevel );

void	PDLAQR1( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, double* a, MKL_INT* desca, double* wr, double* wi, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* ilwork, MKL_INT* info );
void	PDLAQR1_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, double* a, MKL_INT* desca, double* wr, double* wi, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* ilwork, MKL_INT* info );
void	pdlaqr1_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, double* a, MKL_INT* desca, double* wr, double* wi, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* ilwork, MKL_INT* info );

void	PDLAQR2( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, double* a, MKL_INT* desca, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, double* sr, double* si, double* t, MKL_INT* ldt, double* v, MKL_INT* ldv, double* wr, double* wi, double* work, MKL_INT* lwork );
void	PDLAQR2_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, double* a, MKL_INT* desca, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, double* sr, double* si, double* t, MKL_INT* ldt, double* v, MKL_INT* ldv, double* wr, double* wi, double* work, MKL_INT* lwork );
void	pdlaqr2_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, double* a, MKL_INT* desca, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, double* sr, double* si, double* t, MKL_INT* ldt, double* v, MKL_INT* ldv, double* wr, double* wi, double* work, MKL_INT* lwork );

void	PDLAQR3( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, double* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, double* sr, double* si, double* v, MKL_INT* descv, MKL_INT* nh, double* t, MKL_INT* desct, MKL_INT* nv, double* wv, MKL_INT* descw, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* reclevel );
void	PDLAQR3_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, double* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, double* sr, double* si, double* v, MKL_INT* descv, MKL_INT* nh, double* t, MKL_INT* desct, MKL_INT* nv, double* wv, MKL_INT* descw, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* reclevel );
void	pdlaqr3_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, double* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, double* sr, double* si, double* v, MKL_INT* descv, MKL_INT* nh, double* t, MKL_INT* desct, MKL_INT* nv, double* wv, MKL_INT* descw, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* reclevel );

void	PDLAQR4( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, double* a, MKL_INT* desca, double* wr, double* wi, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* t, MKL_INT* ldt, double* v, MKL_INT* ldv, double* work, MKL_INT* lwork, MKL_INT* info );
void	PDLAQR4_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, double* a, MKL_INT* desca, double* wr, double* wi, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* t, MKL_INT* ldt, double* v, MKL_INT* ldv, double* work, MKL_INT* lwork, MKL_INT* info );
void	pdlaqr4_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, double* a, MKL_INT* desca, double* wr, double* wi, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* t, MKL_INT* ldt, double* v, MKL_INT* ldv, double* work, MKL_INT* lwork, MKL_INT* info );

void	PDLAQR5( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, double* sr, double* si, double* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork );
void	PDLAQR5_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, double* sr, double* si, double* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork );
void	pdlaqr5_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, double* sr, double* si, double* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, double* z, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork );

void	PDROT( MKL_INT* n, double* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, double* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, double* cs, double* sn, double* work, MKL_INT* lwork, MKL_INT* info );
void	PDROT_( MKL_INT* n, double* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, double* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, double* cs, double* sn, double* work, MKL_INT* lwork, MKL_INT* info );
void	pdrot_( MKL_INT* n, double* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, double* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, double* cs, double* sn, double* work, MKL_INT* lwork, MKL_INT* info );

void	PDSYEVR( char* jobz, char* range, char* uplo, MKL_INT* n, double* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, double* w, double* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	PDSYEVR_( char* jobz, char* range, char* uplo, MKL_INT* n, double* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, double* w, double* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pdsyevr_( char* jobz, char* range, char* uplo, MKL_INT* n, double* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, double* w, double* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );

void	PDTRORD( char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, double* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, double* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, double* wr, double* wi, MKL_INT* m, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	PDTRORD_( char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, double* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, double* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, double* wr, double* wi, MKL_INT* m, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pdtrord_( char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, double* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, double* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, double* wr, double* wi, MKL_INT* m, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );

void	PDTRSEN( char* job, char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, double* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, double* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, double* wr, double* wi, MKL_INT* m, double* s, double* sep, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	PDTRSEN_( char* job, char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, double* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, double* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, double* wr, double* wi, MKL_INT* m, double* s, double* sep, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pdtrsen_( char* job, char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, double* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, double* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, double* wr, double* wi, MKL_INT* m, double* s, double* sep, double* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );

void	PMPCOL( MKL_INT* myproc, MKL_INT* nprocs, MKL_INT* iil, MKL_INT* needil, MKL_INT* neediu, MKL_INT* pmyils, MKL_INT* pmyius, MKL_INT* colbrt, MKL_INT* frstcl, MKL_INT* lastcl );
void	PMPCOL_( MKL_INT* myproc, MKL_INT* nprocs, MKL_INT* iil, MKL_INT* needil, MKL_INT* neediu, MKL_INT* pmyils, MKL_INT* pmyius, MKL_INT* colbrt, MKL_INT* frstcl, MKL_INT* lastcl );
void	pmpcol_( MKL_INT* myproc, MKL_INT* nprocs, MKL_INT* iil, MKL_INT* needil, MKL_INT* neediu, MKL_INT* pmyils, MKL_INT* pmyius, MKL_INT* colbrt, MKL_INT* frstcl, MKL_INT* lastcl );

void	PMPIM2( MKL_INT* il, MKL_INT* iu, MKL_INT* nprocs, MKL_INT* pmyils, MKL_INT* pmyius );
void	PMPIM2_( MKL_INT* il, MKL_INT* iu, MKL_INT* nprocs, MKL_INT* pmyils, MKL_INT* pmyius );
void	pmpim2_( MKL_INT* il, MKL_INT* iu, MKL_INT* nprocs, MKL_INT* pmyils, MKL_INT* pmyius );

void	PSGEBAL( char* job, MKL_INT* n, float* a, MKL_INT* desca, MKL_INT* ilo, MKL_INT* ihi, float* scale, MKL_INT* info );
void	PSGEBAL_( char* job, MKL_INT* n, float* a, MKL_INT* desca, MKL_INT* ilo, MKL_INT* ihi, float* scale, MKL_INT* info );
void	psgebal_( char* job, MKL_INT* n, float* a, MKL_INT* desca, MKL_INT* ilo, MKL_INT* ihi, float* scale, MKL_INT* info );

void	PSLAMVE( char* uplo, MKL_INT* m, MKL_INT* n, float* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, float* b, MKL_INT* ib, MKL_INT* jb, MKL_INT* descb, float* dwork );
void	PSLAMVE_( char* uplo, MKL_INT* m, MKL_INT* n, float* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, float* b, MKL_INT* ib, MKL_INT* jb, MKL_INT* descb, float* dwork );
void	pslamve_( char* uplo, MKL_INT* m, MKL_INT* n, float* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, float* b, MKL_INT* ib, MKL_INT* jb, MKL_INT* descb, float* dwork );

void	PSLAQR0( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, float* h, MKL_INT* desch, float* wr, float* wi, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info, MKL_INT* reclevel );
void	PSLAQR0_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, float* h, MKL_INT* desch, float* wr, float* wi, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info, MKL_INT* reclevel );
void	pslaqr0_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, float* h, MKL_INT* desch, float* wr, float* wi, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info, MKL_INT* reclevel );

void	PSLAQR1( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, float* a, MKL_INT* desca, float* wr, float* wi, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* ilwork, MKL_INT* info );
void	PSLAQR1_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, float* a, MKL_INT* desca, float* wr, float* wi, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* ilwork, MKL_INT* info );
void	pslaqr1_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, float* a, MKL_INT* desca, float* wr, float* wi, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* ilwork, MKL_INT* info );

void	PSLAQR2( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, float* a, MKL_INT* desca, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, float* sr, float* si, float* t, MKL_INT* ldt, float* v, MKL_INT* ldv, float* wr, float* wi, float* work, MKL_INT* lwork );
void	PSLAQR2_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, float* a, MKL_INT* desca, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, float* sr, float* si, float* t, MKL_INT* ldt, float* v, MKL_INT* ldv, float* wr, float* wi, float* work, MKL_INT* lwork );
void	pslaqr2_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, float* a, MKL_INT* desca, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, float* sr, float* si, float* t, MKL_INT* ldt, float* v, MKL_INT* ldv, float* wr, float* wi, float* work, MKL_INT* lwork );

void	PSLAQR3( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, float* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, float* sr, float* si, float* v, MKL_INT* descv, MKL_INT* nh, float* t, MKL_INT* desct, MKL_INT* nv, float* wv, MKL_INT* descw, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* reclevel );
void	PSLAQR3_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, float* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, float* sr, float* si, float* v, MKL_INT* descv, MKL_INT* nh, float* t, MKL_INT* desct, MKL_INT* nv, float* wv, MKL_INT* descw, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* reclevel );
void	pslaqr3_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nw, float* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, MKL_INT* ns, MKL_INT* nd, float* sr, float* si, float* v, MKL_INT* descv, MKL_INT* nh, float* t, MKL_INT* desct, MKL_INT* nv, float* wv, MKL_INT* descw, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* reclevel );

void	PSLAQR4( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, float* a, MKL_INT* desca, float* wr, float* wi, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* t, MKL_INT* ldt, float* v, MKL_INT* ldv, float* work, MKL_INT* lwork, MKL_INT* info );
void	PSLAQR4_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, float* a, MKL_INT* desca, float* wr, float* wi, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* t, MKL_INT* ldt, float* v, MKL_INT* ldv, float* work, MKL_INT* lwork, MKL_INT* info );
void	pslaqr4_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* n, MKL_INT* ilo, MKL_INT* ihi, float* a, MKL_INT* desca, float* wr, float* wi, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* t, MKL_INT* ldt, float* v, MKL_INT* ldv, float* work, MKL_INT* lwork, MKL_INT* info );

void	PSLAQR5( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, float* sr, float* si, float* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork );
void	PSLAQR5_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, float* sr, float* si, float* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork );
void	pslaqr5_( MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, float* sr, float* si, float* h, MKL_INT* desch, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork );

void	PSROT( MKL_INT* n, float* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, float* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, float* cs, float* sn, float* work, MKL_INT* lwork, MKL_INT* info );
void	PSROT_( MKL_INT* n, float* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, float* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, float* cs, float* sn, float* work, MKL_INT* lwork, MKL_INT* info );
void	psrot_( MKL_INT* n, float* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, float* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, float* cs, float* sn, float* work, MKL_INT* lwork, MKL_INT* info );

void	PSSYEVR( char* jobz, char* range, char* uplo, MKL_INT* n, float* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, float* w, float* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	PSSYEVR_( char* jobz, char* range, char* uplo, MKL_INT* n, float* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, float* w, float* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pssyevr_( char* jobz, char* range, char* uplo, MKL_INT* n, float* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, float* w, float* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );

void	PSTRORD( char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, float* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, float* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, float* wr, float* wi, MKL_INT* m, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	PSTRORD_( char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, float* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, float* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, float* wr, float* wi, MKL_INT* m, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pstrord_( char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, float* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, float* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, float* wr, float* wi, MKL_INT* m, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );

void	PSTRSEN( char* job, char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, float* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, float* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, float* wr, float* wi, MKL_INT* m, float* s, float* sep, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	PSTRSEN_( char* job, char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, float* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, float* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, float* wr, float* wi, MKL_INT* m, float* s, float* sep, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pstrsen_( char* job, char* compq, MKL_INT* select, MKL_INT* para, MKL_INT* n, float* t, MKL_INT* it, MKL_INT* jt, MKL_INT* desct, float* q, MKL_INT* iq, MKL_INT* jq, MKL_INT* descq, float* wr, float* wi, MKL_INT* m, float* s, float* sep, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );

void	PZHEEVR( char* jobz, char* range, char* uplo, MKL_INT* n, MKL_Complex16* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, double* w, MKL_Complex16* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, MKL_Complex16* work, MKL_INT* lwork, double* rwork, MKL_INT* lrwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	PZHEEVR_( char* jobz, char* range, char* uplo, MKL_INT* n, MKL_Complex16* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, double* w, MKL_Complex16* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, MKL_Complex16* work, MKL_INT* lwork, double* rwork, MKL_INT* lrwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );
void	pzheevr_( char* jobz, char* range, char* uplo, MKL_INT* n, MKL_Complex16* a, MKL_INT* ia, MKL_INT* ja, MKL_INT* desca, double* vl, double* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, MKL_INT* nz, double* w, MKL_Complex16* z, MKL_INT* iz, MKL_INT* jz, MKL_INT* descz, MKL_Complex16* work, MKL_INT* lwork, double* rwork, MKL_INT* lrwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* info );

void	PZROT( MKL_INT* n, MKL_Complex8* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, MKL_Complex8* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, double* c, MKL_Complex16* s );
void	PZROT_( MKL_INT* n, MKL_Complex8* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, MKL_Complex8* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, double* c, MKL_Complex16* s );
void	pzrot_( MKL_INT* n, MKL_Complex8* x, MKL_INT* ix, MKL_INT* jx, MKL_INT* descx, MKL_INT* incx, MKL_Complex8* y, MKL_INT* iy, MKL_INT* jy, MKL_INT* descy, MKL_INT* incy, double* c, MKL_Complex16* s );

void	SLAQR6( char* job, MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, float* sr, float* si, float* h, MKL_INT* ldh, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* ldz, float* v, MKL_INT* ldv, float* u, MKL_INT* ldu, MKL_INT* nv, float* wv, MKL_INT* ldwv, MKL_INT* nh, float* wh, MKL_INT* ldwh );
void	SLAQR6_( char* job, MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, float* sr, float* si, float* h, MKL_INT* ldh, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* ldz, float* v, MKL_INT* ldv, float* u, MKL_INT* ldu, MKL_INT* nv, float* wv, MKL_INT* ldwv, MKL_INT* nh, float* wh, MKL_INT* ldwh );
void	slaqr6_( char* job, MKL_INT* wantt, MKL_INT* wantz, MKL_INT* kacc22, MKL_INT* n, MKL_INT* ktop, MKL_INT* kbot, MKL_INT* nshfts, float* sr, float* si, float* h, MKL_INT* ldh, MKL_INT* iloz, MKL_INT* ihiz, float* z, MKL_INT* ldz, float* v, MKL_INT* ldv, float* u, MKL_INT* ldu, MKL_INT* nv, float* wv, MKL_INT* ldwv, MKL_INT* nh, float* wh, MKL_INT* ldwh );

void	SLAR1VA( MKL_INT* n, MKL_INT* b1, MKL_INT* bn, float* lambda, float* d, float* l, float* ld, float* lld, float* pivmin, float* gaptol, float* z, MKL_INT* wantnc, MKL_INT* negcnt, float* ztz, float* mingma, MKL_INT* r, MKL_INT* isuppz, float* nrminv, float* resid, float* rqcorr, float* work );
void	SLAR1VA_( MKL_INT* n, MKL_INT* b1, MKL_INT* bn, float* lambda, float* d, float* l, float* ld, float* lld, float* pivmin, float* gaptol, float* z, MKL_INT* wantnc, MKL_INT* negcnt, float* ztz, float* mingma, MKL_INT* r, MKL_INT* isuppz, float* nrminv, float* resid, float* rqcorr, float* work );
void	slar1va_( MKL_INT* n, MKL_INT* b1, MKL_INT* bn, float* lambda, float* d, float* l, float* ld, float* lld, float* pivmin, float* gaptol, float* z, MKL_INT* wantnc, MKL_INT* negcnt, float* ztz, float* mingma, MKL_INT* r, MKL_INT* isuppz, float* nrminv, float* resid, float* rqcorr, float* work );

void	SLARRB2( MKL_INT* n, float* d, float* lld, MKL_INT* ifirst, MKL_INT* ilast, float* rtol1, float* rtol2, MKL_INT* offset, float* w, float* wgap, float* werr, float* work, MKL_INT* iwork, float* pivmin, float* lgpvmn, float* lgspdm, MKL_INT* twist, MKL_INT* info );
void	SLARRB2_( MKL_INT* n, float* d, float* lld, MKL_INT* ifirst, MKL_INT* ilast, float* rtol1, float* rtol2, MKL_INT* offset, float* w, float* wgap, float* werr, float* work, MKL_INT* iwork, float* pivmin, float* lgpvmn, float* lgspdm, MKL_INT* twist, MKL_INT* info );
void	slarrb2_( MKL_INT* n, float* d, float* lld, MKL_INT* ifirst, MKL_INT* ilast, float* rtol1, float* rtol2, MKL_INT* offset, float* w, float* wgap, float* werr, float* work, MKL_INT* iwork, float* pivmin, float* lgpvmn, float* lgspdm, MKL_INT* twist, MKL_INT* info );

void	SLARRD2( char* range, char* order, MKL_INT* n, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, float* gers, float* reltol, float* d, float* e, float* e2, float* pivmin, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, float* w, float* werr, float* wl, float* wu, MKL_INT* iblock, MKL_INT* indexw, float* work, MKL_INT* iwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* info );
void	SLARRD2_( char* range, char* order, MKL_INT* n, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, float* gers, float* reltol, float* d, float* e, float* e2, float* pivmin, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, float* w, float* werr, float* wl, float* wu, MKL_INT* iblock, MKL_INT* indexw, float* work, MKL_INT* iwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* info );
void	slarrd2_( char* range, char* order, MKL_INT* n, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, float* gers, float* reltol, float* d, float* e, float* e2, float* pivmin, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, float* w, float* werr, float* wl, float* wu, MKL_INT* iblock, MKL_INT* indexw, float* work, MKL_INT* iwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* info );

void	SLARRE2( char* range, MKL_INT* n, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, float* d, float* e, float* e2, float* rtol1, float* rtol2, float* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, float* w, float* werr, float* wgap, MKL_INT* iblock, MKL_INT* indexw, float* gers, float* pivmin, float* work, MKL_INT* iwork, MKL_INT* info );
void	SLARRE2_( char* range, MKL_INT* n, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, float* d, float* e, float* e2, float* rtol1, float* rtol2, float* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, float* w, float* werr, float* wgap, MKL_INT* iblock, MKL_INT* indexw, float* gers, float* pivmin, float* work, MKL_INT* iwork, MKL_INT* info );
void	slarre2_( char* range, MKL_INT* n, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, float* d, float* e, float* e2, float* rtol1, float* rtol2, float* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, float* w, float* werr, float* wgap, MKL_INT* iblock, MKL_INT* indexw, float* gers, float* pivmin, float* work, MKL_INT* iwork, MKL_INT* info );

void	SLARRE2A( char* range, MKL_INT* n, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, float* d, float* e, float* e2, float* rtol1, float* rtol2, float* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, float* w, float* werr, float* wgap, MKL_INT* iblock, MKL_INT* indexw, float* gers, float* sdiam, float* pivmin, float* work, MKL_INT* iwork, float* minrgp, MKL_INT* info );
void	SLARRE2A_( char* range, MKL_INT* n, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, float* d, float* e, float* e2, float* rtol1, float* rtol2, float* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, float* w, float* werr, float* wgap, MKL_INT* iblock, MKL_INT* indexw, float* gers, float* sdiam, float* pivmin, float* work, MKL_INT* iwork, float* minrgp, MKL_INT* info );
void	slarre2a_( char* range, MKL_INT* n, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, float* d, float* e, float* e2, float* rtol1, float* rtol2, float* spltol, MKL_INT* nsplit, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, float* w, float* werr, float* wgap, MKL_INT* iblock, MKL_INT* indexw, float* gers, float* sdiam, float* pivmin, float* work, MKL_INT* iwork, float* minrgp, MKL_INT* info );

void	SLARRF2( MKL_INT* n, float* d, float* l, float* ld, MKL_INT* clstrt, MKL_INT* clend, MKL_INT* clmid1, MKL_INT* clmid2, float* w, float* wgap, float* werr, MKL_INT* trymid, float* spdiam, float* clgapl, float* clgapr, float* pivmin, float* sigma, float* dplus, float* lplus, float* work, MKL_INT* info );
void	SLARRF2_( MKL_INT* n, float* d, float* l, float* ld, MKL_INT* clstrt, MKL_INT* clend, MKL_INT* clmid1, MKL_INT* clmid2, float* w, float* wgap, float* werr, MKL_INT* trymid, float* spdiam, float* clgapl, float* clgapr, float* pivmin, float* sigma, float* dplus, float* lplus, float* work, MKL_INT* info );
void	slarrf2_( MKL_INT* n, float* d, float* l, float* ld, MKL_INT* clstrt, MKL_INT* clend, MKL_INT* clmid1, MKL_INT* clmid2, float* w, float* wgap, float* werr, MKL_INT* trymid, float* spdiam, float* clgapl, float* clgapr, float* pivmin, float* sigma, float* dplus, float* lplus, float* work, MKL_INT* info );

void	SLARRV2( MKL_INT* n, float* vl, float* vu, float* d, float* l, float* pivmin, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, float* minrgp, float* rtol1, float* rtol2, float* w, float* werr, float* wgap, MKL_INT* iblock, MKL_INT* indexw, float* gers, float* sdiam, float* z, MKL_INT* ldz, MKL_INT* isuppz, float* work, MKL_INT* iwork, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );
void	SLARRV2_( MKL_INT* n, float* vl, float* vu, float* d, float* l, float* pivmin, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, float* minrgp, float* rtol1, float* rtol2, float* w, float* werr, float* wgap, MKL_INT* iblock, MKL_INT* indexw, float* gers, float* sdiam, float* z, MKL_INT* ldz, MKL_INT* isuppz, float* work, MKL_INT* iwork, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );
void	slarrv2_( MKL_INT* n, float* vl, float* vu, float* d, float* l, float* pivmin, MKL_INT* isplit, MKL_INT* m, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, float* minrgp, float* rtol1, float* rtol2, float* w, float* werr, float* wgap, MKL_INT* iblock, MKL_INT* indexw, float* gers, float* sdiam, float* z, MKL_INT* ldz, MKL_INT* isuppz, float* work, MKL_INT* iwork, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );

void	SSTEGR2( char* jobz, char* range, MKL_INT* n, float* d, float* e, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, float* w, float* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* zoffset, MKL_INT* info );
void	SSTEGR2_( char* jobz, char* range, MKL_INT* n, float* d, float* e, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, float* w, float* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* zoffset, MKL_INT* info );
void	sstegr2_( char* jobz, char* range, MKL_INT* n, float* d, float* e, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, float* w, float* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* zoffset, MKL_INT* info );

void	SSTEGR2A( char* jobz, char* range, MKL_INT* n, float* d, float* e, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, float* w, float* z, MKL_INT* ldz, MKL_INT* nzc, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* inderr, MKL_INT* nsplit, float* pivmin, float* scale, float* wl, float* wu, MKL_INT* info );
void	SSTEGR2A_( char* jobz, char* range, MKL_INT* n, float* d, float* e, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, float* w, float* z, MKL_INT* ldz, MKL_INT* nzc, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* inderr, MKL_INT* nsplit, float* pivmin, float* scale, float* wl, float* wu, MKL_INT* info );
void	sstegr2a_( char* jobz, char* range, MKL_INT* n, float* d, float* e, float* vl, float* vu, MKL_INT* il, MKL_INT* iu, MKL_INT* m, float* w, float* z, MKL_INT* ldz, MKL_INT* nzc, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* inderr, MKL_INT* nsplit, float* pivmin, float* scale, float* wl, float* wu, MKL_INT* info );

void	SSTEGR2B( char* jobz, MKL_INT* n, float* d, float* e, MKL_INT* m, float* w, float* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* indwlc, float* pivmin, float* scale, float* wl, float* wu, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );
void	SSTEGR2B_( char* jobz, MKL_INT* n, float* d, float* e, MKL_INT* m, float* w, float* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* indwlc, float* pivmin, float* scale, float* wl, float* wu, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );
void	sstegr2b_( char* jobz, MKL_INT* n, float* d, float* e, MKL_INT* m, float* w, float* z, MKL_INT* ldz, MKL_INT* nzc, MKL_INT* isuppz, float* work, MKL_INT* lwork, MKL_INT* iwork, MKL_INT* liwork, MKL_INT* dol, MKL_INT* dou, MKL_INT* needil, MKL_INT* neediu, MKL_INT* indwlc, float* pivmin, float* scale, float* wl, float* wu, MKL_INT* vstart, MKL_INT* finish, MKL_INT* maxcls, MKL_INT* ndepth, MKL_INT* parity, MKL_INT* zoffset, MKL_INT* info );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _MKL_SCALAPACK_H_ */
