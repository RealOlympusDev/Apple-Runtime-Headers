//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSLDeviceLockManager;

@interface CSLWristDetectionTimeoutSource : NSObject
{
    _Bool _hasStartedUnlockedWristDetection;
    CSLDeviceLockManager *_lockManager;
}

- (void).cxx_destruct;
- (void)wristDetectionDidBegin;
- (double)preferredTimeout;
- (id)init;

@end

