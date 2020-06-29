﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ds/DirectoryServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::DirectoryService;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace DirectoryServiceErrorMapper
{

static const int CLIENT_HASH = HashingUtils::HashString("ClientException");
static const int ENTITY_ALREADY_EXISTS_HASH = HashingUtils::HashString("EntityAlreadyExistsException");
static const int DIRECTORY_ALREADY_SHARED_HASH = HashingUtils::HashString("DirectoryAlreadySharedException");
static const int INVALID_L_D_A_P_S_STATUS_HASH = HashingUtils::HashString("InvalidLDAPSStatusException");
static const int DIRECTORY_UNAVAILABLE_HASH = HashingUtils::HashString("DirectoryUnavailableException");
static const int USER_DOES_NOT_EXIST_HASH = HashingUtils::HashString("UserDoesNotExistException");
static const int ENTITY_DOES_NOT_EXIST_HASH = HashingUtils::HashString("EntityDoesNotExistException");
static const int AUTHENTICATION_FAILED_HASH = HashingUtils::HashString("AuthenticationFailedException");
static const int INSUFFICIENT_PERMISSIONS_HASH = HashingUtils::HashString("InsufficientPermissionsException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int TAG_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TagLimitExceededException");
static const int INVALID_CERTIFICATE_HASH = HashingUtils::HashString("InvalidCertificateException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int CERTIFICATE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("CertificateDoesNotExistException");
static const int CERTIFICATE_ALREADY_EXISTS_HASH = HashingUtils::HashString("CertificateAlreadyExistsException");
static const int INVALID_PASSWORD_HASH = HashingUtils::HashString("InvalidPasswordException");
static const int DIRECTORY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DirectoryLimitExceededException");
static const int DIRECTORY_NOT_SHARED_HASH = HashingUtils::HashString("DirectoryNotSharedException");
static const int CERTIFICATE_IN_USE_HASH = HashingUtils::HashString("CertificateInUseException");
static const int SHARE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ShareLimitExceededException");
static const int DIRECTORY_DOES_NOT_EXIST_HASH = HashingUtils::HashString("DirectoryDoesNotExistException");
static const int NO_AVAILABLE_CERTIFICATE_HASH = HashingUtils::HashString("NoAvailableCertificateException");
static const int ORGANIZATIONS_HASH = HashingUtils::HashString("OrganizationsException");
static const int INVALID_TARGET_HASH = HashingUtils::HashString("InvalidTargetException");
static const int DOMAIN_CONTROLLER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DomainControllerLimitExceededException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int IP_ROUTE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("IpRouteLimitExceededException");
static const int SNAPSHOT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SnapshotLimitExceededException");
static const int CERTIFICATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CertificateLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CLIENT), false);
  }
  else if (hashCode == ENTITY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::ENTITY_ALREADY_EXISTS), false);
  }
  else if (hashCode == DIRECTORY_ALREADY_SHARED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_ALREADY_SHARED), false);
  }
  else if (hashCode == INVALID_L_D_A_P_S_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_L_D_A_P_S_STATUS), false);
  }
  else if (hashCode == DIRECTORY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_UNAVAILABLE), false);
  }
  else if (hashCode == USER_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::USER_DOES_NOT_EXIST), false);
  }
  else if (hashCode == ENTITY_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::ENTITY_DOES_NOT_EXIST), false);
  }
  else if (hashCode == AUTHENTICATION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::AUTHENTICATION_FAILED), false);
  }
  else if (hashCode == INSUFFICIENT_PERMISSIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INSUFFICIENT_PERMISSIONS), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::TAG_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_CERTIFICATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_CERTIFICATE), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == CERTIFICATE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CERTIFICATE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == CERTIFICATE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CERTIFICATE_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_PASSWORD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_PASSWORD), false);
  }
  else if (hashCode == DIRECTORY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DIRECTORY_NOT_SHARED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_NOT_SHARED), false);
  }
  else if (hashCode == CERTIFICATE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CERTIFICATE_IN_USE), false);
  }
  else if (hashCode == SHARE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::SHARE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DIRECTORY_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_DOES_NOT_EXIST), false);
  }
  else if (hashCode == NO_AVAILABLE_CERTIFICATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::NO_AVAILABLE_CERTIFICATE), false);
  }
  else if (hashCode == ORGANIZATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::ORGANIZATIONS), false);
  }
  else if (hashCode == INVALID_TARGET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_TARGET), false);
  }
  else if (hashCode == DOMAIN_CONTROLLER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DOMAIN_CONTROLLER_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::SERVICE), false);
  }
  else if (hashCode == IP_ROUTE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::IP_ROUTE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == SNAPSHOT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::SNAPSHOT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CERTIFICATE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CERTIFICATE_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DirectoryServiceErrorMapper
} // namespace DirectoryService
} // namespace Aws
