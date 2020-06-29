﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/PutEventSelectorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEventSelectorsRequest::PutEventSelectorsRequest() : 
    m_trailNameHasBeenSet(false),
    m_eventSelectorsHasBeenSet(false)
{
}

Aws::String PutEventSelectorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trailNameHasBeenSet)
  {
   payload.WithString("TrailName", m_trailName);

  }

  if(m_eventSelectorsHasBeenSet)
  {
   Array<JsonValue> eventSelectorsJsonList(m_eventSelectors.size());
   for(unsigned eventSelectorsIndex = 0; eventSelectorsIndex < eventSelectorsJsonList.GetLength(); ++eventSelectorsIndex)
   {
     eventSelectorsJsonList[eventSelectorsIndex].AsObject(m_eventSelectors[eventSelectorsIndex].Jsonize());
   }
   payload.WithArray("EventSelectors", std::move(eventSelectorsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutEventSelectorsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.PutEventSelectors"));
  return headers;

}




