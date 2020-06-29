﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-runtime/model/GetPersonalizedRankingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PersonalizeRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPersonalizedRankingRequest::GetPersonalizedRankingRequest() : 
    m_campaignArnHasBeenSet(false),
    m_inputListHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

Aws::String GetPersonalizedRankingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_campaignArnHasBeenSet)
  {
   payload.WithString("campaignArn", m_campaignArn);

  }

  if(m_inputListHasBeenSet)
  {
   Array<JsonValue> inputListJsonList(m_inputList.size());
   for(unsigned inputListIndex = 0; inputListIndex < inputListJsonList.GetLength(); ++inputListIndex)
   {
     inputListJsonList[inputListIndex].AsString(m_inputList[inputListIndex]);
   }
   payload.WithArray("inputList", std::move(inputListJsonList));

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_contextHasBeenSet)
  {
   JsonValue contextJsonMap;
   for(auto& contextItem : m_context)
   {
     contextJsonMap.WithString(contextItem.first, contextItem.second);
   }
   payload.WithObject("context", std::move(contextJsonMap));

  }

  return payload.View().WriteReadable();
}




