﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/athena/AthenaClient.h>
#include <aws/athena/AthenaEndpoint.h>
#include <aws/athena/AthenaErrorMarshaller.h>
#include <aws/athena/model/BatchGetNamedQueryRequest.h>
#include <aws/athena/model/BatchGetQueryExecutionRequest.h>
#include <aws/athena/model/CreateDataCatalogRequest.h>
#include <aws/athena/model/CreateNamedQueryRequest.h>
#include <aws/athena/model/CreateWorkGroupRequest.h>
#include <aws/athena/model/DeleteDataCatalogRequest.h>
#include <aws/athena/model/DeleteNamedQueryRequest.h>
#include <aws/athena/model/DeleteWorkGroupRequest.h>
#include <aws/athena/model/GetDataCatalogRequest.h>
#include <aws/athena/model/GetDatabaseRequest.h>
#include <aws/athena/model/GetNamedQueryRequest.h>
#include <aws/athena/model/GetQueryExecutionRequest.h>
#include <aws/athena/model/GetQueryResultsRequest.h>
#include <aws/athena/model/GetTableMetadataRequest.h>
#include <aws/athena/model/GetWorkGroupRequest.h>
#include <aws/athena/model/ListDataCatalogsRequest.h>
#include <aws/athena/model/ListDatabasesRequest.h>
#include <aws/athena/model/ListNamedQueriesRequest.h>
#include <aws/athena/model/ListQueryExecutionsRequest.h>
#include <aws/athena/model/ListTableMetadataRequest.h>
#include <aws/athena/model/ListTagsForResourceRequest.h>
#include <aws/athena/model/ListWorkGroupsRequest.h>
#include <aws/athena/model/StartQueryExecutionRequest.h>
#include <aws/athena/model/StopQueryExecutionRequest.h>
#include <aws/athena/model/TagResourceRequest.h>
#include <aws/athena/model/UntagResourceRequest.h>
#include <aws/athena/model/UpdateDataCatalogRequest.h>
#include <aws/athena/model/UpdateWorkGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Athena;
using namespace Aws::Athena::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "athena";
static const char* ALLOCATION_TAG = "AthenaClient";


AthenaClient::AthenaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AthenaClient::AthenaClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AthenaClient::AthenaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AthenaClient::~AthenaClient()
{
}

void AthenaClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AthenaEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AthenaClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

BatchGetNamedQueryOutcome AthenaClient::BatchGetNamedQuery(const BatchGetNamedQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetNamedQueryOutcome(BatchGetNamedQueryResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetNamedQueryOutcome(outcome.GetError());
  }
}

BatchGetNamedQueryOutcomeCallable AthenaClient::BatchGetNamedQueryCallable(const BatchGetNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::BatchGetNamedQueryAsync(const BatchGetNamedQueryRequest& request, const BatchGetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetNamedQueryAsyncHelper( request, handler, context ); } );
}

void AthenaClient::BatchGetNamedQueryAsyncHelper(const BatchGetNamedQueryRequest& request, const BatchGetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetNamedQuery(request), context);
}

BatchGetQueryExecutionOutcome AthenaClient::BatchGetQueryExecution(const BatchGetQueryExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetQueryExecutionOutcome(BatchGetQueryExecutionResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetQueryExecutionOutcome(outcome.GetError());
  }
}

BatchGetQueryExecutionOutcomeCallable AthenaClient::BatchGetQueryExecutionCallable(const BatchGetQueryExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetQueryExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetQueryExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::BatchGetQueryExecutionAsync(const BatchGetQueryExecutionRequest& request, const BatchGetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetQueryExecutionAsyncHelper( request, handler, context ); } );
}

void AthenaClient::BatchGetQueryExecutionAsyncHelper(const BatchGetQueryExecutionRequest& request, const BatchGetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetQueryExecution(request), context);
}

