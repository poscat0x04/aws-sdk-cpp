﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DeleteBackupVaultAccessPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBackupVaultAccessPolicyRequest::DeleteBackupVaultAccessPolicyRequest() : 
    m_backupVaultNameHasBeenSet(false)
{
}

Aws::String DeleteBackupVaultAccessPolicyRequest::SerializePayload() const
{
  return {};
}




