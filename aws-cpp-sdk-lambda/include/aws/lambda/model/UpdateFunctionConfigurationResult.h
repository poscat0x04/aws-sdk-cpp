﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/lambda/model/VpcConfigResponse.h>
#include <aws/lambda/model/DeadLetterConfig.h>
#include <aws/lambda/model/EnvironmentResponse.h>
#include <aws/lambda/model/TracingConfigResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/State.h>
#include <aws/lambda/model/StateReasonCode.h>
#include <aws/lambda/model/LastUpdateStatus.h>
#include <aws/lambda/model/LastUpdateStatusReasonCode.h>
#include <aws/lambda/model/Layer.h>
#include <aws/lambda/model/FileSystemConfig.h>
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
namespace Lambda
{
namespace Model
{
  /**
   * <p>Details about a function's configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/FunctionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API UpdateFunctionConfigurationResult
  {
  public:
    UpdateFunctionConfigurationResult();
    UpdateFunctionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateFunctionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionName = value; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionName = std::move(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionName.assign(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArn = value; }

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArn = std::move(value); }

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArn.assign(value); }

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline UpdateFunctionConfigurationResult& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline UpdateFunctionConfigurationResult& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline UpdateFunctionConfigurationResult& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline const Runtime& GetRuntime() const{ return m_runtime; }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline void SetRuntime(const Runtime& value) { m_runtime = value; }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline void SetRuntime(Runtime&& value) { m_runtime = std::move(value); }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithRuntime(Runtime&& value) { SetRuntime(std::move(value)); return *this;}


    /**
     * <p>The function's execution role.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The function's execution role.</p>
     */
    inline void SetRole(const Aws::String& value) { m_role = value; }

    /**
     * <p>The function's execution role.</p>
     */
    inline void SetRole(Aws::String&& value) { m_role = std::move(value); }

    /**
     * <p>The function's execution role.</p>
     */
    inline void SetRole(const char* value) { m_role.assign(value); }

    /**
     * <p>The function's execution role.</p>
     */
    inline UpdateFunctionConfigurationResult& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The function's execution role.</p>
     */
    inline UpdateFunctionConfigurationResult& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The function's execution role.</p>
     */
    inline UpdateFunctionConfigurationResult& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(const Aws::String& value) { m_handler = value; }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(Aws::String&& value) { m_handler = std::move(value); }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(const char* value) { m_handler.assign(value); }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithHandler(Aws::String&& value) { SetHandler(std::move(value)); return *this;}

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithHandler(const char* value) { SetHandler(value); return *this;}


    /**
     * <p>The size of the function's deployment package, in bytes.</p>
     */
    inline long long GetCodeSize() const{ return m_codeSize; }

    /**
     * <p>The size of the function's deployment package, in bytes.</p>
     */
    inline void SetCodeSize(long long value) { m_codeSize = value; }

    /**
     * <p>The size of the function's deployment package, in bytes.</p>
     */
    inline UpdateFunctionConfigurationResult& WithCodeSize(long long value) { SetCodeSize(value); return *this;}


    /**
     * <p>The function's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The function's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The function's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The function's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The function's description.</p>
     */
    inline UpdateFunctionConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The function's description.</p>
     */
    inline UpdateFunctionConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The function's description.</p>
     */
    inline UpdateFunctionConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The amount of time in seconds that Lambda allows a function to run before
     * stopping it.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The amount of time in seconds that Lambda allows a function to run before
     * stopping it.</p>
     */
    inline void SetTimeout(int value) { m_timeout = value; }

    /**
     * <p>The amount of time in seconds that Lambda allows a function to run before
     * stopping it.</p>
     */
    inline UpdateFunctionConfigurationResult& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The memory that's allocated to the function.</p>
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * <p>The memory that's allocated to the function.</p>
     */
    inline void SetMemorySize(int value) { m_memorySize = value; }

