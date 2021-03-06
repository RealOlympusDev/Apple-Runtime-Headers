//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, MLMediaLibraryService, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ML3StatementAccumulator : NSObject
{
    MLMediaLibraryService *_xpcService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _statementThreshold;
    NSMutableArray *_statementQueue;
    NSString *_databasePath;
    ML3DatabaseConnection *_connection;
    NSUUID *_existingTransactionIdentifier;
    unsigned long long _priorityLevel;
}

@property(nonatomic) unsigned long long priorityLevel; // @synthesize priorityLevel=_priorityLevel;
@property(retain, nonatomic) NSUUID *existingTransactionIdentifier; // @synthesize existingTransactionIdentifier=_existingTransactionIdentifier;
@property(readonly, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) NSMutableArray *statementQueue; // @synthesize statementQueue=_statementQueue;
@property(nonatomic) unsigned long long statementThreshold; // @synthesize statementThreshold=_statementThreshold;
- (void).cxx_destruct;
- (BOOL)_onQueueFlushAndWait:(BOOL)arg1;
- (BOOL)flushAndWait:(BOOL)arg1;
- (BOOL)enqueueStatement:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;

@end

