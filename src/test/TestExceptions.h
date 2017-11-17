#pragma once

// Copyright 2016 Stellar Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include "xdr/Stellar-transaction.h"

namespace stellar
{

namespace txtest
{

void throwIf(TransactionResult const& result);

class ex_txException
{
};

#define TEST_EXCEPTION(M) \
    class M : public ex_txException \
    { \
    };

TEST_EXCEPTION(ex_txNO_ACCOUNT)
TEST_EXCEPTION(ex_txINTERNAL_ERROR)
TEST_EXCEPTION(ex_txINSUFFICIENT_BALANCE)
TEST_EXCEPTION(ex_txBAD_AUTH)
TEST_EXCEPTION(ex_UNKNOWN)

TEST_EXCEPTION(ex_ACCOUNT_MERGE_MALFORMED)
TEST_EXCEPTION(ex_ACCOUNT_MERGE_NO_ACCOUNT)
TEST_EXCEPTION(ex_ACCOUNT_MERGE_IMMUTABLE_SET)
TEST_EXCEPTION(ex_ACCOUNT_MERGE_HAS_SUB_ENTRIES)

TEST_EXCEPTION(ex_ALLOW_TRUST_MALFORMED)
TEST_EXCEPTION(ex_ALLOW_TRUST_NO_TRUST_LINE)
TEST_EXCEPTION(ex_ALLOW_TRUST_TRUST_NOT_REQUIRED)
TEST_EXCEPTION(ex_ALLOW_TRUST_CANT_REVOKE)
TEST_EXCEPTION(ex_ALLOW_TRUST_SELF_NOT_ALLOWED)

TEST_EXCEPTION(ex_CREATE_ACCOUNT_MALFORMED)
TEST_EXCEPTION(ex_CREATE_ACCOUNT_UNDERFUNDED)
TEST_EXCEPTION(ex_CREATE_ACCOUNT_LOW_RESERVE)
TEST_EXCEPTION(ex_CREATE_ACCOUNT_ALREADY_EXIST)

TEST_EXCEPTION(ex_CHANGE_TRUST_MALFORMED)
TEST_EXCEPTION(ex_CHANGE_TRUST_NO_ISSUER)
TEST_EXCEPTION(ex_CHANGE_TRUST_INVALID_LIMIT)
TEST_EXCEPTION(ex_CHANGE_TRUST_LOW_RESERVE)
TEST_EXCEPTION(ex_CHANGE_TRUST_SELF_NOT_ALLOWED)

TEST_EXCEPTION(ex_MANAGE_DATA_NOT_SUPPORTED_YET)
TEST_EXCEPTION(ex_MANAGE_DATA_NAME_NOT_FOUND)
TEST_EXCEPTION(ex_MANAGE_DATA_LOW_RESERVE)
TEST_EXCEPTION(ex_MANAGE_DATA_INVALID_NAME)

TEST_EXCEPTION(ex_MANAGE_OFFER_MALFORMED)
TEST_EXCEPTION(ex_MANAGE_OFFER_SELL_NO_TRUST)
TEST_EXCEPTION(ex_MANAGE_OFFER_BUY_NO_TRUST)
TEST_EXCEPTION(ex_MANAGE_OFFER_SELL_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_MANAGE_OFFER_BUY_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_MANAGE_OFFER_LINE_FULL)
TEST_EXCEPTION(ex_MANAGE_OFFER_UNDERFUNDED)
TEST_EXCEPTION(ex_MANAGE_OFFER_CROSS_SELF)
TEST_EXCEPTION(ex_MANAGE_OFFER_SELL_NO_ISSUER)
TEST_EXCEPTION(ex_MANAGE_OFFER_BUY_NO_ISSUER)
TEST_EXCEPTION(ex_MANAGE_OFFER_NOT_FOUND)
TEST_EXCEPTION(ex_MANAGE_OFFER_LOW_RESERVE)

TEST_EXCEPTION(ex_PATH_PAYMENT_SUCCESS)
TEST_EXCEPTION(ex_PATH_PAYMENT_MALFORMED)
TEST_EXCEPTION(ex_PATH_PAYMENT_UNDERFUNDED)
TEST_EXCEPTION(ex_PATH_PAYMENT_SRC_NO_TRUST)
TEST_EXCEPTION(ex_PATH_PAYMENT_SRC_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_PATH_PAYMENT_NO_DESTINATION)
TEST_EXCEPTION(ex_PATH_PAYMENT_NO_TRUST)
TEST_EXCEPTION(ex_PATH_PAYMENT_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_PATH_PAYMENT_LINE_FULL)
TEST_EXCEPTION(ex_PATH_PAYMENT_NO_ISSUER)
TEST_EXCEPTION(ex_PATH_PAYMENT_TOO_FEW_OFFERS)
TEST_EXCEPTION(ex_PATH_PAYMENT_OFFER_CROSS_SELF)
TEST_EXCEPTION(ex_PATH_PAYMENT_OVER_SENDMAX)

TEST_EXCEPTION(ex_PAYMENT_MALFORMED)
TEST_EXCEPTION(ex_PAYMENT_UNDERFUNDED)
TEST_EXCEPTION(ex_PAYMENT_SRC_NO_TRUST)
TEST_EXCEPTION(ex_PAYMENT_SRC_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_PAYMENT_NO_DESTINATION)
TEST_EXCEPTION(ex_PAYMENT_NO_TRUST)
TEST_EXCEPTION(ex_PAYMENT_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_PAYMENT_LINE_FULL)
TEST_EXCEPTION(ex_PAYMENT_NO_ISSUER)

TEST_EXCEPTION(ex_SET_OPTIONS_LOW_RESERVE)
TEST_EXCEPTION(ex_SET_OPTIONS_TOO_MANY_SIGNERS)
TEST_EXCEPTION(ex_SET_OPTIONS_BAD_FLAGS)
TEST_EXCEPTION(ex_SET_OPTIONS_INVALID_INFLATION)
TEST_EXCEPTION(ex_SET_OPTIONS_CANT_CHANGE)
TEST_EXCEPTION(ex_SET_OPTIONS_UNKNOWN_FLAG)
TEST_EXCEPTION(ex_SET_OPTIONS_THRESHOLD_OUT_OF_RANGE)
TEST_EXCEPTION(ex_SET_OPTIONS_BAD_SIGNER)
TEST_EXCEPTION(ex_SET_OPTIONS_INVALID_HOME_DOMAIN)

TEST_EXCEPTION(ex_INFLATION_NOT_TIME)
}
}
