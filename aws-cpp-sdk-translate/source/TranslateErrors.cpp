﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/translate/TranslateErrors.h>

using namespace Aws::Client;
using namespace Aws::Translate;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace TranslateErrorMapper
{

static const int UNSUPPORTED_LANGUAGE_PAIR_HASH = HashingUtils::HashString("UnsupportedLanguagePairException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int DETECTED_LANGUAGE_LOW_CONFIDENCE_HASH = HashingUtils::HashString("DetectedLanguageLowConfidenceException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int INVALID_FILTER_HASH = HashingUtils::HashString("InvalidFilterException");
static const int TEXT_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TextSizeLimitExceededException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == UNSUPPORTED_LANGUAGE_PAIR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranslateErrors::UNSUPPORTED_LANGUAGE_PAIR), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranslateErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == DETECTED_LANGUAGE_LOW_CONFIDENCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranslateErrors::DETECTED_LANGUAGE_LOW_CONFIDENCE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranslateErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranslateErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == INVALID_FILTER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranslateErrors::INVALID_FILTER), false);
  }
  else if (hashCode == TEXT_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranslateErrors::TEXT_SIZE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranslateErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TranslateErrorMapper
} // namespace Translate
} // namespace Aws
