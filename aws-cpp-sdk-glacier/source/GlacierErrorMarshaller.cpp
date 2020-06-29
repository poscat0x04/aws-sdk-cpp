﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/glacier/GlacierErrorMarshaller.h>
#include <aws/glacier/GlacierErrors.h>

using namespace Aws::Client;
using namespace Aws::Glacier;

AWSError<CoreErrors> GlacierErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GlacierErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
