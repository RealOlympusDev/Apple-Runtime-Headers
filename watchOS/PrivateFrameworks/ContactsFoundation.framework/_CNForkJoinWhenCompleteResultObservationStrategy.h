//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNForkJoinResultReportingStrategy-Protocol.h>

@class NSMutableArray, NSString;

@interface _CNForkJoinWhenCompleteResultObservationStrategy : NSObject <CNForkJoinResultReportingStrategy>
{
    NSMutableArray *_results;
    unsigned int _uncompletedObservableCount;
}

- (void).cxx_destruct;
- (void)observableAtIndex:(unsigned int)arg1 didCompleteForObserver:(id)arg2;
- (void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned int)arg2 observer:(id)arg3;
- (id)initWithCapacity:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

