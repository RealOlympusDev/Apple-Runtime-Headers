//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallHistory/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol CHSynchronizable <NSObject>
- (BOOL)executeSyncWithBOOL:(BOOL (^)(void))arg1;
- (id)executeSyncWithResult:(id (^)(void))arg1;
- (void)executeSync:(void (^)(void))arg1;
- (void)execute:(void (^)(void))arg1;
- (NSObject<OS_dispatch_queue> *)queue;
@end

