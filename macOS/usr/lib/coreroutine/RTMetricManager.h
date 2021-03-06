//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDServerConnection, NSArray, RTInvocationDispatcher, RTManagedConfiguration, RTPlatform;
@protocol OS_dispatch_queue;

@interface RTMetricManager : NSObject
{
    BOOL _ready;
    RTInvocationDispatcher *_dispatcher;
    RTPlatform *_platform;
    NSArray *_configuredMetricClasses;
    AWDServerConnection *_awdServerConnection;
    RTManagedConfiguration *_managedConfigurationManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)metricForType:(unsigned long long)arg1;
+ (id)productionMetrics;
+ (double)doubleWithSignificantDigits:(double)arg1 digits:(int)arg2;
+ (int)intWithSignificantDigits:(int)arg1 digits:(int)arg2;
+ (int)doubleToInt:(double)arg1 shifts:(int)arg2;
+ (int)roundTimeInterval:(double)arg1 byIntervalUnit:(unsigned long long)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTManagedConfiguration *managedConfigurationManager; // @synthesize managedConfigurationManager=_managedConfigurationManager;
@property(retain, nonatomic) AWDServerConnection *awdServerConnection; // @synthesize awdServerConnection=_awdServerConnection;
@property(retain, nonatomic) NSArray *configuredMetricClasses; // @synthesize configuredMetricClasses=_configuredMetricClasses;
@property(nonatomic) BOOL ready; // @synthesize ready=_ready;
@property(retain, nonatomic) RTPlatform *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;
- (id)createMetricForType:(unsigned long long)arg1;
- (BOOL)_routineConfiguredForMetric:(id)arg1;
- (void)_submitMetric:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)submitMetric:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)submitMetric:(id)arg1;
- (void)_releaseMetricPlaceholderForMetric:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_registerQueriableMetric:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)registerQueriableMetric:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)shutdown;
- (void)_setupWithConfiguredClasses:(id)arg1;
- (BOOL)_isDiagnosticsSubmissionAllowed;
- (void)_fetchDiagnosticsEnabled:(CDUnknownBlockType)arg1;
- (void)fetchDiagnosticsEnabled:(CDUnknownBlockType)arg1;
- (id)initWithAWDServerConnection:(id)arg1 configuredClasses:(id)arg2 managedConfigurationManager:(id)arg3 platform:(id)arg4;
- (id)initWithPlatform:(id)arg1;
- (id)init;

@end