    /**
     * <p>The memory that's allocated to the function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithMemorySize(int value) { SetMemorySize(value); return *this;}


    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline const Aws::String& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModified(const Aws::String& value) { m_lastModified = value; }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModified(Aws::String&& value) { m_lastModified = std::move(value); }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModified(const char* value) { m_lastModified.assign(value); }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline UpdateFunctionConfigurationResult& WithLastModified(const Aws::String& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline UpdateFunctionConfigurationResult& WithLastModified(Aws::String&& value) { SetLastModified(std::move(value)); return *this;}

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline UpdateFunctionConfigurationResult& WithLastModified(const char* value) { SetLastModified(value); return *this;}


    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline const Aws::String& GetCodeSha256() const{ return m_codeSha256; }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline void SetCodeSha256(const Aws::String& value) { m_codeSha256 = value; }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline void SetCodeSha256(Aws::String&& value) { m_codeSha256 = std::move(value); }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline void SetCodeSha256(const char* value) { m_codeSha256.assign(value); }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline UpdateFunctionConfigurationResult& WithCodeSha256(const Aws::String& value) { SetCodeSha256(value); return *this;}

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline UpdateFunctionConfigurationResult& WithCodeSha256(Aws::String&& value) { SetCodeSha256(std::move(value)); return *this;}

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline UpdateFunctionConfigurationResult& WithCodeSha256(const char* value) { SetCodeSha256(value); return *this;}


    /**
     * <p>The version of the Lambda function.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The function's networking configuration.</p>
     */
    inline const VpcConfigResponse& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline void SetVpcConfig(const VpcConfigResponse& value) { m_vpcConfig = value; }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline void SetVpcConfig(VpcConfigResponse&& value) { m_vpcConfig = std::move(value); }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline UpdateFunctionConfigurationResult& WithVpcConfig(const VpcConfigResponse& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The function's networking configuration.</p>
     */
    inline UpdateFunctionConfigurationResult& WithVpcConfig(VpcConfigResponse&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>The function's dead letter queue.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfig = value; }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfig = std::move(value); }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline UpdateFunctionConfigurationResult& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline UpdateFunctionConfigurationResult& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}


    /**
     * <p>The function's environment variables.</p>
     */
    inline const EnvironmentResponse& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The function's environment variables.</p>
     */
    inline void SetEnvironment(const EnvironmentResponse& value) { m_environment = value; }

    /**
     * <p>The function's environment variables.</p>
     */
    inline void SetEnvironment(EnvironmentResponse&& value) { m_environment = std::move(value); }

    /**
     * <p>The function's environment variables.</p>
     */
    inline UpdateFunctionConfigurationResult& WithEnvironment(const EnvironmentResponse& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The function's environment variables.</p>
     */
    inline UpdateFunctionConfigurationResult& WithEnvironment(EnvironmentResponse&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer managed CMK.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const{ return m_kMSKeyArn; }

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer managed CMK.</p>
     */
    inline void SetKMSKeyArn(const Aws::String& value) { m_kMSKeyArn = value; }

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer managed CMK.</p>
     */
    inline void SetKMSKeyArn(Aws::String&& value) { m_kMSKeyArn = std::move(value); }

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer managed CMK.</p>
     */
    inline void SetKMSKeyArn(const char* value) { m_kMSKeyArn.assign(value); }

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer managed CMK.</p>
     */
    inline UpdateFunctionConfigurationResult& WithKMSKeyArn(const Aws::String& value) { SetKMSKeyArn(value); return *this;}

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer managed CMK.</p>
     */
    inline UpdateFunctionConfigurationResult& WithKMSKeyArn(Aws::String&& value) { SetKMSKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer managed CMK.</p>
     */
    inline UpdateFunctionConfigurationResult& WithKMSKeyArn(const char* value) { SetKMSKeyArn(value); return *this;}


    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline const TracingConfigResponse& GetTracingConfig() const{ return m_tracingConfig; }

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline void SetTracingConfig(const TracingConfigResponse& value) { m_tracingConfig = value; }

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline void SetTracingConfig(TracingConfigResponse&& value) { m_tracingConfig = std::move(value); }

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline UpdateFunctionConfigurationResult& WithTracingConfig(const TracingConfigResponse& value) { SetTracingConfig(value); return *this;}

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline UpdateFunctionConfigurationResult& WithTracingConfig(TracingConfigResponse&& value) { SetTracingConfig(std::move(value)); return *this;}


    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline const Aws::String& GetMasterArn() const{ return m_masterArn; }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline void SetMasterArn(const Aws::String& value) { m_masterArn = value; }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline void SetMasterArn(Aws::String&& value) { m_masterArn = std::move(value); }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline void SetMasterArn(const char* value) { m_masterArn.assign(value); }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithMasterArn(const Aws::String& value) { SetMasterArn(value); return *this;}

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithMasterArn(Aws::String&& value) { SetMasterArn(std::move(value)); return *this;}

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithMasterArn(const char* value) { SetMasterArn(value); return *this;}


    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline UpdateFunctionConfigurationResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline UpdateFunctionConfigurationResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline UpdateFunctionConfigurationResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline const Aws::Vector<Layer>& GetLayers() const{ return m_layers; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline void SetLayers(const Aws::Vector<Layer>& value) { m_layers = value; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline void SetLayers(Aws::Vector<Layer>&& value) { m_layers = std::move(value); }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline UpdateFunctionConfigurationResult& WithLayers(const Aws::Vector<Layer>& value) { SetLayers(value); return *this;}

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline UpdateFunctionConfigurationResult& WithLayers(Aws::Vector<Layer>&& value) { SetLayers(std::move(value)); return *this;}

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline UpdateFunctionConfigurationResult& AddLayers(const Layer& value) { m_layers.push_back(value); return *this; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline UpdateFunctionConfigurationResult& AddLayers(Layer&& value) { m_layers.push_back(std::move(value)); return *this; }


    /**
     * <p>The current state of the function. When the state is <code>Inactive</code>,
     * you can reactivate the function by invoking it.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The current state of the function. When the state is <code>Inactive</code>,
     * you can reactivate the function by invoking it.</p>
     */
    inline void SetState(const State& value) { m_state = value; }

    /**
     * <p>The current state of the function. When the state is <code>Inactive</code>,
     * you can reactivate the function by invoking it.</p>
     */
    inline void SetState(State&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the function. When the state is <code>Inactive</code>,
     * you can reactivate the function by invoking it.</p>
     */
    inline UpdateFunctionConfigurationResult& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the function. When the state is <code>Inactive</code>,
     * you can reactivate the function by invoking it.</p>
     */
    inline UpdateFunctionConfigurationResult& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason for the function's current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline UpdateFunctionConfigurationResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline UpdateFunctionConfigurationResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline UpdateFunctionConfigurationResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The reason code for the function's current state. When the code is
     * <code>Creating</code>, you can't invoke or modify the function.</p>
     */
    inline const StateReasonCode& GetStateReasonCode() const{ return m_stateReasonCode; }

    /**
     * <p>The reason code for the function's current state. When the code is
     * <code>Creating</code>, you can't invoke or modify the function.</p>
     */
    inline void SetStateReasonCode(const StateReasonCode& value) { m_stateReasonCode = value; }

    /**
     * <p>The reason code for the function's current state. When the code is
     * <code>Creating</code>, you can't invoke or modify the function.</p>
     */
    inline void SetStateReasonCode(StateReasonCode&& value) { m_stateReasonCode = std::move(value); }

    /**
     * <p>The reason code for the function's current state. When the code is
     * <code>Creating</code>, you can't invoke or modify the function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithStateReasonCode(const StateReasonCode& value) { SetStateReasonCode(value); return *this;}

    /**
     * <p>The reason code for the function's current state. When the code is
     * <code>Creating</code>, you can't invoke or modify the function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithStateReasonCode(StateReasonCode&& value) { SetStateReasonCode(std::move(value)); return *this;}


    /**
     * <p>The status of the last update that was performed on the function. This is
     * first set to <code>Successful</code> after function creation completes.</p>
     */
    inline const LastUpdateStatus& GetLastUpdateStatus() const{ return m_lastUpdateStatus; }

    /**
     * <p>The status of the last update that was performed on the function. This is
     * first set to <code>Successful</code> after function creation completes.</p>
     */
    inline void SetLastUpdateStatus(const LastUpdateStatus& value) { m_lastUpdateStatus = value; }

    /**
     * <p>The status of the last update that was performed on the function. This is
     * first set to <code>Successful</code> after function creation completes.</p>
     */
    inline void SetLastUpdateStatus(LastUpdateStatus&& value) { m_lastUpdateStatus = std::move(value); }

    /**
     * <p>The status of the last update that was performed on the function. This is
     * first set to <code>Successful</code> after function creation completes.</p>
     */
    inline UpdateFunctionConfigurationResult& WithLastUpdateStatus(const LastUpdateStatus& value) { SetLastUpdateStatus(value); return *this;}

    /**
     * <p>The status of the last update that was performed on the function. This is
     * first set to <code>Successful</code> after function creation completes.</p>
     */
    inline UpdateFunctionConfigurationResult& WithLastUpdateStatus(LastUpdateStatus&& value) { SetLastUpdateStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline const Aws::String& GetLastUpdateStatusReason() const{ return m_lastUpdateStatusReason; }

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline void SetLastUpdateStatusReason(const Aws::String& value) { m_lastUpdateStatusReason = value; }

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline void SetLastUpdateStatusReason(Aws::String&& value) { m_lastUpdateStatusReason = std::move(value); }

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline void SetLastUpdateStatusReason(const char* value) { m_lastUpdateStatusReason.assign(value); }

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithLastUpdateStatusReason(const Aws::String& value) { SetLastUpdateStatusReason(value); return *this;}

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithLastUpdateStatusReason(Aws::String&& value) { SetLastUpdateStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithLastUpdateStatusReason(const char* value) { SetLastUpdateStatusReason(value); return *this;}


    /**
     * <p>The reason code for the last update that was performed on the function.</p>
     */
    inline const LastUpdateStatusReasonCode& GetLastUpdateStatusReasonCode() const{ return m_lastUpdateStatusReasonCode; }

    /**
     * <p>The reason code for the last update that was performed on the function.</p>
     */
    inline void SetLastUpdateStatusReasonCode(const LastUpdateStatusReasonCode& value) { m_lastUpdateStatusReasonCode = value; }

    /**
     * <p>The reason code for the last update that was performed on the function.</p>
     */
    inline void SetLastUpdateStatusReasonCode(LastUpdateStatusReasonCode&& value) { m_lastUpdateStatusReasonCode = std::move(value); }

    /**
     * <p>The reason code for the last update that was performed on the function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithLastUpdateStatusReasonCode(const LastUpdateStatusReasonCode& value) { SetLastUpdateStatusReasonCode(value); return *this;}

    /**
     * <p>The reason code for the last update that was performed on the function.</p>
     */
    inline UpdateFunctionConfigurationResult& WithLastUpdateStatusReasonCode(LastUpdateStatusReasonCode&& value) { SetLastUpdateStatusReasonCode(std::move(value)); return *this;}


    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline const Aws::Vector<FileSystemConfig>& GetFileSystemConfigs() const{ return m_fileSystemConfigs; }

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline void SetFileSystemConfigs(const Aws::Vector<FileSystemConfig>& value) { m_fileSystemConfigs = value; }

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline void SetFileSystemConfigs(Aws::Vector<FileSystemConfig>&& value) { m_fileSystemConfigs = std::move(value); }

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline UpdateFunctionConfigurationResult& WithFileSystemConfigs(const Aws::Vector<FileSystemConfig>& value) { SetFileSystemConfigs(value); return *this;}

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline UpdateFunctionConfigurationResult& WithFileSystemConfigs(Aws::Vector<FileSystemConfig>&& value) { SetFileSystemConfigs(std::move(value)); return *this;}

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline UpdateFunctionConfigurationResult& AddFileSystemConfigs(const FileSystemConfig& value) { m_fileSystemConfigs.push_back(value); return *this; }

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline UpdateFunctionConfigurationResult& AddFileSystemConfigs(FileSystemConfig&& value) { m_fileSystemConfigs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_functionName;

    Aws::String m_functionArn;

    Runtime m_runtime;

    Aws::String m_role;

    Aws::String m_handler;

    long long m_codeSize;

    Aws::String m_description;

    int m_timeout;

    int m_memorySize;

    Aws::String m_lastModified;

    Aws::String m_codeSha256;

    Aws::String m_version;

    VpcConfigResponse m_vpcConfig;

    DeadLetterConfig m_deadLetterConfig;

    EnvironmentResponse m_environment;

    Aws::String m_kMSKeyArn;

    TracingConfigResponse m_tracingConfig;

    Aws::String m_masterArn;

    Aws::String m_revisionId;

    Aws::Vector<Layer> m_layers;

    State m_state;

    Aws::String m_stateReason;

    StateReasonCode m_stateReasonCode;

    LastUpdateStatus m_lastUpdateStatus;

    Aws::String m_lastUpdateStatusReason;

    LastUpdateStatusReasonCode m_lastUpdateStatusReasonCode;

    Aws::Vector<FileSystemConfig> m_fileSystemConfigs;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
