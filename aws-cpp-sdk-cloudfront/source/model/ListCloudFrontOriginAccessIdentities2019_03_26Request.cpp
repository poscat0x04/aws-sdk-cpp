﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2019_03_26Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListCloudFrontOriginAccessIdentities2019_03_26Request::ListCloudFrontOriginAccessIdentities2019_03_26Request() : 
    m_markerHasBeenSet(false),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String ListCloudFrontOriginAccessIdentities2019_03_26Request::SerializePayload() const
{
  return {};
}

void ListCloudFrontOriginAccessIdentities2019_03_26Request::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("Marker", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("MaxItems", ss.str());
      ss.str("");
    }

}

