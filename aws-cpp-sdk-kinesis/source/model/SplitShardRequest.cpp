﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/SplitShardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SplitShardRequest::SplitShardRequest() : 
    m_streamNameHasBeenSet(false),
    m_shardToSplitHasBeenSet(false),
    m_newStartingHashKeyHasBeenSet(false)
{
}

Aws::String SplitShardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_shardToSplitHasBeenSet)
  {
   payload.WithString("ShardToSplit", m_shardToSplit);

  }

  if(m_newStartingHashKeyHasBeenSet)
  {
   payload.WithString("NewStartingHashKey", m_newStartingHashKey);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SplitShardRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.SplitShard"));
  return headers;

}




