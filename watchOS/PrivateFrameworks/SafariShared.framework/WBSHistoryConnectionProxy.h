//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryConnectionProxy-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryConnectionProxy>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionProxyQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionProxyQueue; // @synthesize connectionProxyQueue=_connectionProxyQueue;
- (void).cxx_destruct;
- (id)queryMemoryFootprintWithError:(id *)arg1;
- (void)queryMemoryFootprint:(CDUnknownBlockType)arg1;
- (void)killService;
- (void)beginHistoryAccessSession:(CDUnknownBlockType)arg1;
- (void)beginURLCompletionSession:(CDUnknownBlockType)arg1;
- (void)debugGetDatabaseURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getVisitedLinksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getServiceInfo:(CDUnknownBlockType)arg1;
- (void)ensureConnected:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)_setupConnection;
- (id)init;

@end

