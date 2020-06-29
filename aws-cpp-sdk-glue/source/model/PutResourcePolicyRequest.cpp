﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PutResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutResourcePolicyRequest::PutResourcePolicyRequest() : 
    m_policyInJsonHasBeenSet(false),
    m_policyHashConditionHasBeenSet(false),
    m_policyExistsCondition(ExistCondition::NOT_SET),
    m_policyExistsConditionHasBeenSet(false)
{
}

Aws::String PutResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyInJsonHasBeenSet)
  {
   payload.WithString("PolicyInJson", m_policyInJson);

  }

  if(m_policyHashConditionHasBeenSet)
  {
   payload.WithString("PolicyHashCondition", m_policyHashCondition);

  }

  if(m_policyExistsConditionHasBeenSet)
  {
   payload.WithString("PolicyExistsCondition", ExistConditionMapper::GetNameForExistCondition(m_policyExistsCondition));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutResourcePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.PutResourcePolicy"));
  return headers;

}




