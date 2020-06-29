﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra/model/S3Path.h>
#include <aws/kendra/model/FaqStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{
  class AWS_KENDRA_API DescribeFaqResult
  {
  public:
    DescribeFaqResult();
    DescribeFaqResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFaqResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the FAQ.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the FAQ.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the FAQ.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the FAQ.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the FAQ.</p>
     */
    inline DescribeFaqResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the FAQ.</p>
     */
    inline DescribeFaqResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the FAQ.</p>
     */
    inline DescribeFaqResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexId = value; }

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline void SetIndexId(const char* value) { m_indexId.assign(value); }

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline DescribeFaqResult& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline DescribeFaqResult& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index that contains the FAQ.</p>
     */
    inline DescribeFaqResult& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The name that you gave the FAQ when it was created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you gave the FAQ when it was created.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name that you gave the FAQ when it was created.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name that you gave the FAQ when it was created.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name that you gave the FAQ when it was created.</p>
     */
    inline DescribeFaqResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you gave the FAQ when it was created.</p>
     */
    inline DescribeFaqResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you gave the FAQ when it was created.</p>
     */
    inline DescribeFaqResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the FAQ that you provided when it was created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the FAQ that you provided when it was created.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the FAQ that you provided when it was created.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the FAQ that you provided when it was created.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the FAQ that you provided when it was created.</p>
     */
    inline DescribeFaqResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the FAQ that you provided when it was created.</p>
     */
    inline DescribeFaqResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the FAQ that you provided when it was created.</p>
     */
    inline DescribeFaqResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time that the FAQ was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the FAQ was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time that the FAQ was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the FAQ was created.</p>
     */
    inline DescribeFaqResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the FAQ was created.</p>
     */
    inline DescribeFaqResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time that the FAQ was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time that the FAQ was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time that the FAQ was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time that the FAQ was last updated.</p>
     */
    inline DescribeFaqResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the FAQ was last updated.</p>
     */
    inline DescribeFaqResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const S3Path& GetS3Path() const{ return m_s3Path; }

    
    inline void SetS3Path(const S3Path& value) { m_s3Path = value; }

    
    inline void SetS3Path(S3Path&& value) { m_s3Path = std::move(value); }

    
    inline DescribeFaqResult& WithS3Path(const S3Path& value) { SetS3Path(value); return *this;}

    
    inline DescribeFaqResult& WithS3Path(S3Path&& value) { SetS3Path(std::move(value)); return *this;}


    /**
     * <p>The status of the FAQ. It is ready to use when the status is
     * <code>ACTIVE</code>.</p>
     */
    inline const FaqStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the FAQ. It is ready to use when the status is
     * <code>ACTIVE</code>.</p>
     */
    inline void SetStatus(const FaqStatus& value) { m_status = value; }

    /**
     * <p>The status of the FAQ. It is ready to use when the status is
     * <code>ACTIVE</code>.</p>
     */
    inline void SetStatus(FaqStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the FAQ. It is ready to use when the status is
     * <code>ACTIVE</code>.</p>
     */
    inline DescribeFaqResult& WithStatus(const FaqStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the FAQ. It is ready to use when the status is
     * <code>ACTIVE</code>.</p>
     */
    inline DescribeFaqResult& WithStatus(FaqStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role that provides access to the S3
     * bucket containing the input files for the FAQ.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that provides access to the S3
     * bucket containing the input files for the FAQ.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that provides access to the S3
     * bucket containing the input files for the FAQ.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that provides access to the S3
     * bucket containing the input files for the FAQ.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that provides access to the S3
     * bucket containing the input files for the FAQ.</p>
     */
    inline DescribeFaqResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that provides access to the S3
     * bucket containing the input files for the FAQ.</p>
     */
    inline DescribeFaqResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that provides access to the S3
     * bucket containing the input files for the FAQ.</p>
     */
    inline DescribeFaqResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>If the <code>Status</code> field is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains the reason why the FAQ failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>If the <code>Status</code> field is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains the reason why the FAQ failed.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>If the <code>Status</code> field is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains the reason why the FAQ failed.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>If the <code>Status</code> field is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains the reason why the FAQ failed.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>If the <code>Status</code> field is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains the reason why the FAQ failed.</p>
     */
    inline DescribeFaqResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>If the <code>Status</code> field is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains the reason why the FAQ failed.</p>
     */
    inline DescribeFaqResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>If the <code>Status</code> field is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains the reason why the FAQ failed.</p>
     */
    inline DescribeFaqResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_indexId;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    S3Path m_s3Path;

    FaqStatus m_status;

    Aws::String m_roleArn;

    Aws::String m_errorMessage;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
