//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TUCallHistoryManagerDataSource;

@interface TUCallHistoryManager : NSObject
{
    id <TUCallHistoryManagerDataSource> _dataSource;
}

@property(readonly, nonatomic) id <TUCallHistoryManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end

