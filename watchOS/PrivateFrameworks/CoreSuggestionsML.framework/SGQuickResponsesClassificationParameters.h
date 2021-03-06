//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGQuickResponsesClassificationParameters : NSObject
{
    unsigned int _maxPromptLength;
    NSString *_promptJoiningString;
    double _positiveSamplingRate;
    double _negativeSamplingRate;
    double _maxPromptWindowSeconds;
}

@property(readonly, nonatomic) NSString *promptJoiningString; // @synthesize promptJoiningString=_promptJoiningString;
@property(readonly, nonatomic) double maxPromptWindowSeconds; // @synthesize maxPromptWindowSeconds=_maxPromptWindowSeconds;
@property(readonly, nonatomic) unsigned int maxPromptLength; // @synthesize maxPromptLength=_maxPromptLength;
@property(readonly, nonatomic) double negativeSamplingRate; // @synthesize negativeSamplingRate=_negativeSamplingRate;
@property(readonly, nonatomic) double positiveSamplingRate; // @synthesize positiveSamplingRate=_positiveSamplingRate;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

