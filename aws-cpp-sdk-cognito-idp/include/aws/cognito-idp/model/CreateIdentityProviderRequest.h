﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/IdentityProviderTypeType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class AWS_COGNITOIDENTITYPROVIDER_API CreateIdentityProviderRequest : public CognitoIdentityProviderRequest
  {
  public:
    CreateIdentityProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIdentityProvider"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline CreateIdentityProviderRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline CreateIdentityProviderRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline CreateIdentityProviderRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The identity provider name.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }

    /**
     * <p>The identity provider name.</p>
     */
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }

    /**
     * <p>The identity provider name.</p>
     */
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * <p>The identity provider name.</p>
     */
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }

    /**
     * <p>The identity provider name.</p>
     */
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }

    /**
     * <p>The identity provider name.</p>
     */
    inline CreateIdentityProviderRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The identity provider name.</p>
     */
    inline CreateIdentityProviderRequest& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}

    /**
     * <p>The identity provider name.</p>
     */
    inline CreateIdentityProviderRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}


    /**
     * <p>The identity provider type.</p>
     */
    inline const IdentityProviderTypeType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The identity provider type.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The identity provider type.</p>
     */
    inline void SetProviderType(const IdentityProviderTypeType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The identity provider type.</p>
     */
    inline void SetProviderType(IdentityProviderTypeType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The identity provider type.</p>
     */
    inline CreateIdentityProviderRequest& WithProviderType(const IdentityProviderTypeType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The identity provider type.</p>
     */
    inline CreateIdentityProviderRequest& WithProviderType(IdentityProviderTypeType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProviderDetails() const{ return m_providerDetails; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline bool ProviderDetailsHasBeenSet() const { return m_providerDetailsHasBeenSet; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline void SetProviderDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_providerDetailsHasBeenSet = true; m_providerDetails = value; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline void SetProviderDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails = std::move(value); }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline CreateIdentityProviderRequest& WithProviderDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetProviderDetails(value); return *this;}

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline CreateIdentityProviderRequest& WithProviderDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetProviderDetails(std::move(value)); return *this;}

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(const Aws::String& key, const Aws::String& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, value); return *this; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(Aws::String&& key, const Aws::String& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(const Aws::String& key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(Aws::String&& key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(const char* key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(Aws::String&& key, const char* value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type.</p> <ul> <li> <p>For Google,
     * Facebook and Login with Amazon:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>client_secret</p> </li> <li> <p>authorize_scopes</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul>
     * <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>authorize_url <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li> <p>token_url
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p>attributes_url <i>if not available from discovery URL specified by
     * oidc_issuer key</i> </p> </li> <li> <p>jwks_uri <i>if not available from
     * discovery URL specified by oidc_issuer key</i> </p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For SAML providers:</p> <ul>
     * <li> <p>MetadataFile OR MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i>
     * </p> </li> </ul> </li> </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(const char* key, const char* value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, value); return *this; }


    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributeMapping() const{ return m_attributeMapping; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline bool AttributeMappingHasBeenSet() const { return m_attributeMappingHasBeenSet; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline void SetAttributeMapping(const Aws::Map<Aws::String, Aws::String>& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping = value; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline void SetAttributeMapping(Aws::Map<Aws::String, Aws::String>&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping = std::move(value); }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline CreateIdentityProviderRequest& WithAttributeMapping(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributeMapping(value); return *this;}

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline CreateIdentityProviderRequest& WithAttributeMapping(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributeMapping(std::move(value)); return *this;}

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(const Aws::String& key, const Aws::String& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, value); return *this; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(Aws::String&& key, const Aws::String& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(const Aws::String& key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(Aws::String&& key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(const char* key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(Aws::String&& key, const char* value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of identity provider attributes to standard and custom user pool
     * attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(const char* key, const char* value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, value); return *this; }


    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdpIdentifiers() const{ return m_idpIdentifiers; }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline bool IdpIdentifiersHasBeenSet() const { return m_idpIdentifiersHasBeenSet; }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline void SetIdpIdentifiers(const Aws::Vector<Aws::String>& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers = value; }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline void SetIdpIdentifiers(Aws::Vector<Aws::String>&& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers = std::move(value); }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline CreateIdentityProviderRequest& WithIdpIdentifiers(const Aws::Vector<Aws::String>& value) { SetIdpIdentifiers(value); return *this;}

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline CreateIdentityProviderRequest& WithIdpIdentifiers(Aws::Vector<Aws::String>&& value) { SetIdpIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline CreateIdentityProviderRequest& AddIdpIdentifiers(const Aws::String& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline CreateIdentityProviderRequest& AddIdpIdentifiers(Aws::String&& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identity provider identifiers.</p>
     */
    inline CreateIdentityProviderRequest& AddIdpIdentifiers(const char* value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(value); return *this; }

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet;

    IdentityProviderTypeType m_providerType;
    bool m_providerTypeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_providerDetails;
    bool m_providerDetailsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributeMapping;
    bool m_attributeMappingHasBeenSet;

    Aws::Vector<Aws::String> m_idpIdentifiers;
    bool m_idpIdentifiersHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