CreateDataCatalogOutcome AthenaClient::CreateDataCatalog(const CreateDataCatalogRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDataCatalogOutcome(CreateDataCatalogResult(outcome.GetResult()));
  }
  else
  {
    return CreateDataCatalogOutcome(outcome.GetError());
  }
}

CreateDataCatalogOutcomeCallable AthenaClient::CreateDataCatalogCallable(const CreateDataCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::CreateDataCatalogAsync(const CreateDataCatalogRequest& request, const CreateDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDataCatalogAsyncHelper( request, handler, context ); } );
}

void AthenaClient::CreateDataCatalogAsyncHelper(const CreateDataCatalogRequest& request, const CreateDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataCatalog(request), context);
}

CreateNamedQueryOutcome AthenaClient::CreateNamedQuery(const CreateNamedQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateNamedQueryOutcome(CreateNamedQueryResult(outcome.GetResult()));
  }
  else
  {
    return CreateNamedQueryOutcome(outcome.GetError());
  }
}

CreateNamedQueryOutcomeCallable AthenaClient::CreateNamedQueryCallable(const CreateNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::CreateNamedQueryAsync(const CreateNamedQueryRequest& request, const CreateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNamedQueryAsyncHelper( request, handler, context ); } );
}

void AthenaClient::CreateNamedQueryAsyncHelper(const CreateNamedQueryRequest& request, const CreateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNamedQuery(request), context);
}

CreateWorkGroupOutcome AthenaClient::CreateWorkGroup(const CreateWorkGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateWorkGroupOutcome(CreateWorkGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateWorkGroupOutcome(outcome.GetError());
  }
}

CreateWorkGroupOutcomeCallable AthenaClient::CreateWorkGroupCallable(const CreateWorkGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::CreateWorkGroupAsync(const CreateWorkGroupRequest& request, const CreateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWorkGroupAsyncHelper( request, handler, context ); } );
}

void AthenaClient::CreateWorkGroupAsyncHelper(const CreateWorkGroupRequest& request, const CreateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWorkGroup(request), context);
}

DeleteDataCatalogOutcome AthenaClient::DeleteDataCatalog(const DeleteDataCatalogRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDataCatalogOutcome(DeleteDataCatalogResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDataCatalogOutcome(outcome.GetError());
  }
}

DeleteDataCatalogOutcomeCallable AthenaClient::DeleteDataCatalogCallable(const DeleteDataCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::DeleteDataCatalogAsync(const DeleteDataCatalogRequest& request, const DeleteDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDataCatalogAsyncHelper( request, handler, context ); } );
}

void AthenaClient::DeleteDataCatalogAsyncHelper(const DeleteDataCatalogRequest& request, const DeleteDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataCatalog(request), context);
}

DeleteNamedQueryOutcome AthenaClient::DeleteNamedQuery(const DeleteNamedQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteNamedQueryOutcome(DeleteNamedQueryResult(outcome.GetResult()));
  }
  else
  {
    return DeleteNamedQueryOutcome(outcome.GetError());
  }
}

DeleteNamedQueryOutcomeCallable AthenaClient::DeleteNamedQueryCallable(const DeleteNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::DeleteNamedQueryAsync(const DeleteNamedQueryRequest& request, const DeleteNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNamedQueryAsyncHelper( request, handler, context ); } );
}

void AthenaClient::DeleteNamedQueryAsyncHelper(const DeleteNamedQueryRequest& request, const DeleteNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNamedQuery(request), context);
}

DeleteWorkGroupOutcome AthenaClient::DeleteWorkGroup(const DeleteWorkGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteWorkGroupOutcome(DeleteWorkGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteWorkGroupOutcome(outcome.GetError());
  }
}

DeleteWorkGroupOutcomeCallable AthenaClient::DeleteWorkGroupCallable(const DeleteWorkGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::DeleteWorkGroupAsync(const DeleteWorkGroupRequest& request, const DeleteWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteWorkGroupAsyncHelper( request, handler, context ); } );
}

void AthenaClient::DeleteWorkGroupAsyncHelper(const DeleteWorkGroupRequest& request, const DeleteWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteWorkGroup(request), context);
}

