﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateDashboardPermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDashboardPermissionsRequest::UpdateDashboardPermissionsRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dashboardIdHasBeenSet(false),
    m_grantPermissionsHasBeenSet(false),
    m_revokePermissionsHasBeenSet(false)
{
}

Aws::String UpdateDashboardPermissionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_grantPermissionsHasBeenSet)
  {
   Array<JsonValue> grantPermissionsJsonList(m_grantPermissions.size());
   for(unsigned grantPermissionsIndex = 0; grantPermissionsIndex < grantPermissionsJsonList.GetLength(); ++grantPermissionsIndex)
   {
     grantPermissionsJsonList[grantPermissionsIndex].AsObject(m_grantPermissions[grantPermissionsIndex].Jsonize());
   }
   payload.WithArray("GrantPermissions", std::move(grantPermissionsJsonList));

  }

  if(m_revokePermissionsHasBeenSet)
  {
   Array<JsonValue> revokePermissionsJsonList(m_revokePermissions.size());
   for(unsigned revokePermissionsIndex = 0; revokePermissionsIndex < revokePermissionsJsonList.GetLength(); ++revokePermissionsIndex)
   {
     revokePermissionsJsonList[revokePermissionsIndex].AsObject(m_revokePermissions[revokePermissionsIndex].Jsonize());
   }
   payload.WithArray("RevokePermissions", std::move(revokePermissionsJsonList));

  }

  return payload.View().WriteReadable();
}




