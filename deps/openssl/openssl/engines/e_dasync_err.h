/*
 * Copyright 1995-2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

/*
 * NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#ifndef HEADER_DASYNC_ERR_H
# define HEADER_DASYNC_ERR_H

#ifdef  __cplusplus
extern "C" {
#endif

/* BEGIN ERROR CODES */
static void ERR_load_DASYNC_strings(void);
static void ERR_unload_DASYNC_strings(void);
static void ERR_DASYNC_error(int function, int reason, char *file, int line);
# define DASYNCerr(f,r) ERR_DASYNC_error((f),(r),OPENSSL_FILE,OPENSSL_LINE)

/* Error codes for the DASYNC functions. */

/* Function codes. */
# define DASYNC_F_BIND_DASYNC                             107
# define DASYNC_F_CIPHER_AES_128_CBC_CODE                 100
# define DASYNC_F_DASYNC_AES128_CBC_HMAC_SHA1_INIT_KEY    109
# define DASYNC_F_DASYNC_AES128_INIT_KEY                  108
# define DASYNC_F_DASYNC_BN_MOD_EXP                       101
# define DASYNC_F_DASYNC_CIPHER_INIT_KEY_HELPER           110
# define DASYNC_F_DASYNC_MOD_EXP                          102
# define DASYNC_F_DASYNC_PRIVATE_DECRYPT                  103
# define DASYNC_F_DASYNC_PRIVATE_ENCRYPT                  104
# define DASYNC_F_DASYNC_PUBLIC_DECRYPT                   105
# define DASYNC_F_DASYNC_PUBLIC_ENCRYPT                   106

/* Reason codes. */
# define DASYNC_R_INIT_FAILED                             102
# define DASYNC_R_LENGTH_NOT_BLOCK_ALIGNED                100
# define DASYNC_R_UNKNOWN_FAULT                           101

#ifdef  __cplusplus
}
#endif
#endif
