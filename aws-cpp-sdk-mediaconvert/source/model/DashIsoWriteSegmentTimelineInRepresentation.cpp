﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoWriteSegmentTimelineInRepresentation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace DashIsoWriteSegmentTimelineInRepresentationMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DashIsoWriteSegmentTimelineInRepresentation GetDashIsoWriteSegmentTimelineInRepresentationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DashIsoWriteSegmentTimelineInRepresentation::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DashIsoWriteSegmentTimelineInRepresentation::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashIsoWriteSegmentTimelineInRepresentation>(hashCode);
          }

          return DashIsoWriteSegmentTimelineInRepresentation::NOT_SET;
        }

        Aws::String GetNameForDashIsoWriteSegmentTimelineInRepresentation(DashIsoWriteSegmentTimelineInRepresentation enumValue)
        {
          switch(enumValue)
          {
          case DashIsoWriteSegmentTimelineInRepresentation::ENABLED:
            return "ENABLED";
          case DashIsoWriteSegmentTimelineInRepresentation::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashIsoWriteSegmentTimelineInRepresentationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
