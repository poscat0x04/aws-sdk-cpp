﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/Duration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  class AWS_APPMESH_API TcpTimeout
  {
  public:
    TcpTimeout();
    TcpTimeout(Aws::Utils::Json::JsonView jsonValue);
    TcpTimeout& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Duration& GetIdle() const{ return m_idle; }

    
    inline bool IdleHasBeenSet() const { return m_idleHasBeenSet; }

    
    inline void SetIdle(const Duration& value) { m_idleHasBeenSet = true; m_idle = value; }

    
    inline void SetIdle(Duration&& value) { m_idleHasBeenSet = true; m_idle = std::move(value); }

    
    inline TcpTimeout& WithIdle(const Duration& value) { SetIdle(value); return *this;}

    
    inline TcpTimeout& WithIdle(Duration&& value) { SetIdle(std::move(value)); return *this;}

  private:

    Duration m_idle;
    bool m_idleHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
