﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/schemas/SchemasErrors.h>

using namespace Aws::Client;
using namespace Aws::Schemas;
using namespace Aws::Utils;

namespace Aws
{
namespace Schemas
{
namespace SchemasErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int PRECONDITION_FAILED_HASH = HashingUtils::HashString("PreconditionFailedException");
static const int GONE_HASH = HashingUtils::HashString("GoneException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SchemasErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SchemasErrors::NOT_FOUND), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SchemasErrors::UNAUTHORIZED), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SchemasErrors::FORBIDDEN), false);
  }
  else if (hashCode == PRECONDITION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SchemasErrors::PRECONDITION_FAILED), false);
  }
  else if (hashCode == GONE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SchemasErrors::GONE), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SchemasErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SchemasErrors::BAD_REQUEST), false);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SchemasErrors::INTERNAL_SERVER_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SchemasErrorMapper
} // namespace Schemas
} // namespace Aws