GetDataCatalogOutcome AthenaClient::GetDataCatalog(const GetDataCatalogRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDataCatalogOutcome(GetDataCatalogResult(outcome.GetResult()));
  }
  else
  {
    return GetDataCatalogOutcome(outcome.GetError());
  }
}

GetDataCatalogOutcomeCallable AthenaClient::GetDataCatalogCallable(const GetDataCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::GetDataCatalogAsync(const GetDataCatalogRequest& request, const GetDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDataCatalogAsyncHelper( request, handler, context ); } );
}

void AthenaClient::GetDataCatalogAsyncHelper(const GetDataCatalogRequest& request, const GetDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataCatalog(request), context);
}

GetDatabaseOutcome AthenaClient::GetDatabase(const GetDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDatabaseOutcome(GetDatabaseResult(outcome.GetResult()));
  }
  else
  {
    return GetDatabaseOutcome(outcome.GetError());
  }
}

GetDatabaseOutcomeCallable AthenaClient::GetDatabaseCallable(const GetDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::GetDatabaseAsync(const GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDatabaseAsyncHelper( request, handler, context ); } );
}

void AthenaClient::GetDatabaseAsyncHelper(const GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDatabase(request), context);
}

GetNamedQueryOutcome AthenaClient::GetNamedQuery(const GetNamedQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetNamedQueryOutcome(GetNamedQueryResult(outcome.GetResult()));
  }
  else
  {
    return GetNamedQueryOutcome(outcome.GetError());
  }
}

GetNamedQueryOutcomeCallable AthenaClient::GetNamedQueryCallable(const GetNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::GetNamedQueryAsync(const GetNamedQueryRequest& request, const GetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNamedQueryAsyncHelper( request, handler, context ); } );
}

void AthenaClient::GetNamedQueryAsyncHelper(const GetNamedQueryRequest& request, const GetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNamedQuery(request), context);
}

GetQueryExecutionOutcome AthenaClient::GetQueryExecution(const GetQueryExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetQueryExecutionOutcome(GetQueryExecutionResult(outcome.GetResult()));
  }
  else
  {
    return GetQueryExecutionOutcome(outcome.GetError());
  }
}

GetQueryExecutionOutcomeCallable AthenaClient::GetQueryExecutionCallable(const GetQueryExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::GetQueryExecutionAsync(const GetQueryExecutionRequest& request, const GetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQueryExecutionAsyncHelper( request, handler, context ); } );
}

void AthenaClient::GetQueryExecutionAsyncHelper(const GetQueryExecutionRequest& request, const GetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQueryExecution(request), context);
}

GetQueryResultsOutcome AthenaClient::GetQueryResults(const GetQueryResultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetQueryResultsOutcome(GetQueryResultsResult(outcome.GetResult()));
  }
  else
  {
    return GetQueryResultsOutcome(outcome.GetError());
  }
}

GetQueryResultsOutcomeCallable AthenaClient::GetQueryResultsCallable(const GetQueryResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::GetQueryResultsAsync(const GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQueryResultsAsyncHelper( request, handler, context ); } );
}

void AthenaClient::GetQueryResultsAsyncHelper(const GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQueryResults(request), context);
}

GetTableMetadataOutcome AthenaClient::GetTableMetadata(const GetTableMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTableMetadataOutcome(GetTableMetadataResult(outcome.GetResult()));
  }
  else
  {
    return GetTableMetadataOutcome(outcome.GetError());
  }
}

GetTableMetadataOutcomeCallable AthenaClient::GetTableMetadataCallable(const GetTableMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTableMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTableMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::GetTableMetadataAsync(const GetTableMetadataRequest& request, const GetTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTableMetadataAsyncHelper( request, handler, context ); } );
}

void AthenaClient::GetTableMetadataAsyncHelper(const GetTableMetadataRequest& request, const GetTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTableMetadata(request), context);
}

