﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/appconfig/model/CreateHostedConfigurationVersionResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

CreateHostedConfigurationVersionResult::CreateHostedConfigurationVersionResult() : 
    m_versionNumber(0)
{
}

CreateHostedConfigurationVersionResult::CreateHostedConfigurationVersionResult(CreateHostedConfigurationVersionResult&& toMove) : 
    m_applicationId(std::move(toMove.m_applicationId)),
    m_configurationProfileId(std::move(toMove.m_configurationProfileId)),
    m_versionNumber(toMove.m_versionNumber),
    m_description(std::move(toMove.m_description)),
    m_content(std::move(toMove.m_content)),
    m_contentType(std::move(toMove.m_contentType))
{
}

CreateHostedConfigurationVersionResult& CreateHostedConfigurationVersionResult::operator=(CreateHostedConfigurationVersionResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_applicationId = std::move(toMove.m_applicationId);
   m_configurationProfileId = std::move(toMove.m_configurationProfileId);
   m_versionNumber = toMove.m_versionNumber;
   m_description = std::move(toMove.m_description);
   m_content = std::move(toMove.m_content);
   m_contentType = std::move(toMove.m_contentType);

   return *this;
}

CreateHostedConfigurationVersionResult::CreateHostedConfigurationVersionResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_versionNumber(0)
{
  *this = std::move(result);
}

CreateHostedConfigurationVersionResult& CreateHostedConfigurationVersionResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_content = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& applicationIdIter = headers.find("application-id");
  if(applicationIdIter != headers.end())
  {
    m_applicationId = applicationIdIter->second;
  }

  const auto& configurationProfileIdIter = headers.find("configuration-profile-id");
  if(configurationProfileIdIter != headers.end())
  {
    m_configurationProfileId = configurationProfileIdIter->second;
  }

  const auto& versionNumberIter = headers.find("version-number");
  if(versionNumberIter != headers.end())
  {
     m_versionNumber = StringUtils::ConvertToInt32(versionNumberIter->second.c_str());
  }

  const auto& descriptionIter = headers.find("description");
  if(descriptionIter != headers.end())
  {
    m_description = descriptionIter->second;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

   return *this;
}
