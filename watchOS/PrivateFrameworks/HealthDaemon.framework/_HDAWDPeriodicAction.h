//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class HDAssertion, HDPeriodicActivity, HDProfile, NSDate, NSString;
@protocol OS_dispatch_queue;

@interface _HDAWDPeriodicAction : NSObject <HDPeriodicActivityDelegate>
{
    NSString *_waitingToRunKey;
    NSString *_lastSubmissionAttemptKey;
    NSString *_intervalCounterKey;
    NSString *_lastProcessedDateKey;
    long long _repeatInterval;
    long long _graceInterval;
    _Bool _requiresClassB;
    int _intervalMultiple;
    int _maximumAttemptCount;
    double _minimumDelayBetweenAttempts;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    CDUnknownBlockType _block;
    HDPeriodicActivity *_periodicActivity;
    int _waitingToRun;
    NSDate *_lastSubmissionAttemptDate;
    int _intervalCounter;
    NSDate *_lastProcessedDate;
    NSString *_taskName;
}

@property(readonly, copy, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
@property(readonly, nonatomic) int waitingToRun; // @synthesize waitingToRun=_waitingToRun;
- (void).cxx_destruct;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (_Bool)doForced;
- (_Bool)_runBlockWithAccessibilityAssertion:(id)arg1 error:(id *)arg2;
- (_Bool)doIfWaitingWithError:(id *)arg1;
- (void)doIfWaitingOnMaintenanceQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)start;
- (void)_queue_registerActivity;
- (_Bool)_queue_shouldAttemptToSubmit;
@property(readonly, nonatomic) int intervalCounter;
@property(readonly, nonatomic) NSDate *lastSubmissionAttemptDate;
@property(readonly, nonatomic) NSDate *lastProcessedDate;
- (void)reset;
- (void)setLastProcessedDate:(id)arg1;
- (void)_queue_prepareAccessibilityAssertionIfNeeded;
- (void)_queue_setLastProcessedDate:(id)arg1;
- (void)_queue_setIntervalCounter:(int)arg1;
- (void)_queue_setLastSubmissionAttemptDate:(id)arg1;
- (void)_queue_setWaitingToRun:(int)arg1;
- (void)_beginWaitingToRun;
- (void)_loadState;
- (void)dealloc;
- (id)initWithTaskName:(id)arg1 keyPrefix:(id)arg2 xpcInterval:(long long)arg3 xpcGraceInterval:(long long)arg4 requiresClassB:(_Bool)arg5 intervalMultiple:(int)arg6 maximumAttemptCount:(int)arg7 minimumDelayBetweenAttempts:(double)arg8 profile:(id)arg9 block:(CDUnknownBlockType)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

