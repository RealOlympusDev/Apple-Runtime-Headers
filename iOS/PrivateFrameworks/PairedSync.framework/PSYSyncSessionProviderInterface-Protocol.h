//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PairedSync/NSObject-Protocol.h>

@protocol PSYSyncSessionProviderInterface <NSObject>
- (oneway void)requestActiveSyncSessionWithCompletion:(void (^)(PSYSyncSession *, NSSet *, NSError *))arg1;
- (oneway void)checkin:(void (^)(_Bool))arg1;
@end

