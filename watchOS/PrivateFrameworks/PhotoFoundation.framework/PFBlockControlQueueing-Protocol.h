//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoFoundation/PFBlockControlCommon-Protocol.h>

@class NSObject;
@protocol OS_dispatch_group;

@protocol PFBlockControlQueueing <PFBlockControlCommon>
- (_Bool)dequeue;
- (_Bool)groupNotify:(NSObject<OS_dispatch_group> *)arg1;
- (_Bool)enqueueWithDelay:(unsigned long long)arg1;
- (_Bool)enqueue;
@end

