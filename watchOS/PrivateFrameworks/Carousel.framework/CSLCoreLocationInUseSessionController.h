//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLFrontmostSessionAppTracking-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CSLCoreLocationInUseSessionController : NSObject <CSLFrontmostSessionAppTracking>
{
    NSMutableDictionary *_activeAssertions;
    struct os_unfair_lock_s _lock;
    Class _inUseAssertionClass;
}

- (void).cxx_destruct;
- (void)frontmostSessionAppChanged:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithFrontmostAppTracker:(id)arg1 inUseAssertionClass:(Class)arg2;
- (id)initWithFrontmostAppTracker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

