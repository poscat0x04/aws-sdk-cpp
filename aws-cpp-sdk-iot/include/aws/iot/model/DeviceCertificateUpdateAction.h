﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class DeviceCertificateUpdateAction
  {
    NOT_SET,
    DEACTIVATE
  };

namespace DeviceCertificateUpdateActionMapper
{
AWS_IOT_API DeviceCertificateUpdateAction GetDeviceCertificateUpdateActionForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForDeviceCertificateUpdateAction(DeviceCertificateUpdateAction value);
} // namespace DeviceCertificateUpdateActionMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