GetWorkGroupOutcome AthenaClient::GetWorkGroup(const GetWorkGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetWorkGroupOutcome(GetWorkGroupResult(outcome.GetResult()));
  }
  else
  {
    return GetWorkGroupOutcome(outcome.GetError());
  }
}

GetWorkGroupOutcomeCallable AthenaClient::GetWorkGroupCallable(const GetWorkGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::GetWorkGroupAsync(const GetWorkGroupRequest& request, const GetWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWorkGroupAsyncHelper( request, handler, context ); } );
}

void AthenaClient::GetWorkGroupAsyncHelper(const GetWorkGroupRequest& request, const GetWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWorkGroup(request), context);
}

ListDataCatalogsOutcome AthenaClient::ListDataCatalogs(const ListDataCatalogsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDataCatalogsOutcome(ListDataCatalogsResult(outcome.GetResult()));
  }
  else
  {
    return ListDataCatalogsOutcome(outcome.GetError());
  }
}

ListDataCatalogsOutcomeCallable AthenaClient::ListDataCatalogsCallable(const ListDataCatalogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataCatalogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataCatalogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::ListDataCatalogsAsync(const ListDataCatalogsRequest& request, const ListDataCatalogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDataCatalogsAsyncHelper( request, handler, context ); } );
}

void AthenaClient::ListDataCatalogsAsyncHelper(const ListDataCatalogsRequest& request, const ListDataCatalogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDataCatalogs(request), context);
}

ListDatabasesOutcome AthenaClient::ListDatabases(const ListDatabasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDatabasesOutcome(ListDatabasesResult(outcome.GetResult()));
  }
  else
  {
    return ListDatabasesOutcome(outcome.GetError());
  }
}

ListDatabasesOutcomeCallable AthenaClient::ListDatabasesCallable(const ListDatabasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatabasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatabases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::ListDatabasesAsync(const ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatabasesAsyncHelper( request, handler, context ); } );
}

void AthenaClient::ListDatabasesAsyncHelper(const ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatabases(request), context);
}

ListNamedQueriesOutcome AthenaClient::ListNamedQueries(const ListNamedQueriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListNamedQueriesOutcome(ListNamedQueriesResult(outcome.GetResult()));
  }
  else
  {
    return ListNamedQueriesOutcome(outcome.GetError());
  }
}

ListNamedQueriesOutcomeCallable AthenaClient::ListNamedQueriesCallable(const ListNamedQueriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNamedQueriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNamedQueries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::ListNamedQueriesAsync(const ListNamedQueriesRequest& request, const ListNamedQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNamedQueriesAsyncHelper( request, handler, context ); } );
}

void AthenaClient::ListNamedQueriesAsyncHelper(const ListNamedQueriesRequest& request, const ListNamedQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNamedQueries(request), context);
}

ListQueryExecutionsOutcome AthenaClient::ListQueryExecutions(const ListQueryExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListQueryExecutionsOutcome(ListQueryExecutionsResult(outcome.GetResult()));
  }
  else
  {
    return ListQueryExecutionsOutcome(outcome.GetError());
  }
}

ListQueryExecutionsOutcomeCallable AthenaClient::ListQueryExecutionsCallable(const ListQueryExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQueryExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueryExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::ListQueryExecutionsAsync(const ListQueryExecutionsRequest& request, const ListQueryExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListQueryExecutionsAsyncHelper( request, handler, context ); } );
}

void AthenaClient::ListQueryExecutionsAsyncHelper(const ListQueryExecutionsRequest& request, const ListQueryExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListQueryExecutions(request), context);
}

ListTableMetadataOutcome AthenaClient::ListTableMetadata(const ListTableMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTableMetadataOutcome(ListTableMetadataResult(outcome.GetResult()));
  }
  else
  {
    return ListTableMetadataOutcome(outcome.GetError());
  }
}

ListTableMetadataOutcomeCallable AthenaClient::ListTableMetadataCallable(const ListTableMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTableMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTableMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::ListTableMetadataAsync(const ListTableMetadataRequest& request, const ListTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTableMetadataAsyncHelper( request, handler, context ); } );
}

