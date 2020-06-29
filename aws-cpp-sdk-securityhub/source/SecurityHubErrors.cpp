﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/SecurityHubErrors.h>

using namespace Aws::Client;
using namespace Aws::SecurityHub;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace SecurityHubErrorMapper
{

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int INVALID_ACCESS_HASH = HashingUtils::HashString("InvalidAccessException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflictException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::INTERNAL), false);
  }
  else if (hashCode == INVALID_ACCESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::INVALID_ACCESS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::INVALID_INPUT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SecurityHubErrorMapper
} // namespace SecurityHub
} // namespace Aws
