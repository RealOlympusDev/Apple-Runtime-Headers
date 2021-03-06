//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/SUInstallationConstraintMonitor-Protocol.h>
#import <SoftwareUpdateServices/SUInstallationConstraintMonitorDelegate-Protocol.h>

@class NSSet, NSString;
@protocol OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;

@interface SUComposedInstallationConstraintMonitor : NSObject <SUInstallationConstraintMonitorDelegate, SUInstallationConstraintMonitor>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_queue_installationConstraintMonitors;
    id <SUInstallationConstraintMonitorDelegate> _queue_delegate;
    unsigned long long _queue_representedConstraints;
}

@property(readonly, retain, nonatomic) NSSet *constraintMonitors; // @synthesize constraintMonitors=_queue_installationConstraintMonitors;
- (void).cxx_destruct;
- (void)_queue_setDelegate:(id)arg1;
- (void)installationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (void)_queue_invalidateChildConstraintMonitors;
- (unsigned long long)_queue_unsatisfiedConstraints;
- (unsigned long long)_queue_representedConstraints;
- (void)_queue_clearDelegate;
- (id)_queue_delegate;
- (void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (_Bool)isSatisfied;
@property(readonly, nonatomic) unsigned long long unsatisfiedConstraints;
@property(readonly, nonatomic) unsigned long long representedConstraints;
@property(nonatomic) id <SUInstallationConstraintMonitorDelegate> delegate;
- (void)dealloc;
- (id)initWithInternalQueue:(id)arg1 withInstallationConstraintMonitors:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

