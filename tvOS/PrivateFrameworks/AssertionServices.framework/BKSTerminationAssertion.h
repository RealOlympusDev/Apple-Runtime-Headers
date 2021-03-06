//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssertionServices/BKSAssertion.h>

@class BKSTerminationContext, NSString;

@interface BKSTerminationAssertion : BKSAssertion
{
    NSString *_bundleIdentifier;
    unsigned long long _efficacy;
    BKSTerminationContext *_context;
}

@property(readonly, copy, nonatomic) BKSTerminationContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *targetBundleIdentifier; // @synthesize targetBundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) unsigned long long efficacy; // @synthesize efficacy=_efficacy;
- (void).cxx_destruct;
- (void)invalidate;
- (_Bool)acquire;
- (id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 context:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)_bksErrorForRBSRequestError:(unsigned long long)arg1;

@end

