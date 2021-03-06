//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, SNAnalyzerHost;
@protocol SNAnalyzerProviding, SNProcessing, SNResultsObserving;

__attribute__((visibility("hidden")))
@interface SNAnalyzerInfo : NSObject
{
    _Bool _configured;
    id <SNAnalyzerProviding> _request;
    id <SNResultsObserving> _resultsObserver;
    SNAnalyzerHost *_analyzerHost;
    id <SNProcessing> _sharedProcessor;
    NSError *_configurationError;
}

@property(retain, nonatomic) NSError *configurationError; // @synthesize configurationError=_configurationError;
@property(nonatomic) _Bool configured; // @synthesize configured=_configured;
@property(retain, nonatomic) id <SNProcessing> sharedProcessor; // @synthesize sharedProcessor=_sharedProcessor;
@property(retain, nonatomic) SNAnalyzerHost *analyzerHost; // @synthesize analyzerHost=_analyzerHost;
@property(nonatomic) __weak id <SNResultsObserving> resultsObserver; // @synthesize resultsObserver=_resultsObserver;
@property(retain, nonatomic) id <SNAnalyzerProviding> request; // @synthesize request=_request;
- (void).cxx_destruct;

@end

