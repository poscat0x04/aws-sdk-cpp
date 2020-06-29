﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/forecast/model/EvaluationParameters.h>
#include <aws/forecast/model/HyperParameterTuningJobConfig.h>
#include <aws/forecast/model/InputDataConfig.h>
#include <aws/forecast/model/FeaturizationConfig.h>
#include <aws/forecast/model/EncryptionConfig.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class AWS_FORECASTSERVICE_API CreatePredictorRequest : public ForecastServiceRequest
  {
  public:
    CreatePredictorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePredictor"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the predictor.</p>
     */
    inline const Aws::String& GetPredictorName() const{ return m_predictorName; }

    /**
     * <p>A name for the predictor.</p>
     */
    inline bool PredictorNameHasBeenSet() const { return m_predictorNameHasBeenSet; }

    /**
     * <p>A name for the predictor.</p>
     */
    inline void SetPredictorName(const Aws::String& value) { m_predictorNameHasBeenSet = true; m_predictorName = value; }

    /**
     * <p>A name for the predictor.</p>
     */
    inline void SetPredictorName(Aws::String&& value) { m_predictorNameHasBeenSet = true; m_predictorName = std::move(value); }

    /**
     * <p>A name for the predictor.</p>
     */
    inline void SetPredictorName(const char* value) { m_predictorNameHasBeenSet = true; m_predictorName.assign(value); }

    /**
     * <p>A name for the predictor.</p>
     */
    inline CreatePredictorRequest& WithPredictorName(const Aws::String& value) { SetPredictorName(value); return *this;}

    /**
     * <p>A name for the predictor.</p>
     */
    inline CreatePredictorRequest& WithPredictorName(Aws::String&& value) { SetPredictorName(std::move(value)); return *this;}

    /**
     * <p>A name for the predictor.</p>
     */
    inline CreatePredictorRequest& WithPredictorName(const char* value) { SetPredictorName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm to use for model training.
     * Required if <code>PerformAutoML</code> is not set to <code>true</code>.</p> <p
     * class="title"> <b>Supported algorithms:</b> </p> <ul> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ARIMA</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Deep_AR_Plus</code> </p> <p>Supports
     * hyperparameter optimization (HPO)</p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ETS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/NPTS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Prophet</code> </p> </li> </ul>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm to use for model training.
     * Required if <code>PerformAutoML</code> is not set to <code>true</code>.</p> <p
     * class="title"> <b>Supported algorithms:</b> </p> <ul> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ARIMA</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Deep_AR_Plus</code> </p> <p>Supports
     * hyperparameter optimization (HPO)</p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ETS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/NPTS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Prophet</code> </p> </li> </ul>
     */
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm to use for model training.
     * Required if <code>PerformAutoML</code> is not set to <code>true</code>.</p> <p
     * class="title"> <b>Supported algorithms:</b> </p> <ul> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ARIMA</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Deep_AR_Plus</code> </p> <p>Supports
     * hyperparameter optimization (HPO)</p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ETS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/NPTS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Prophet</code> </p> </li> </ul>
     */
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm to use for model training.
     * Required if <code>PerformAutoML</code> is not set to <code>true</code>.</p> <p
     * class="title"> <b>Supported algorithms:</b> </p> <ul> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ARIMA</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Deep_AR_Plus</code> </p> <p>Supports
     * hyperparameter optimization (HPO)</p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ETS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/NPTS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Prophet</code> </p> </li> </ul>
     */
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm to use for model training.
     * Required if <code>PerformAutoML</code> is not set to <code>true</code>.</p> <p
     * class="title"> <b>Supported algorithms:</b> </p> <ul> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ARIMA</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Deep_AR_Plus</code> </p> <p>Supports
     * hyperparameter optimization (HPO)</p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ETS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/NPTS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Prophet</code> </p> </li> </ul>
     */
    inline void SetAlgorithmArn(const char* value) { m_algorithmArnHasBeenSet = true; m_algorithmArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm to use for model training.
     * Required if <code>PerformAutoML</code> is not set to <code>true</code>.</p> <p
     * class="title"> <b>Supported algorithms:</b> </p> <ul> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ARIMA</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Deep_AR_Plus</code> </p> <p>Supports
     * hyperparameter optimization (HPO)</p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ETS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/NPTS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Prophet</code> </p> </li> </ul>
     */
    inline CreatePredictorRequest& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm to use for model training.
     * Required if <code>PerformAutoML</code> is not set to <code>true</code>.</p> <p
     * class="title"> <b>Supported algorithms:</b> </p> <ul> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ARIMA</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Deep_AR_Plus</code> </p> <p>Supports
     * hyperparameter optimization (HPO)</p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ETS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/NPTS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Prophet</code> </p> </li> </ul>
     */
    inline CreatePredictorRequest& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm to use for model training.
     * Required if <code>PerformAutoML</code> is not set to <code>true</code>.</p> <p
     * class="title"> <b>Supported algorithms:</b> </p> <ul> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ARIMA</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Deep_AR_Plus</code> </p> <p>Supports
     * hyperparameter optimization (HPO)</p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ETS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/NPTS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Prophet</code> </p> </li> </ul>
     */
    inline CreatePredictorRequest& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}


    /**
     * <p>Specifies the number of time-steps that the model is trained to predict. The
     * forecast horizon is also called the prediction length.</p> <p>For example, if
     * you configure a dataset for daily data collection (using the
     * <code>DataFrequency</code> parameter of the <a>CreateDataset</a> operation) and
     * set the forecast horizon to 10, the model returns predictions for 10 days.</p>
     * <p>The maximum forecast horizon is the lesser of 500 time-steps or 1/3 of the
     * TARGET_TIME_SERIES dataset length.</p>
     */
    inline int GetForecastHorizon() const{ return m_forecastHorizon; }

    /**
     * <p>Specifies the number of time-steps that the model is trained to predict. The
     * forecast horizon is also called the prediction length.</p> <p>For example, if
     * you configure a dataset for daily data collection (using the
     * <code>DataFrequency</code> parameter of the <a>CreateDataset</a> operation) and
     * set the forecast horizon to 10, the model returns predictions for 10 days.</p>
     * <p>The maximum forecast horizon is the lesser of 500 time-steps or 1/3 of the
     * TARGET_TIME_SERIES dataset length.</p>
     */
    inline bool ForecastHorizonHasBeenSet() const { return m_forecastHorizonHasBeenSet; }

    /**
     * <p>Specifies the number of time-steps that the model is trained to predict. The
     * forecast horizon is also called the prediction length.</p> <p>For example, if
     * you configure a dataset for daily data collection (using the
     * <code>DataFrequency</code> parameter of the <a>CreateDataset</a> operation) and
     * set the forecast horizon to 10, the model returns predictions for 10 days.</p>
     * <p>The maximum forecast horizon is the lesser of 500 time-steps or 1/3 of the
     * TARGET_TIME_SERIES dataset length.</p>
     */
    inline void SetForecastHorizon(int value) { m_forecastHorizonHasBeenSet = true; m_forecastHorizon = value; }

    /**
     * <p>Specifies the number of time-steps that the model is trained to predict. The
     * forecast horizon is also called the prediction length.</p> <p>For example, if
     * you configure a dataset for daily data collection (using the
     * <code>DataFrequency</code> parameter of the <a>CreateDataset</a> operation) and
     * set the forecast horizon to 10, the model returns predictions for 10 days.</p>
     * <p>The maximum forecast horizon is the lesser of 500 time-steps or 1/3 of the
     * TARGET_TIME_SERIES dataset length.</p>
     */
    inline CreatePredictorRequest& WithForecastHorizon(int value) { SetForecastHorizon(value); return *this;}


    /**
     * <p>Whether to perform AutoML. When Amazon Forecast performs AutoML, it evaluates
     * the algorithms it provides and chooses the best algorithm and configuration for
     * your training dataset.</p> <p>The default value is <code>false</code>. In this
     * case, you are required to specify an algorithm.</p> <p>Set
     * <code>PerformAutoML</code> to <code>true</code> to have Amazon Forecast perform
     * AutoML. This is a good option if you aren't sure which algorithm is suitable for
     * your training data. In this case, <code>PerformHPO</code> must be false.</p>
     */
    inline bool GetPerformAutoML() const{ return m_performAutoML; }

    /**
     * <p>Whether to perform AutoML. When Amazon Forecast performs AutoML, it evaluates
     * the algorithms it provides and chooses the best algorithm and configuration for
     * your training dataset.</p> <p>The default value is <code>false</code>. In this
     * case, you are required to specify an algorithm.</p> <p>Set
     * <code>PerformAutoML</code> to <code>true</code> to have Amazon Forecast perform
     * AutoML. This is a good option if you aren't sure which algorithm is suitable for
     * your training data. In this case, <code>PerformHPO</code> must be false.</p>
     */
    inline bool PerformAutoMLHasBeenSet() const { return m_performAutoMLHasBeenSet; }

    /**
     * <p>Whether to perform AutoML. When Amazon Forecast performs AutoML, it evaluates
     * the algorithms it provides and chooses the best algorithm and configuration for
     * your training dataset.</p> <p>The default value is <code>false</code>. In this
     * case, you are required to specify an algorithm.</p> <p>Set
     * <code>PerformAutoML</code> to <code>true</code> to have Amazon Forecast perform
     * AutoML. This is a good option if you aren't sure which algorithm is suitable for
     * your training data. In this case, <code>PerformHPO</code> must be false.</p>
     */
    inline void SetPerformAutoML(bool value) { m_performAutoMLHasBeenSet = true; m_performAutoML = value; }

    /**
     * <p>Whether to perform AutoML. When Amazon Forecast performs AutoML, it evaluates
     * the algorithms it provides and chooses the best algorithm and configuration for
     * your training dataset.</p> <p>The default value is <code>false</code>. In this
     * case, you are required to specify an algorithm.</p> <p>Set
     * <code>PerformAutoML</code> to <code>true</code> to have Amazon Forecast perform
     * AutoML. This is a good option if you aren't sure which algorithm is suitable for
     * your training data. In this case, <code>PerformHPO</code> must be false.</p>
     */
    inline CreatePredictorRequest& WithPerformAutoML(bool value) { SetPerformAutoML(value); return *this;}


    /**
     * <p>Whether to perform hyperparameter optimization (HPO). HPO finds optimal
     * hyperparameter values for your training data. The process of performing HPO is
     * known as running a hyperparameter tuning job.</p> <p>The default value is
     * <code>false</code>. In this case, Amazon Forecast uses default hyperparameter
     * values from the chosen algorithm.</p> <p>To override the default values, set
     * <code>PerformHPO</code> to <code>true</code> and, optionally, supply the
     * <a>HyperParameterTuningJobConfig</a> object. The tuning job specifies a metric
     * to optimize, which hyperparameters participate in tuning, and the valid range
     * for each tunable hyperparameter. In this case, you are required to specify an
     * algorithm and <code>PerformAutoML</code> must be false.</p> <p>The following
     * algorithm supports HPO:</p> <ul> <li> <p>DeepAR+</p> </li> </ul>
     */
    inline bool GetPerformHPO() const{ return m_performHPO; }

    /**
     * <p>Whether to perform hyperparameter optimization (HPO). HPO finds optimal
     * hyperparameter values for your training data. The process of performing HPO is
     * known as running a hyperparameter tuning job.</p> <p>The default value is
     * <code>false</code>. In this case, Amazon Forecast uses default hyperparameter
     * values from the chosen algorithm.</p> <p>To override the default values, set
     * <code>PerformHPO</code> to <code>true</code> and, optionally, supply the
     * <a>HyperParameterTuningJobConfig</a> object. The tuning job specifies a metric
     * to optimize, which hyperparameters participate in tuning, and the valid range
     * for each tunable hyperparameter. In this case, you are required to specify an
     * algorithm and <code>PerformAutoML</code> must be false.</p> <p>The following
     * algorithm supports HPO:</p> <ul> <li> <p>DeepAR+</p> </li> </ul>
     */
    inline bool PerformHPOHasBeenSet() const { return m_performHPOHasBeenSet; }

    /**
     * <p>Whether to perform hyperparameter optimization (HPO). HPO finds optimal
     * hyperparameter values for your training data. The process of performing HPO is
     * known as running a hyperparameter tuning job.</p> <p>The default value is
     * <code>false</code>. In this case, Amazon Forecast uses default hyperparameter
     * values from the chosen algorithm.</p> <p>To override the default values, set
     * <code>PerformHPO</code> to <code>true</code> and, optionally, supply the
     * <a>HyperParameterTuningJobConfig</a> object. The tuning job specifies a metric
     * to optimize, which hyperparameters participate in tuning, and the valid range
     * for each tunable hyperparameter. In this case, you are required to specify an
     * algorithm and <code>PerformAutoML</code> must be false.</p> <p>The following
     * algorithm supports HPO:</p> <ul> <li> <p>DeepAR+</p> </li> </ul>
     */
    inline void SetPerformHPO(bool value) { m_performHPOHasBeenSet = true; m_performHPO = value; }

    /**
     * <p>Whether to perform hyperparameter optimization (HPO). HPO finds optimal
     * hyperparameter values for your training data. The process of performing HPO is
     * known as running a hyperparameter tuning job.</p> <p>The default value is
     * <code>false</code>. In this case, Amazon Forecast uses default hyperparameter
     * values from the chosen algorithm.</p> <p>To override the default values, set
     * <code>PerformHPO</code> to <code>true</code> and, optionally, supply the
     * <a>HyperParameterTuningJobConfig</a> object. The tuning job specifies a metric
     * to optimize, which hyperparameters participate in tuning, and the valid range
     * for each tunable hyperparameter. In this case, you are required to specify an
     * algorithm and <code>PerformAutoML</code> must be false.</p> <p>The following
     * algorithm supports HPO:</p> <ul> <li> <p>DeepAR+</p> </li> </ul>
     */
    inline CreatePredictorRequest& WithPerformHPO(bool value) { SetPerformHPO(value); return *this;}


    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTrainingParameters() const{ return m_trainingParameters; }

    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline bool TrainingParametersHasBeenSet() const { return m_trainingParametersHasBeenSet; }

    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline void SetTrainingParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters = value; }

    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline void SetTrainingParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters = std::move(value); }

    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline CreatePredictorRequest& WithTrainingParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTrainingParameters(value); return *this;}

    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline CreatePredictorRequest& WithTrainingParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTrainingParameters(std::move(value)); return *this;}

    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline CreatePredictorRequest& AddTrainingParameters(const Aws::String& key, const Aws::String& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters.emplace(key, value); return *this; }

    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline CreatePredictorRequest& AddTrainingParameters(Aws::String&& key, const Aws::String& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline CreatePredictorRequest& AddTrainingParameters(const Aws::String& key, Aws::String&& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline CreatePredictorRequest& AddTrainingParameters(Aws::String&& key, Aws::String&& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline CreatePredictorRequest& AddTrainingParameters(const char* key, Aws::String&& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline CreatePredictorRequest& AddTrainingParameters(Aws::String&& key, const char* value) { m_trainingParametersHasBeenSet = true; m_trainingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline CreatePredictorRequest& AddTrainingParameters(const char* key, const char* value) { m_trainingParametersHasBeenSet = true; m_trainingParameters.emplace(key, value); return *this; }


    /**
     * <p>Used to override the default evaluation parameters of the specified
     * algorithm. Amazon Forecast evaluates a predictor by splitting a dataset into
     * training data and testing data. The evaluation parameters define how to perform
     * the split and the number of iterations.</p>
     */
    inline const EvaluationParameters& GetEvaluationParameters() const{ return m_evaluationParameters; }

    /**
     * <p>Used to override the default evaluation parameters of the specified
     * algorithm. Amazon Forecast evaluates a predictor by splitting a dataset into
     * training data and testing data. The evaluation parameters define how to perform
     * the split and the number of iterations.</p>
     */
    inline bool EvaluationParametersHasBeenSet() const { return m_evaluationParametersHasBeenSet; }

    /**
     * <p>Used to override the default evaluation parameters of the specified
     * algorithm. Amazon Forecast evaluates a predictor by splitting a dataset into
     * training data and testing data. The evaluation parameters define how to perform
     * the split and the number of iterations.</p>
     */
    inline void SetEvaluationParameters(const EvaluationParameters& value) { m_evaluationParametersHasBeenSet = true; m_evaluationParameters = value; }

    /**
     * <p>Used to override the default evaluation parameters of the specified
     * algorithm. Amazon Forecast evaluates a predictor by splitting a dataset into
     * training data and testing data. The evaluation parameters define how to perform
     * the split and the number of iterations.</p>
     */
    inline void SetEvaluationParameters(EvaluationParameters&& value) { m_evaluationParametersHasBeenSet = true; m_evaluationParameters = std::move(value); }

    /**
     * <p>Used to override the default evaluation parameters of the specified
     * algorithm. Amazon Forecast evaluates a predictor by splitting a dataset into
     * training data and testing data. The evaluation parameters define how to perform
     * the split and the number of iterations.</p>
     */
    inline CreatePredictorRequest& WithEvaluationParameters(const EvaluationParameters& value) { SetEvaluationParameters(value); return *this;}

    /**
     * <p>Used to override the default evaluation parameters of the specified
     * algorithm. Amazon Forecast evaluates a predictor by splitting a dataset into
     * training data and testing data. The evaluation parameters define how to perform
     * the split and the number of iterations.</p>
     */
    inline CreatePredictorRequest& WithEvaluationParameters(EvaluationParameters&& value) { SetEvaluationParameters(std::move(value)); return *this;}


    /**
     * <p>Provides hyperparameter override values for the algorithm. If you don't
     * provide this parameter, Amazon Forecast uses default values. The individual
     * algorithms specify which hyperparameters support hyperparameter optimization
     * (HPO). For more information, see <a>aws-forecast-choosing-recipes</a>.</p> <p>If
     * you included the <code>HPOConfig</code> object, you must set
     * <code>PerformHPO</code> to true.</p>
     */
    inline const HyperParameterTuningJobConfig& GetHPOConfig() const{ return m_hPOConfig; }

    /**
     * <p>Provides hyperparameter override values for the algorithm. If you don't
     * provide this parameter, Amazon Forecast uses default values. The individual
     * algorithms specify which hyperparameters support hyperparameter optimization
     * (HPO). For more information, see <a>aws-forecast-choosing-recipes</a>.</p> <p>If
     * you included the <code>HPOConfig</code> object, you must set
     * <code>PerformHPO</code> to true.</p>
     */
    inline bool HPOConfigHasBeenSet() const { return m_hPOConfigHasBeenSet; }

    /**
     * <p>Provides hyperparameter override values for the algorithm. If you don't
     * provide this parameter, Amazon Forecast uses default values. The individual
     * algorithms specify which hyperparameters support hyperparameter optimization
     * (HPO). For more information, see <a>aws-forecast-choosing-recipes</a>.</p> <p>If
     * you included the <code>HPOConfig</code> object, you must set
     * <code>PerformHPO</code> to true.</p>
     */
    inline void SetHPOConfig(const HyperParameterTuningJobConfig& value) { m_hPOConfigHasBeenSet = true; m_hPOConfig = value; }

    /**
     * <p>Provides hyperparameter override values for the algorithm. If you don't
     * provide this parameter, Amazon Forecast uses default values. The individual
     * algorithms specify which hyperparameters support hyperparameter optimization
     * (HPO). For more information, see <a>aws-forecast-choosing-recipes</a>.</p> <p>If
     * you included the <code>HPOConfig</code> object, you must set
     * <code>PerformHPO</code> to true.</p>
     */
    inline void SetHPOConfig(HyperParameterTuningJobConfig&& value) { m_hPOConfigHasBeenSet = true; m_hPOConfig = std::move(value); }

    /**
     * <p>Provides hyperparameter override values for the algorithm. If you don't
     * provide this parameter, Amazon Forecast uses default values. The individual
     * algorithms specify which hyperparameters support hyperparameter optimization
     * (HPO). For more information, see <a>aws-forecast-choosing-recipes</a>.</p> <p>If
     * you included the <code>HPOConfig</code> object, you must set
     * <code>PerformHPO</code> to true.</p>
     */
    inline CreatePredictorRequest& WithHPOConfig(const HyperParameterTuningJobConfig& value) { SetHPOConfig(value); return *this;}

    /**
     * <p>Provides hyperparameter override values for the algorithm. If you don't
     * provide this parameter, Amazon Forecast uses default values. The individual
     * algorithms specify which hyperparameters support hyperparameter optimization
     * (HPO). For more information, see <a>aws-forecast-choosing-recipes</a>.</p> <p>If
     * you included the <code>HPOConfig</code> object, you must set
     * <code>PerformHPO</code> to true.</p>
     */
    inline CreatePredictorRequest& WithHPOConfig(HyperParameterTuningJobConfig&& value) { SetHPOConfig(std::move(value)); return *this;}


    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline CreatePredictorRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline CreatePredictorRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The featurization configuration.</p>
     */
    inline const FeaturizationConfig& GetFeaturizationConfig() const{ return m_featurizationConfig; }

    /**
     * <p>The featurization configuration.</p>
     */
    inline bool FeaturizationConfigHasBeenSet() const { return m_featurizationConfigHasBeenSet; }

    /**
     * <p>The featurization configuration.</p>
     */
    inline void SetFeaturizationConfig(const FeaturizationConfig& value) { m_featurizationConfigHasBeenSet = true; m_featurizationConfig = value; }

    /**
     * <p>The featurization configuration.</p>
     */
    inline void SetFeaturizationConfig(FeaturizationConfig&& value) { m_featurizationConfigHasBeenSet = true; m_featurizationConfig = std::move(value); }

    /**
     * <p>The featurization configuration.</p>
     */
    inline CreatePredictorRequest& WithFeaturizationConfig(const FeaturizationConfig& value) { SetFeaturizationConfig(value); return *this;}

    /**
     * <p>The featurization configuration.</p>
     */
    inline CreatePredictorRequest& WithFeaturizationConfig(FeaturizationConfig&& value) { SetFeaturizationConfig(std::move(value)); return *this;}


    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = value; }

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::move(value); }

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline CreatePredictorRequest& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline CreatePredictorRequest& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}

  private:

    Aws::String m_predictorName;
    bool m_predictorNameHasBeenSet;

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet;

    int m_forecastHorizon;
    bool m_forecastHorizonHasBeenSet;

    bool m_performAutoML;
    bool m_performAutoMLHasBeenSet;

    bool m_performHPO;
    bool m_performHPOHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_trainingParameters;
    bool m_trainingParametersHasBeenSet;

    EvaluationParameters m_evaluationParameters;
    bool m_evaluationParametersHasBeenSet;

    HyperParameterTuningJobConfig m_hPOConfig;
    bool m_hPOConfigHasBeenSet;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;

    FeaturizationConfig m_featurizationConfig;
    bool m_featurizationConfigHasBeenSet;

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
