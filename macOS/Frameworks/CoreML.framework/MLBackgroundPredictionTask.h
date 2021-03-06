//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreML/MLBackgroundTask.h>

@class MLModelConfiguration, MLPredictionOptions, NSURL;

@interface MLBackgroundPredictionTask : MLBackgroundTask
{
    NSURL *_modelURL;
    MLModelConfiguration *_modelConfiguration;
    MLPredictionOptions *_predictionOptions;
}

+ (BOOL)supportsSecureCoding;
+ (Class)taskRunnerClass;
@property(copy, nonatomic) MLPredictionOptions *predictionOptions; // @synthesize predictionOptions=_predictionOptions;
@property(copy, nonatomic) MLModelConfiguration *modelConfiguration; // @synthesize modelConfiguration=_modelConfiguration;
@property(copy, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

