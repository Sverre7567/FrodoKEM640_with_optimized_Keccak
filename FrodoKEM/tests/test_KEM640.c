/********************************************************************************************
* FrodoKEM: Learning with Errors Key Encapsulation
*
* Abstract: setting parameters to test FrodoKEM-640
*********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "ds_benchmark.h"
#include "../src/api_frodo640.h"


#define PARAMS_N 640
#define PARAMS_NBAR 8
#define PARAMS_LOGQ 15
#define PARAMS_Q (1 << PARAMS_LOGQ)
#define PARAMS_EXTRACTED_BITS 2
#define PARAMS_STRIPE_STEP 8
#define PARAMS_PARALLEL 4
#define BYTES_SEED_A 16
#define BYTES_MU (PARAMS_EXTRACTED_BITS*PARAMS_NBAR*PARAMS_NBAR)/8
#define BYTES_SALT (2*CRYPTO_BYTES)
#define BYTES_SEED_SE (2*CRYPTO_BYTES)
#define BYTES_PKHASH CRYPTO_BYTES

#define SYSTEM_NAME    "FrodoKEM-640"

#define crypto_kem_keypair            crypto_kem_keypair_Frodo640
#define crypto_kem_enc                crypto_kem_enc_Frodo640
#define crypto_kem_dec                crypto_kem_dec_Frodo640
#define shake                         shake128

#include "test_kem.c"
