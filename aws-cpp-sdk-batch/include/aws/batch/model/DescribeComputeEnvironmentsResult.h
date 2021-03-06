﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ComputeEnvironmentDetail.h>

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
namespace Batch
{
namespace Model
{
  class AWS_BATCH_API DescribeComputeEnvironmentsResult
  {
  public:
    DescribeComputeEnvironmentsResult();
    DescribeComputeEnvironmentsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeComputeEnvironmentsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The list of compute environments.</p>
     */
    inline const Aws::Vector<ComputeEnvironmentDetail>& GetComputeEnvironments() const{ return m_computeEnvironments; }

    /**
     * <p>The list of compute environments.</p>
     */
    inline void SetComputeEnvironments(const Aws::Vector<ComputeEnvironmentDetail>& value) { m_computeEnvironments = value; }

    /**
     * <p>The list of compute environments.</p>
     */
    inline void SetComputeEnvironments(Aws::Vector<ComputeEnvironmentDetail>&& value) { m_computeEnvironments = value; }

    /**
     * <p>The list of compute environments.</p>
     */
    inline DescribeComputeEnvironmentsResult& WithComputeEnvironments(const Aws::Vector<ComputeEnvironmentDetail>& value) { SetComputeEnvironments(value); return *this;}

    /**
     * <p>The list of compute environments.</p>
     */
    inline DescribeComputeEnvironmentsResult& WithComputeEnvironments(Aws::Vector<ComputeEnvironmentDetail>&& value) { SetComputeEnvironments(value); return *this;}

    /**
     * <p>The list of compute environments.</p>
     */
    inline DescribeComputeEnvironmentsResult& AddComputeEnvironments(const ComputeEnvironmentDetail& value) { m_computeEnvironments.push_back(value); return *this; }

    /**
     * <p>The list of compute environments.</p>
     */
    inline DescribeComputeEnvironmentsResult& AddComputeEnvironments(ComputeEnvironmentDetail&& value) { m_computeEnvironments.push_back(value); return *this; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeComputeEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeComputeEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeComputeEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<ComputeEnvironmentDetail> m_computeEnvironments;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
