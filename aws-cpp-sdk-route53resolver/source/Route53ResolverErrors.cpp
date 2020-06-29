﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53resolver/Route53ResolverErrors.h>

using namespace Aws::Client;
using namespace Aws::Route53Resolver;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Resolver
{
namespace Route53ResolverErrorMapper
{

static const int RESOURCE_EXISTS_HASH = HashingUtils::HashString("ResourceExistsException");
static const int INVALID_POLICY_DOCUMENT_HASH = HashingUtils::HashString("InvalidPolicyDocument");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_TAG_HASH = HashingUtils::HashString("InvalidTagException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("InternalServiceErrorException");
static const int RESOURCE_UNAVAILABLE_HASH = HashingUtils::HashString("ResourceUnavailableException");
static const int UNKNOWN_RESOURCE_HASH = HashingUtils::HashString("UnknownResourceException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::RESOURCE_EXISTS), false);
  }
  else if (hashCode == INVALID_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_POLICY_DOCUMENT), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_TAG), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INTERNAL_SERVICE_ERROR), false);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::RESOURCE_UNAVAILABLE), false);
  }
  else if (hashCode == UNKNOWN_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::UNKNOWN_RESOURCE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Route53ResolverErrorMapper
} // namespace Route53Resolver
} // namespace Aws
