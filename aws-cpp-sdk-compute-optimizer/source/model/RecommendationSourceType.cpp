﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RecommendationSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace RecommendationSourceTypeMapper
      {

        static const int Ec2Instance_HASH = HashingUtils::HashString("Ec2Instance");
        static const int AutoScalingGroup_HASH = HashingUtils::HashString("AutoScalingGroup");


        RecommendationSourceType GetRecommendationSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ec2Instance_HASH)
          {
            return RecommendationSourceType::Ec2Instance;
          }
          else if (hashCode == AutoScalingGroup_HASH)
          {
            return RecommendationSourceType::AutoScalingGroup;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationSourceType>(hashCode);
          }

          return RecommendationSourceType::NOT_SET;
        }

        Aws::String GetNameForRecommendationSourceType(RecommendationSourceType enumValue)
        {
          switch(enumValue)
          {
          case RecommendationSourceType::Ec2Instance:
            return "Ec2Instance";
          case RecommendationSourceType::AutoScalingGroup:
            return "AutoScalingGroup";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationSourceTypeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
