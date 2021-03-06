//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FPDExtension;

__attribute__((visibility("hidden")))
@interface FPDAccessRight : NSObject
{
    unsigned long long _accessLevel;
    FPDExtension *_provider;
}

@property(readonly, nonatomic) __weak FPDExtension *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long level;
- (id)init;
- (id)initWithURL:(id)arg1 connection:(id)arg2 manager:(id)arg3;
- (id)initWithURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3 manager:(id)arg4;
- (void)_computeAccessForURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3;

@end

