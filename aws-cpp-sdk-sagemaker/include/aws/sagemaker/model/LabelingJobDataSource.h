﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/LabelingJobS3DataSource.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Provides information about the location of input data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobDataSource">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API LabelingJobDataSource
  {
  public:
    LabelingJobDataSource();
    LabelingJobDataSource(Aws::Utils::Json::JsonView jsonValue);
    LabelingJobDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location of the input data objects.</p>
     */
    inline const LabelingJobS3DataSource& GetS3DataSource() const{ return m_s3DataSource; }

    /**
     * <p>The Amazon S3 location of the input data objects.</p>
     */
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the input data objects.</p>
     */
    inline void SetS3DataSource(const LabelingJobS3DataSource& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = value; }

    /**
     * <p>The Amazon S3 location of the input data objects.</p>
     */
    inline void SetS3DataSource(LabelingJobS3DataSource&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::move(value); }

    /**
     * <p>The Amazon S3 location of the input data objects.</p>
     */
    inline LabelingJobDataSource& WithS3DataSource(const LabelingJobS3DataSource& value) { SetS3DataSource(value); return *this;}

    /**
     * <p>The Amazon S3 location of the input data objects.</p>
     */
    inline LabelingJobDataSource& WithS3DataSource(LabelingJobS3DataSource&& value) { SetS3DataSource(std::move(value)); return *this;}

  private:

    LabelingJobS3DataSource m_s3DataSource;
    bool m_s3DataSourceHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
