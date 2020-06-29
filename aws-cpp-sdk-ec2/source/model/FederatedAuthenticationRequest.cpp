﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FederatedAuthenticationRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

FederatedAuthenticationRequest::FederatedAuthenticationRequest() : 
    m_sAMLProviderArnHasBeenSet(false)
{
}

FederatedAuthenticationRequest::FederatedAuthenticationRequest(const XmlNode& xmlNode) : 
    m_sAMLProviderArnHasBeenSet(false)
{
  *this = xmlNode;
}

FederatedAuthenticationRequest& FederatedAuthenticationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sAMLProviderArnNode = resultNode.FirstChild("SAMLProviderArn");
    if(!sAMLProviderArnNode.IsNull())
    {
      m_sAMLProviderArn = Aws::Utils::Xml::DecodeEscapedXmlText(sAMLProviderArnNode.GetText());
      m_sAMLProviderArnHasBeenSet = true;
    }
  }

  return *this;
}

void FederatedAuthenticationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sAMLProviderArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SAMLProviderArn=" << StringUtils::URLEncode(m_sAMLProviderArn.c_str()) << "&";
  }

}

void FederatedAuthenticationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sAMLProviderArnHasBeenSet)
  {
      oStream << location << ".SAMLProviderArn=" << StringUtils::URLEncode(m_sAMLProviderArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
