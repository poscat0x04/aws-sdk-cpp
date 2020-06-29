﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DescribeIndexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeIndexResult::DescribeIndexResult() : 
    m_edition(IndexEdition::NOT_SET),
    m_status(IndexStatus::NOT_SET)
{
}

DescribeIndexResult::DescribeIndexResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_edition(IndexEdition::NOT_SET),
    m_status(IndexStatus::NOT_SET)
{
  *this = result;
}

DescribeIndexResult& DescribeIndexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Edition"))
  {
    m_edition = IndexEditionMapper::GetIndexEditionForName(jsonValue.GetString("Edition"));

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("ServerSideEncryptionConfiguration"))
  {
    m_serverSideEncryptionConfiguration = jsonValue.GetObject("ServerSideEncryptionConfiguration");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

  }

  if(jsonValue.ValueExists("DocumentMetadataConfigurations"))
  {
    Array<JsonView> documentMetadataConfigurationsJsonList = jsonValue.GetArray("DocumentMetadataConfigurations");
    for(unsigned documentMetadataConfigurationsIndex = 0; documentMetadataConfigurationsIndex < documentMetadataConfigurationsJsonList.GetLength(); ++documentMetadataConfigurationsIndex)
    {
      m_documentMetadataConfigurations.push_back(documentMetadataConfigurationsJsonList[documentMetadataConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("IndexStatistics"))
  {
    m_indexStatistics = jsonValue.GetObject("IndexStatistics");

  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

  }

  if(jsonValue.ValueExists("CapacityUnits"))
  {
    m_capacityUnits = jsonValue.GetObject("CapacityUnits");

  }



  return *this;
}