void AthenaClient::ListTableMetadataAsyncHelper(const ListTableMetadataRequest& request, const ListTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTableMetadata(request), context);
}

ListTagsForResourceOutcome AthenaClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable AthenaClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void AthenaClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListWorkGroupsOutcome AthenaClient::ListWorkGroups(const ListWorkGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListWorkGroupsOutcome(ListWorkGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListWorkGroupsOutcome(outcome.GetError());
  }
}

ListWorkGroupsOutcomeCallable AthenaClient::ListWorkGroupsCallable(const ListWorkGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::ListWorkGroupsAsync(const ListWorkGroupsRequest& request, const ListWorkGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorkGroupsAsyncHelper( request, handler, context ); } );
}

void AthenaClient::ListWorkGroupsAsyncHelper(const ListWorkGroupsRequest& request, const ListWorkGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorkGroups(request), context);
}

StartQueryExecutionOutcome AthenaClient::StartQueryExecution(const StartQueryExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartQueryExecutionOutcome(StartQueryExecutionResult(outcome.GetResult()));
  }
  else
  {
    return StartQueryExecutionOutcome(outcome.GetError());
  }
}

StartQueryExecutionOutcomeCallable AthenaClient::StartQueryExecutionCallable(const StartQueryExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartQueryExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartQueryExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::StartQueryExecutionAsync(const StartQueryExecutionRequest& request, const StartQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartQueryExecutionAsyncHelper( request, handler, context ); } );
}

void AthenaClient::StartQueryExecutionAsyncHelper(const StartQueryExecutionRequest& request, const StartQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartQueryExecution(request), context);
}

StopQueryExecutionOutcome AthenaClient::StopQueryExecution(const StopQueryExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopQueryExecutionOutcome(StopQueryExecutionResult(outcome.GetResult()));
  }
  else
  {
    return StopQueryExecutionOutcome(outcome.GetError());
  }
}

StopQueryExecutionOutcomeCallable AthenaClient::StopQueryExecutionCallable(const StopQueryExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopQueryExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopQueryExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::StopQueryExecutionAsync(const StopQueryExecutionRequest& request, const StopQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopQueryExecutionAsyncHelper( request, handler, context ); } );
}

void AthenaClient::StopQueryExecutionAsyncHelper(const StopQueryExecutionRequest& request, const StopQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopQueryExecution(request), context);
}

TagResourceOutcome AthenaClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable AthenaClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void AthenaClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome AthenaClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable AthenaClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void AthenaClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateDataCatalogOutcome AthenaClient::UpdateDataCatalog(const UpdateDataCatalogRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDataCatalogOutcome(UpdateDataCatalogResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDataCatalogOutcome(outcome.GetError());
  }
}

UpdateDataCatalogOutcomeCallable AthenaClient::UpdateDataCatalogCallable(const UpdateDataCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::UpdateDataCatalogAsync(const UpdateDataCatalogRequest& request, const UpdateDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDataCatalogAsyncHelper( request, handler, context ); } );
}

void AthenaClient::UpdateDataCatalogAsyncHelper(const UpdateDataCatalogRequest& request, const UpdateDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDataCatalog(request), context);
}

UpdateWorkGroupOutcome AthenaClient::UpdateWorkGroup(const UpdateWorkGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateWorkGroupOutcome(UpdateWorkGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateWorkGroupOutcome(outcome.GetError());
  }
}

UpdateWorkGroupOutcomeCallable AthenaClient::UpdateWorkGroupCallable(const UpdateWorkGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::UpdateWorkGroupAsync(const UpdateWorkGroupRequest& request, const UpdateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateWorkGroupAsyncHelper( request, handler, context ); } );
}

void AthenaClient::UpdateWorkGroupAsyncHelper(const UpdateWorkGroupRequest& request, const UpdateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateWorkGroup(request), context);
}

