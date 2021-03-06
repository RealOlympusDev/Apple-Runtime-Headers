//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreML/MLModel.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class MLAppleImageFeatureExtractorParameters, NSString;

@interface MLAppleImageFeatureExtractor : MLModel <MLModelSpecificationLoader>
{
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    int _outputDataType;
    int _extractorType;
    MLAppleImageFeatureExtractorParameters *_parameters;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
@property(readonly) MLAppleImageFeatureExtractorParameters *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)computeScenePrintFeatures:(struct __CVBuffer *)arg1 handle:(id)arg2 useCPUOnly:(_Bool)arg3 error:(id *)arg4;
- (id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned int)arg2;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 featureExtractorType:(int)arg3 configuration:(id)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

