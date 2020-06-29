﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class PrincipalType
  {
    NOT_SET,
    USER,
    GROUP,
    INVITE,
    ANONYMOUS,
    ORGANIZATION
  };

namespace PrincipalTypeMapper
{
AWS_WORKDOCS_API PrincipalType GetPrincipalTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForPrincipalType(PrincipalType value);
} // namespace PrincipalTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
