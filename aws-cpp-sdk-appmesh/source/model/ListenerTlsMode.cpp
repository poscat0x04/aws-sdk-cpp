﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListenerTlsMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace ListenerTlsModeMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int PERMISSIVE_HASH = HashingUtils::HashString("PERMISSIVE");
        static const int STRICT_HASH = HashingUtils::HashString("STRICT");


        ListenerTlsMode GetListenerTlsModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return ListenerTlsMode::DISABLED;
          }
          else if (hashCode == PERMISSIVE_HASH)
          {
            return ListenerTlsMode::PERMISSIVE;
          }
          else if (hashCode == STRICT_HASH)
          {
            return ListenerTlsMode::STRICT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListenerTlsMode>(hashCode);
          }

          return ListenerTlsMode::NOT_SET;
        }

        Aws::String GetNameForListenerTlsMode(ListenerTlsMode enumValue)
        {
          switch(enumValue)
          {
          case ListenerTlsMode::DISABLED:
            return "DISABLED";
          case ListenerTlsMode::PERMISSIVE:
            return "PERMISSIVE";
          case ListenerTlsMode::STRICT:
            return "STRICT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListenerTlsModeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
