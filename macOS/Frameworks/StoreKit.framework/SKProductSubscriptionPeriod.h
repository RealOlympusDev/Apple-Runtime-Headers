//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SKProductSubscriptionPeriod : NSObject
{
    id _internal;
}

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)initWithISO8601String:(id)arg1;
- (id)init;
- (void)_setUnit:(unsigned long long)arg1;
- (void)_setNumberOfUnits:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long unit;
@property(readonly, nonatomic) unsigned long long numberOfUnits;

@end

