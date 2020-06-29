﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RegisterDBProxyTargetsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

RegisterDBProxyTargetsResult::RegisterDBProxyTargetsResult()
{
}

RegisterDBProxyTargetsResult::RegisterDBProxyTargetsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RegisterDBProxyTargetsResult& RegisterDBProxyTargetsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RegisterDBProxyTargetsResult"))
  {
    resultNode = rootNode.FirstChild("RegisterDBProxyTargetsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBProxyTargetsNode = resultNode.FirstChild("DBProxyTargets");
    if(!dBProxyTargetsNode.IsNull())
    {
      XmlNode dBProxyTargetsMember = dBProxyTargetsNode.FirstChild("member");
      while(!dBProxyTargetsMember.IsNull())
      {
        m_dBProxyTargets.push_back(dBProxyTargetsMember);
        dBProxyTargetsMember = dBProxyTargetsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::RegisterDBProxyTargetsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
