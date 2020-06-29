﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class ServiceType
  {
    NOT_SET,
    Interface,
    Gateway
  };

namespace ServiceTypeMapper
{
AWS_EC2_API ServiceType GetServiceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForServiceType(ServiceType value);
} // namespace ServiceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
